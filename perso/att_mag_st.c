#include "../header/main.h"

void erupt(SDL_Surface *ecran)
{
	int continu = 1;
	if(crit_rand() < 15)
 	{
 		ecr_text(ecran, "Coup Critique", 20, 400);
		enemy.hp -= 3 + hero.inte - (hero.inte * enemy.res_mag / 70);
 	}
 	else if (echec_cri() < 10)
 		ecr_text(ecran, "Echec Critique", 20, 400);
 	else
 	{
  		ecr_text(ecran, "Un volcan apparait", 20, 400);
		enemy.hp -= 2 + hero.inte - (hero.inte * enemy.res_mag / 100);
 	}
 	hero.mp -= 4;
 	SDL_Flip(ecran);
 	while(continu)
	{
		SDL_Event event;
		SDL_WaitEvent(&event);
		if (event.type == SDL_KEYDOWN)
          continu = 0;
	}
}
void typh(SDL_Surface *ecran)
{	
	int continu = 1;
  	if(crit_rand() < 20)
 	{
 		ecr_text(ecran, "Coup Critique", 20, 400);
		enemy.hp -= + hero.inte - (hero.inte * enemy.res_mag / 70);
 	}
 	else if (echec_cri() < 5)
 		ecr_text(ecran, "Echec Critique", 20, 400);
 	else
 	{
  		ecr_text(ecran, "Une pertubation approche", 20, 400);
		enemy.hp -=  1 + hero.inte - (hero.inte * enemy.res_mag / 100);
 	}
 	hero.mp -= 5;
 	SDL_Flip(ecran);
 	while(continu)
	{
		SDL_Event event;
		SDL_WaitEvent(&event);
		if (event.type == SDL_KEYDOWN)
          continu = 0;
	}
}
void cycl(SDL_Surface *ecran)
{  	
	int continu = 1;
	if(crit_rand() < 10)
 	{
 		ecr_text(ecran, "Coup Critique", 20, 400);
		enemy.hp -= 2 + hero.inte - (hero.inte * enemy.res_mag / 70);
 	}
 	else if (echec_cri() < 10)
 		ecr_text(ecran, "Echec Critique", 20, 400);
 	else
 	{
  		ecr_text(ecran, "Les vents se levent", 20, 400);
		enemy.hp -= 1 + hero.inte - (hero.inte * enemy.res_mag / 100);
 	}
 	hero.mp -= 3;
	SDL_Flip(ecran);
 	while(continu)
	{
		SDL_Event event;
		SDL_WaitEvent(&event);
		if (event.type == SDL_KEYDOWN)
          continu = 0;
	}
}
void sei(SDL_Surface *ecran)
{	
	int continu = 1;
  	if(crit_rand() < 15)
 	{
 		ecr_text(ecran, "Coup Critique", 20, 400);
		enemy.hp -= 1 + hero.inte - (hero.inte * enemy.res_mag / 70);
 	}
 	else if (echec_cri() < 1)
 		ecr_text(ecran, "Echec Critique", 20, 400);
 	else
 	{
  		ecr_text(ecran, "La terre tremble", 20, 400);
		enemy.hp -= hero.inte - (hero.inte * enemy.res_mag / 100);
 	}
 	hero.mp -= 6;
	SDL_Flip(ecran);
 	while(continu)
	{
		SDL_Event event;
		SDL_WaitEvent(&event);
		if (event.type == SDL_KEYDOWN)
          continu = 0;
	}
}