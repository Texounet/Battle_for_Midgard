#include "../../header/main.h"

void posFondBouO(SDL_Surface *ecran)
{
  SDL_Rect position;
  SDL_Surface *fond;
  fond = IMG_Load("./imagem/fond/magasinO.png");
  position.x = 0;
  position.y = 0;
  SDL_BlitSurface(fond, NULL, ecran, &position);
  SDL_FreeSurface(fond);
}

void posTitreBouO(SDL_Surface *ecran)
{
 	char str[256];
	sprintf(str, "Boutique");
	ecr_text_rouge(ecran, str, 275, 150);
	sprintf(str, "Baton de feu");
	ecr_text_rouge(ecran, str, 100, 250);
	sprintf(str, "Baton electrique");
	ecr_text_rouge(ecran, str, 100, 350);
	sprintf(str, "100 Gold");
	ecr_text_hud(ecran, str, 100, 300,1);
	sprintf(str, "100 gold");
	ecr_text_hud(ecran, str, 100, 400,1);
	sprintf(str, " Baton de feu : %i", inv_hero.nb_bt_feu);
	ecr_text_hud(ecran, str, 50, 30, 1);
	sprintf(str, " Baton electrique : %i", inv_hero.nb_bt_eclair);
	ecr_text_hud(ecran, str, 50, 80, 1);
	sprintf(str, " Gold : %i", inv_hero.gold);
	ecr_text_hud(ecran, str, 50, 130, 1);
}

void selectBouO()
{
	if( positionSelect.y == 250 && inv_hero.gold >= 100)
	{
		inv_hero.nb_bt_feu += 1;
		inv_hero.gold -= 100;
	}
	else if( positionSelect.y == 350 && inv_hero.gold >= 100)
	{
		inv_hero.nb_bt_eclair += 1;
		inv_hero.gold -= 100;
	}
}
