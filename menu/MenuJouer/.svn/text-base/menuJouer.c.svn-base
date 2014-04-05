#include "../../header/main.h"

void menuJouer(SDL_Surface *ecran)
{
  SDL_Init(SDL_INIT_VIDEO);
  TTF_Init();
  ecran = SDL_SetVideoMode(680, 510, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
  SDL_WM_SetCaption("RPG", NULL);
  boucleJouer(ecran);
  SDL_FreeSurface(ecran);
}

void declaration_KEYMenuJouer(SDL_Surface *ecran, void (*foncKEYMenuJouer[3])(), SDLKey KEYMenuJouer[3])
{
  int b;
  Input in;
  memset(&in,0,sizeof(in));
  while(!in.key[SDLK_ESCAPE])
    {
      posJou(ecran);
      UpdateEvents(&in);
      for(b = 0; b < 3  ; b++)
	{
	  if (in.key[KEYMenuJouer[b]])
	    {
	      foncKEYMenuJouer[b](ecran);
	      in.key[KEYMenuJouer[b]] = 0;
	    }
	}
    }
}

void boucleJouer(SDL_Surface *ecran)
{
  positionSelect.x = 200;
  positionSelect.y = 250;
  SDLKey KEYMenuJouer[3];
  KEYMenuJouer[0] = SDLK_z;
  KEYMenuJouer[1] = SDLK_s;
  KEYMenuJouer[2] = SDLK_a;
  void (*foncKEYMenuJouer[3])();
  foncKEYMenuJouer[0] = select1;
  foncKEYMenuJouer[1] = select2;
  foncKEYMenuJouer[2] = select3Jouer;
  sel = 0;
  declaration_KEYMenuJouer(ecran, foncKEYMenuJouer, KEYMenuJouer);
}


void posJou(SDL_Surface *ecran)
{
  SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));
  posFondJouer(ecran);
  posSelectJouer(ecran);
  posTitreJouer(ecran);
  SDL_Flip(ecran);
}	
