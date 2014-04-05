#include "../../header/main.h"

void declaration_KEYBou(SDL_Surface *ecran, void (*foncKEYBou[3])(), SDLKey KEYBou[3])
{
  int b;
  Input in;
  memset(&in,0,sizeof(in));
  while(!in.key[SDLK_ESCAPE])
    {
      posBou(ecran);
      UpdateEvents(&in);
      for(b = 0; b < 3; b++)
	{
    if(in.key[KEYBou[b]])
      {
        foncKEYBou[b]();
        in.key[KEYBou[b]] = 0;
      }
}
    }
}

void boutique(SDL_Surface *ecran)
{
  positionSelect.x = 70;
  positionSelect.y = 250;
  SDLKey  KEYBou[3];
  KEYBou[0] = SDLK_z;
  KEYBou[1] = SDLK_s;
  KEYBou[2] = SDLK_a;
  void (*foncKEYBou[3])();
  foncKEYBou[0] = select1;
  foncKEYBou[1] = select2;
  foncKEYBou[2] = selectBou;
  sel = 0;
  declaration_KEYBou(ecran, foncKEYBou, KEYBou);
}

void posBou(SDL_Surface *ecran)
{
  SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));
  posFondBou(ecran);
  posSelectBou(ecran);
  posTitreBou(ecran);
  SDL_Flip(ecran);
}

void selectBou()
{
	if( positionSelect.y == 250 && inv_hero.gold >= 150)
	{
		inv_hero.nb_l_pot += 1;
		inv_hero.gold -= 150;
	}
	else if( positionSelect.y == 350 && inv_hero.gold >= 200)
	{
		inv_hero.nb_m_pot +=1;
		inv_hero.gold -= 200;
	}
}
