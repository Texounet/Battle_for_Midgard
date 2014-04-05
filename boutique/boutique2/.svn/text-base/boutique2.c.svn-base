#include "../../header/main.h"

void declaration_KEYBou2(SDL_Surface *ecran, void (*foncKEYBou2[2])(), SDLKey  KEYBou2[2])
{
  int b;
  Input in;
  memset(&in,0,sizeof(in));
  while(!in.key[SDLK_ESCAPE])
    {
      posBou2(ecran);
      UpdateEvents(&in);
      for(b = 0; b < 2 ; b++)
	{
	  if (in.key[KEYBou2[b]])
	    {
	      foncKEYBou2[b](ecran);
	      in.key[KEYBou2[b]] = 0;
	    }
	  else if(in.key[SDLK_a])
{
	      selectBou2(ecran);
	      in.key[SDLK_a] = 0;
}
	}
    }
}

void boutique2(SDL_Surface *ecran)
{
  positionSelect.x = 70;
  positionSelect.y = 250;
  SDLKey KEYBou2[2];
  KEYBou2[0] = SDLK_z;
  KEYBou2[1] = SDLK_s;
  void (*foncKEYBou2[2])();
  foncKEYBou2[0] = select1;
  foncKEYBou2[1] = select2;
  sel = 0;
  declaration_KEYBou2(ecran, foncKEYBou2, KEYBou2);
}

void posBou2(SDL_Surface *ecran)
{
  SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));
  posFondBou2(ecran);
  posSelectBou(ecran);
  posTitreBou2(ecran);
  SDL_Flip(ecran);
}
