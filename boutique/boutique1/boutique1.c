#include "../../header/main.h"

void declaration_KEYBou1(SDL_Surface *ecran, void (*foncKEYBou1[2])(), SDLKey  KEYBou1[2])
{
  int b;
  Input in;
  memset(&in,0,sizeof(in));
  while(!in.key[SDLK_ESCAPE])
    {
      posBou1(ecran);
      UpdateEvents(&in);
      for(b = 0; b < 2 ; b++)
	{
	  if (in.key[KEYBou1[b]])
	    {
	      foncKEYBou1[b](ecran);
	      in.key[KEYBou1[b]] = 0;
	    }
	  else if(in.key[SDLK_a])
{
	      selectBou1(ecran);
	      in.key[SDLK_a] = 0;
}
	}
    }
}

void boutique1(SDL_Surface *ecran)
{
  positionSelect.x = 70;
  positionSelect.y = 250;
  SDLKey KEYBou1[2];
  KEYBou1[0] = SDLK_z;
  KEYBou1[1] = SDLK_s;
  void (*foncKEYBou1[2])();
  foncKEYBou1[0] = select1;
  foncKEYBou1[1] = select2;
  sel = 0;
  declaration_KEYBou1(ecran, foncKEYBou1, KEYBou1);
}

void posBou1(SDL_Surface *ecran)
{
  SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));
  posFondBou1(ecran);
  posSelectBou(ecran);
  posTitreBou1(ecran);
  SDL_Flip(ecran);
}
