#include "../header/main.h"
void jouer(SDL_Surface* ecran)
{
  niveauc[0] = "./niveau/niveau1.txt";
  niveauc[1] = "./niveau/niveau2.txt";
  decor = IMG_Load("./map/tiles/fondHerbe.jpg");
  arbre = IMG_Load("./map/tiles/arbre.png");
  rocher = IMG_Load("./map/tiles/rocher.png");
  magasin = IMG_Load("./map/tiles/store.png");
  monstre = IMG_Load("./map/tiles/mstr.png");
  boss = IMG_Load("./map/tiles/boss.png");
  pnj = IMG_Load("./map/tiles/pnj.png");
  perso[BAS] = IMG_Load("./map/tiles/bas.png");
  perso[GAUCHE] = IMG_Load("./map/tiles/gauche.png");
  perso[HAUT] = IMG_Load("./map/tiles/haut.png");
  perso[DROITE] = IMG_Load("./map/tiles/droite.png");
  persoActuel = perso[BAS];
  placement(ecran, position);
  SDL_FreeSurface(decor);
}

void UpdateEvents(Input* in)
{
  SDL_Event event;

  while(SDL_PollEvent(&event))
  {
    if (event.type == SDL_KEYDOWN)
      in->key[event.key.keysym.sym]= 1;
    break;
    if (event.type == SDL_KEYUP)
      in->key[event.key.keysym.sym]= 0;
  }
}

void placement(SDL_Surface* ecran, SDL_Rect position)
{
  int carte[NB_BLOCS_LARGEUR][NB_BLOCS_HAUTEUR];
  if (!chargerNiveau(carte))
    exit(EXIT_FAILURE);
  placementPerso(carte);
  boucleMap(carte, ecran, position);
  SDL_EnableKeyRepeat(100, 100);
  placementFree();
}

void boucleMap(int carte[][NB_BLOCS_HAUTEUR], SDL_Surface* ecran, SDL_Rect position)
{
  hero_m = 1;
  SDLKey KEY[5];
  void (*foncKEY[5])(int carte[][NB_BLOCS_HAUTEUR], SDL_Surface *ecran) = {monter, decendre, droitier,gaucher, inv};
  KEY[0] = SDLK_z, KEY[1] = SDLK_s, KEY[2] = SDLK_d, KEY[3] = SDLK_q, KEY[4] = SDLK_i;
  int a;
  Input in;
  memset(&in,0,sizeof(in));
  while((!in.key[SDLK_ESCAPE]) && hero_m)
  {
    UpdateEvents(&in);
    for(a = 0; a < 5; a++)
    {
      if (in.key[KEY[a]])
      {
        foncKEY[a](carte, ecran);
        in.key[KEY[a]] = 0;
      }  
    }
    if(hero_m)
    {
      effaceEcran(carte, ecran);
      posJoueur(ecran, position);
    }
  } 
}
