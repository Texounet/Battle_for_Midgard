#include "../../header/main.h"

void posFondBouA(SDL_Surface *ecran)
{
  SDL_Rect position;
  SDL_Surface *fond;
  fond = IMG_Load("./imagem/fond/magasinA.png");
  position.x = 0;
  position.y = 0;
  SDL_BlitSurface(fond, NULL, ecran, &position);
  SDL_FreeSurface(fond);
}

void posTitreBouA(SDL_Surface *ecran)
{
	char str[256];
	sprintf(str, "Boutique");
	ecr_text_rouge(ecran, str, 275, 150);
	sprintf(str, "Amelioration defense");
	ecr_text_rouge(ecran, str, 100, 250);
	sprintf(str, "Amelioration attaque");
	ecr_text_rouge(ecran, str, 100, 350);
	sprintf(str, "200 Gold");
	ecr_text_hud(ecran, str, 100, 300,1);
	sprintf(str, "200 gold");
	ecr_text_hud(ecran, str, 100, 400,1);
	sprintf(str, " Armure : %i", hero.armor);
	ecr_text_hud(ecran, str, 50, 30, 1);
	sprintf(str, "Attaque : %i", hero.att);
	ecr_text_hud(ecran, str, 50, 80, 1);
	sprintf(str, " Gold : %i", inv_hero.gold);
	ecr_text_hud(ecran, str, 50, 130, 1);
}

void selectBouA()
{
	if( positionSelect.y == 250 && inv_hero.gold >= 200)
	{
hero.armor += 5;
inv_hero.gold -= 200;
	}
	else if( positionSelect.y == 350 && inv_hero.gold >= 200)
	{
hero.att += 5;
inv_hero.gold -= 200;
	}
}
