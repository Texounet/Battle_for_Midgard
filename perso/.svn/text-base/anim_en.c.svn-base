#include "../header/main.h"

void anim_att1(SDL_Surface *ecran, int mstr)
{
	int i;
	char* dif_enemy[5] = 
	{
		"./imagem/mechant/voleur.png",
		"./imagem/mechant/zombie.png",
		"./imagem/mechant/vampire.png",
		"./imagem/mechant/wolf.png",
		"./imagem/mechant/cat.png"
	};
	for(i = 500; i > 100; i -= 70)
	{
		aff_img(ecran, "./imagem/bataille.png", 0, 0);
	  	aff_img(ecran, "./imagem/perso.png", 100, 220);
    	if (mstr == 5)
        aff_img(ecran, "./imagem/mechant/boss.png", i - 50, 180);
    	else
        aff_img(ecran, dif_enemy[mstr], i, 240);
		SDL_Flip(ecran);
	}
	eff_ecr(ecran, mstr);
}

void anim_att2(SDL_Surface *ecran, int mstr)
{
	int i;
	for(i = 380; i > 100; i -= 70)
	{
		aff_img(ecran, "./imagem/poing.png",i, 240);
		SDL_Flip(ecran);
		usleep(100000);
		eff_ecr(ecran, mstr);
	}
}

void anim_att3(SDL_Surface *ecran, int mstr)
{
	int i;
	for(i = 0; i < 200; i += 50)
	{
		aff_img(ecran, "./imagem/thunder.png",120, i);
		SDL_Flip(ecran);
		usleep(100000);
		eff_ecr(ecran, mstr);
	}
}

void anim_att4(SDL_Surface *ecran, int mstr)
{
	int i;
	for(i = 380; i > 100; i -= 70)
	{
		aff_img(ecran, "./imagem/boule.png",i, 240);
		SDL_Flip(ecran);
		eff_ecr(ecran, mstr);
	}
}