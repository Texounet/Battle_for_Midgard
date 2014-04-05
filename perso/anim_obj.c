#include "../header/main.h"

void anim_l(SDL_Surface *ecran, int mstr)
{
	int i;

	  for (i = 150; i < 200; i += 10)
	  {
	  	aff_img(ecran, "./imagem/life.png", 120, i);
	  	SDL_Flip(ecran);
	  	eff_ecr(ecran, mstr);
	  }
	  ecr_text(ecran, "Ca fait du bien", 20, 400);
	  SDL_Flip(ecran);
	  usleep(100000);
}

void anim_m(SDL_Surface *ecran, int mstr)
{
	int i;
	 for (i = 150; i < 200; i += 10)
	  {
	  	aff_img(ecran, "./imagem/mana.png", 120, i);
	  	SDL_Flip(ecran);
	  	eff_ecr(ecran, mstr);
	  }
  	ecr_text(ecran, "Du mana, Enfin !", 20, 400);
	  SDL_Flip(ecran);
	  usleep(100000);
}

void anim_b(SDL_Surface *ecran, int mstr)
{
	int i;
	for (i = 250; i > 190; i -= 10)
	{
		aff_img(ecran, "./imagem/flamme.png", 510, i);
		SDL_Flip(ecran);
		eff_ecr(ecran, mstr);
	}
  	ecr_text(ecran, "Me reste-il du gaz", 20, 400);
 	SDL_Flip(ecran);
 }

void anim_e(SDL_Surface *ecran, int mstr)
{
	int j;
	int i;
	for (i = 100, j = 250; j < 500 ; i += 15 , j += 25)
	{
		aff_img(ecran, "./imagem/electhor.png", j, i);
		SDL_Flip(ecran);
		eff_ecr(ecran, mstr);
	}
   		ecr_text(ecran, "Un pti coup de Zeus ?", 20, 400);
 		SDL_Flip(ecran);
 }