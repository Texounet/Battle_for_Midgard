#include "../header/main.h"

void eff_ecr(SDL_Surface *ecran, int mstr)
{
	SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 0, 0, 0));
	aff_img(ecran, "./imagem/bataille.png", 0, 0);
  	aff_pers(ecran, mstr);
    aff_menu(ecran);
  	aff_hud(ecran);
}

void aff_hud(SDL_Surface *ecran)
{
	char str[256];
	sprintf(str, " HP : %i / %i", hero.hp, hero.hp_m);
	ecr_text_hud(ecran, str, 500, 390, 0);
	sprintf(str, " HP : %i / %i ", hero.mp, hero.mp_m);
	ecr_text_hud(ecran, str, 500, 430, 1);
	sprintf(str, " XP : %i", hero.xp);
	ecr_text_hud(ecran, str, 500, 470, 2);
}