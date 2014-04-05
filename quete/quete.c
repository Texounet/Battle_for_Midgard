#include "../header/main.h"

void quete(SDL_Surface *ecran)
{
  SDL_Init(SDL_INIT_VIDEO);
  TTF_Init();
  ecran = SDL_SetVideoMode(680, 510, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
  SDL_WM_SetCaption("RPG", NULL);
  boucleQuete(ecran);
  SDL_FreeSurface(ecran);
}

void declaration_KEYQuete(SDL_Surface *ecran, void (*foncKEYQuete[3])(), SDLKey KEYQuete[3])
{
  int b;
  Input in;
  memset(&in,0,sizeof(in));
  while(!in.key[SDLK_ESCAPE])
    {
      posQuetes(ecran);
      UpdateEvents(&in);
      for(b = 0; b < 3; b++)
	{
    if(in.key[KEYQuete[b]])
      {
        foncKEYQuete[b]();
        in.key[KEYQuete[b]] = 0;
      }
else if(in.key[SDLK_a] && positionSelectQ.y == 397)
in.key[SDLK_ESCAPE] = 1;
}
    }
}

void boucleQuete(SDL_Surface *ecran)
{
  positionSelectQ.x = 130;
  positionSelectQ.y = 347;
  SDLKey  KEYQuete[3];
  KEYQuete[0] = SDLK_z;
  KEYQuete[1] = SDLK_s;
  KEYQuete[2] = SDLK_a;
  void (*foncKEYQuete[3])();
  foncKEYQuete[0] = select1Quete;
  foncKEYQuete[1] = select2Quete;
  foncKEYQuete[2] = selectQuete;
  sel = 0;
  declaration_KEYQuete(ecran, foncKEYQuete, KEYQuete);
}

void posQuetes(SDL_Surface *ecran)
{
  SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));
  posFondQuete(ecran);
  posSelectQuete(ecran);
  posQuete(ecran);
  SDL_Flip(ecran);
}
