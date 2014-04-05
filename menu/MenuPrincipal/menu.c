#include "../../header/main.h"

void menu()
{
  SDL_Surface *ecran;
  SDL_Init(SDL_INIT_VIDEO);
  TTF_Init();
  ecran = SDL_SetVideoMode(680, 510, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
  SDL_WM_SetCaption("RPG", NULL);
  boucle(ecran);
  SDL_FreeSurface(ecran);
}

void declaration_KEYMenu(SDL_Surface *ecran, void (*foncKEYMenu[3])(), SDLKey  KEYMenu[3])
{
  int b;
  Input in;
  memset(&in,0,sizeof(in));
  while(!in.key[SDLK_ESCAPE])
    {
      pos(ecran);
      UpdateEvents(&in);
      for(b = 0; b < 3  ; b++)
	{
	  if (in.key[KEYMenu[b]])
	    {
	      foncKEYMenu[b](ecran);
	      in.key[KEYMenu[b]] = 0;
	    }
	  else if(in.key[SDLK_a])
	    {
	      select3(ecran); 
	    }
	  in.key[SDLK_a] = 0;
	}
    }
}

void boucle(SDL_Surface *ecran)
{
  positionSelect.x = 200;
  positionSelect.y = 250;
  SDLKey  KEYMenu[3];
  KEYMenu[0] = SDLK_z;
  KEYMenu[1] = SDLK_s;
  KEYMenu[2] = SDLK_a;
  void (*foncKEYMenu[3])();
  foncKEYMenu[0] = select1;
  foncKEYMenu[1] = select2;
  foncKEYMenu[2] = select3;
  sel = 0;
  declaration_KEYMenu(ecran, foncKEYMenu, KEYMenu);
}


void pos(SDL_Surface *ecran)
{
  SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));
  posFond(ecran);
  posTitre(ecran);
  posSelect(ecran);
  SDL_Flip(ecran);
}
