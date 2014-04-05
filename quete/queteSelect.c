#include "../header/main.h"

void selectQuete()
{
	if( positionSelectQ.y == 347 && inv_hero.nb_l_pot >= 2)
	{
		inv_hero.nb_l_pot -= 2;
		inv_hero.gold += 500;
	}
}

void select1Quete()
{
  if(selQ == 1)
    {
      selQ--;
      positionSelectQ.y =  positionSelectQ.y - 50;
    }
}

void select2Quete()
{
  if(selQ == 0)
    {
      selQ++;
      positionSelectQ.y =  positionSelectQ.y + 50;
    }
}
