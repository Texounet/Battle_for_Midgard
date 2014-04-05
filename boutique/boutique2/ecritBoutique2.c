#include "../../header/main.h"

void posFondBou2(SDL_Surface *ecran)
{
  SDL_Rect position;
  SDL_Surface *fond;
  fond = IMG_Load("./imagem/fond/magasinO.png");
  position.x = 0;
  position.y = 0;
  SDL_BlitSurface(fond, NULL, ecran, &position);
  SDL_FreeSurface(fond);
}

void posTitreBou2(SDL_Surface *ecran)
{
 	char str[256];
	sprintf(str, "Boutique");
	ecr_text_rouge(ecran, str, 275, 150);
	sprintf(str, "Boutique Potion");
	ecr_text_rouge(ecran, str, 100, 250);
	sprintf(str, "Boutique Objet");
	ecr_text_rouge(ecran, str, 100, 350);
	sprintf(str, " Gold : %i", inv_hero.gold);
	ecr_text_hud(ecran, str, 50, 130, 1);
}

void selectBou2(SDL_Surface *ecran)
{
	if( positionSelect.y == 250 && inv_hero.gold >= 100)
	{
		boutique(ecran);
	}
	else if( positionSelect.y == 350 && inv_hero.gold >= 100)
	{
		boutiqueO(ecran);
	}
}
