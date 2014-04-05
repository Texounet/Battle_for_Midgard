#include "../header/main.h"

int fuite(SDL_Surface *ecran, int mstr)
{
	int chance;
	srand(time(NULL));
	 chance = rand() % 3;
	if (chance == 0)
	{
		att_en(ecran, mstr);
		return 1;
	}
	else
		return 0;
}

void aff_men(SDL_Surface *ecran)
{
	ecr_menu(ecran);
	mort(ecran);
 	SDL_Flip(ecran);
}

void att_en(SDL_Surface *ecran, int mstr)
{
	int continu = 1;
	int att = attaque_rand();
	eff_ecr(ecran, mstr);
	void (* tab_att_en[4])(SDL_Surface *ecran, int mstr) = {att1, att2, att3, att4};
	if(enemy.mp < 3 && att == 3)
		att_en(ecran, mstr);
	else if (enemy.mp < 4 && att == 4)
		att_en(ecran, mstr);
	else
	{
		tab_att_en[att](ecran, mstr);
		SDL_Flip(ecran);
		while(continu)
		{
			SDL_Event event;
			SDL_WaitEvent(&event);
			if (event.type == SDL_KEYDOWN)
          	continu = 0;
		}
	}
}

void lvl_up(SDL_Surface *ecran)
{
	char str[256];
	int continu = 1;
	if(hero.xp >= hero.xp_m)
	{
		lvl_ups();
		aff_img(ecran, "./imagem/bataille.png", 0, 0);
		aff_img(ecran, "./imagem/perso.png", 100, 220);
		aff_img(ecran, "./imagem/lvlup.png", 100, 0);
		aff_img(ecran, "./imagem/images.jpg", 0, 374);
		aff_hud(ecran);
		sprintf(str, "%s est passé niveau %i",hero.name, hero.lvl);
		ecr_text(ecran, str, 15, 390);
		SDL_Flip(ecran);
		while(continu)
		{
			SDL_Event event;
			SDL_WaitEvent(&event);
			if (event.type == SDL_KEYDOWN)
          	continu = 0;
		}
	}
}

void lvl_ups()
{
	hero.lvl += 1;
	hero.hp *= 1.1;
	hero.hp_m *= 1.1;
	hero.mp *= 1.1;
	hero.mp_m *= 1.1;
	hero.xp = 0;
	hero.xp_m *= 1.1;
	hero.att *= 1.1;
	hero.inte *= 1.1;
}