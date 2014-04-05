#include "../../header/main.h"

void declaration_KEYBouA(SDL_Surface *ecran, void (*foncKEYBouA[3])(), SDLKey  KEYBouA[3])
{
  int b;
  Input in;
  memset(&in,0,sizeof(in));
  while(!in.key[SDLK_ESCAPE])
    {
      posBouA(ecran);
      UpdateEvents(&in);
      for(b = 0; b < 3 ; b++)
	{
	  if (in.key[KEYBouA[b]])
	    {
	      foncKEYBouA[b](ecran);
	      in.key[KEYBouA[b]] = 0;
	    }
	}
    }
}

void boutiqueA(SDL_Surface *ecran)
{
  positionSelect.x = 70;
  positionSelect.y = 250;
  SDLKey KEYBouA[3];
  KEYBouA[0] = SDLK_z;
  KEYBouA[1] = SDLK_s;
  KEYBouA[2] = SDLK_a;
  void (*foncKEYBouA[3])();
  foncKEYBouA[0] = select1;
  foncKEYBouA[1] = select2;
  foncKEYBouA[2] = selectBouA;
  sel = 0;
  declaration_KEYBouA(ecran, foncKEYBouA, KEYBouA);
}

void posBouA(SDL_Surface *ecran)
{
  SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));
  posFondBouA(ecran);
  posSelectBou(ecran);
  posTitreBouA(ecran);
  SDL_Flip(ecran);
}
