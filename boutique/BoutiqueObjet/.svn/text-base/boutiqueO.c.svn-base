#include "../../header/main.h"

void declaration_KEYBouO(SDL_Surface *ecran, void (*foncKEYBouO[3])(), SDLKey  KEYBouO[3])
{
  int b;
  Input in;
  memset(&in,0,sizeof(in));
  while(!in.key[SDLK_ESCAPE])
    {
      posBouO(ecran);
      UpdateEvents(&in);
      for(b = 0; b < 3 ; b++)
	{
	  if (in.key[KEYBouO[b]])
	    {
	      foncKEYBouO[b](ecran);
	      in.key[KEYBouO[b]] = 0;
	    }
	}
    }
}

void boutiqueO(SDL_Surface *ecran)
{
  positionSelect.x = 70;
  positionSelect.y = 250;
  SDLKey KEYBouO[3];
  KEYBouO[0] = SDLK_z;
  KEYBouO[1] = SDLK_s;
  KEYBouO[2] = SDLK_a;
  void (*foncKEYBouO[3])();
  foncKEYBouO[0] = select1;
  foncKEYBouO[1] = select2;
  foncKEYBouO[2] = selectBouO;
  sel = 0;
  declaration_KEYBouO(ecran, foncKEYBouO, KEYBouO);
}

void posBouO(SDL_Surface *ecran)
{
  SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));
  posFondBouO(ecran);
  posSelectBou(ecran);
  posTitreBouO(ecran);
  SDL_Flip(ecran);
}
