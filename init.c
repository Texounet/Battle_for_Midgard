// fichier pour l'initialisation
#include "./header/main.h"
void init_sdl()
{
  SDL_Surface *ecran;
  ecran = NULL;
  if (SDL_Init(SDL_INIT_VIDEO) == -1)
  {
    fprintf(stderr, "Erreur d'initialisation de la SDL : %s\n", SDL_GetError());
    exit(EXIT_FAILURE);
  }
  ecran = SDL_SetVideoMode(LARGEUR_FENETRE , HAUTEUR_FENETRE, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
  if (ecran == NULL)
  {
    fprintf(stderr, "Impossible de charger le mode vidéo : %s\n", SDL_GetError());
    exit(EXIT_FAILURE);
  }
  preums(ecran);
  Pause(ecran);
}

void free_sdl()
{
  TTF_Quit();
  SDL_Quit();
}

void preums(SDL_Surface *ecran)
{
  SDL_Surface *menu = NULL;
  menu = IMG_Load("./imagem/menu.jpg");
  SDL_Rect position_menu;
  position_menu.x = 0;
  position_menu.y = 0;
  SDL_WM_SetCaption("RPG", NULL);
  SDL_BlitSurface(menu, NULL, ecran, &position_menu);
  SDL_Flip(ecran);
  SDL_FreeSurface(menu);
}

void Pause(SDL_Surface *ecran)//boucle + fermeture avec x + 1 lancement du  jeu
{
  int continuer = 1;
  SDL_Event event;
  while (continuer)
  {
    SDL_WaitEvent(&event);
    switch(event.type)
    {
      case SDL_QUIT:
      continuer = 0;
      break;
      case SDL_KEYDOWN:
      switch(event.key.keysym.sym)
      {
        case SDLK_ESCAPE:
        continuer = 0;
        break;
        case SDLK_a:
        jouer(ecran);
        break;
        default:
        break;
      }
      break;
    }
  }
}

