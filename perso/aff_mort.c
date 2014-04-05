#include "../header/main.h"

void mort(SDL_Surface *ecran)
{
	if(hero.hp < 1)
	{
		aff_gameover(ecran);
		cmb = 0;
		hero_m = 0;
	}
	else if(enemy.hp < 1)
	{
		aff_morten(ecran);
		cmb = 0;
	}
}

void aff_gameover(SDL_Surface *ecran)
{
	int continu;
	aff_img(ecran, "./imagem/gameover.png", 0, 0);
	SDL_Flip(ecran);
	while(continu)
	{
		SDL_Event event;
		SDL_WaitEvent(&event);
		if(event.type == SDL_QUIT || event.type == SDL_KEYDOWN)
			continu = 0;
	}
}

void aff_morten(SDL_Surface *ecran)
{
	int continu;
	char str[256];
	aff_img(ecran, "./imagem/bataille.png", 0, 0);
	aff_img(ecran, "./imagem/perso.png", 100, 220);
	aff_menu(ecran);
	sprintf(str, " Vous avez tué un %s", enemy.name);
	ecr_text(ecran, str, 15, 390);
	SDL_Flip(ecran);
    inv_hero.gold += 150;
	hero.xp += enemy.xp_give;
	while(continu)
	{
		SDL_Event event;
		SDL_WaitEvent(&event);
		if(event.type == SDL_QUIT || event.type == SDL_KEYDOWN)
			continu = 0;
	}
}
