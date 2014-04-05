#include "../header/main.h"

void anim_Boule(SDL_Surface *ecran, int mstr)
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
	for(i = 150; i < 500; i += 70)
	{
		aff_img(ecran, "./imagem/bataille.png", 0, 0);
	  	aff_img(ecran, "./imagem/perso.png", i, 220);    	
	  	if (mstr == 5)
        aff_img(ecran, "./imagem/mechant/boss.png", 500 - 50, 180);
    	else
		aff_img(ecran, dif_enemy[mstr], 500, 240);
		SDL_Flip(ecran);
	}
	eff_ecr(ecran, mstr);
}

void anim_Bas(SDL_Surface *ecran, int mstr)
{	
	eff_ecr(ecran, mstr);
	char* dif_enemy[6] = 
	{
		"./imagem/mechant/voleur.png",
		"./imagem/mechant/zombie.png",
		"./imagem/mechant/vampire.png",
		"./imagem/mechant/wolf.png",
		"./imagem/mechant/cat.png",
		"./imagem/mechant/"
	};
		aff_img(ecran, "./imagem/bataille.png", 0, 0);
	  	aff_img(ecran, "./imagem/perso.png", 150, 220);
		aff_img(ecran, dif_enemy[mstr], 500, 240);
		SDL_Flip(ecran);
		aff_img(ecran, "./imagem/bataille.png", 0, 0);
	  	aff_img(ecran, "./imagem/perso.png", 170, 220);
		aff_img(ecran, dif_enemy[mstr], 500, 240);
		SDL_Flip(ecran);
		aff_img(ecran, "./imagem/bataille.png", 0, 0);
	  	aff_img(ecran, "./imagem/perso.png", 150, 220);
		SDL_Flip(ecran);
		eff_ecr(ecran, mstr);
}

void anim_Epee(SDL_Surface *ecran, int mstr)
{
  int i;
  for(i = 150; i < 240; i = i + 10)
  {
  	eff_ecr(ecran, mstr);
  	aff_img(ecran, "./imagem/epee.png", 370, i);
  	SDL_Flip(ecran);
  	usleep(100000);
  }
  eff_ecr(ecran, mstr);
}

void anim_Tordu(SDL_Surface *ecran, int mstr)
{
	SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 250, 250, 250));
	SDL_Flip(ecran);
	usleep(100000);
	eff_ecr(ecran, mstr);
}