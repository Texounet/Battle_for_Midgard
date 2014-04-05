#include "../header/main.h"

void declaration_KEYBou0(SDL_Surface *ecran, void (*foncKEYBou0[2])(), SDLKey  KEYBou0[2])
{
  int b;
  Input in;
  memset(&in,0,sizeof(in));
  while(!in.key[SDLK_ESCAPE])
    {
      posBou0(ecran);
      UpdateEvents(&in);
      for(b = 0; b < 2 ; b++)
	{
	  if (in.key[KEYBou0[b]])
	    {
	      foncKEYBou0[b](ecran);
	      in.key[KEYBou0[b]] = 0;
	    }
	  else if(in.key[SDLK_a])
{
	      selectBou0(ecran);
	      in.key[SDLK_a] = 0;
}
	}
    }
}

void boutique0(SDL_Surface *ecran)
{
  positionSelect.x = 70;
  positionSelect.y = 250;
  SDLKey KEYBou0[2];
  KEYBou0[0] = SDLK_z;
  KEYBou0[1] = SDLK_s;
  void (*foncKEYBou0[2])();
  foncKEYBou0[0] = select1;
  foncKEYBou0[1] = select2;
  sel = 0;
  declaration_KEYBou0(ecran, foncKEYBou0, KEYBou0);
}

void posBou0(SDL_Surface *ecran)
{
  SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));
  posFondBou0(ecran);
  posSelectBou(ecran);
  posTitreBou0(ecran);
  SDL_Flip(ecran);
}
