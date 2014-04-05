#include "../../header/main.h"

void declaration_KEYBouM(SDL_Surface *ecran, void (*foncKEYBouM[3])(), SDLKey  KEYBouM[3])
{
  int b;
  Input in;
  memset(&in,0,sizeof(in));
  while(!in.key[SDLK_ESCAPE])
    {
      posBouM(ecran);
      UpdateEvents(&in);
      for(b = 0; b < 3 ; b++)
	{
	  if (in.key[KEYBouM[b]])
	    {
	      foncKEYBouM[b](ecran);
	      in.key[KEYBouM[b]] = 0;
	    }
	}
    }
}

void boutiqueM(SDL_Surface *ecran)
{
  positionSelect.x = 70;
  positionSelect.y = 250;
  SDLKey KEYBouM[3];
  KEYBouM[0] = SDLK_z;
  KEYBouM[1] = SDLK_s;
  KEYBouM[2] = SDLK_a;
  void (*foncKEYBouM[3])();
  foncKEYBouM[0] = select1;
  foncKEYBouM[1] = select2;
  foncKEYBouM[2] = selectBouM;
  sel = 0;
  declaration_KEYBouM(ecran, foncKEYBouM, KEYBouM);
}

void posBouM(SDL_Surface *ecran)
{
  SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));
  posFondBouM(ecran);
  posSelectBou(ecran);
  posTitreBouM(ecran);
  SDL_Flip(ecran);
}
