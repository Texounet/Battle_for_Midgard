#include "../header/main.h"

void C_Boule(SDL_Surface *ecran)
{
	int continu = 1;
 	if(crit_rand() < 20)
 	{
 		ecr_text(ecran, "Coup Critique", 20, 400);
		enemy.hp -= 2 + hero.att - (hero.att * enemy.armor / 70);
 	}
 	else if (echec_cri() < 10)
 		ecr_text(ecran, "Echec Critique", 20, 400);
 	else
 	{
 		ecr_text(ecran, "L'ennemi se masse le front", 20, 400);
		enemy.hp -= 1 + hero.att - (hero.att * enemy.armor / 100);
 	}	
 	SDL_Flip(ecran);
	while(continu)
	{
		SDL_Event event;
		SDL_WaitEvent(&event);
		if (event.type == SDL_KEYDOWN)
          continu = 0;
	}
}

void C_Bas(SDL_Surface *ecran)
{
	int continu = 1;
  	if(crit_rand() < 50)
 	{
 		ecr_text(ecran, "Coup Critique", 20, 400);
		enemy.hp -= hero.att - (hero.att * enemy.armor / 70);
 	}
 	else if (echec_cri() < 5)
 		ecr_text(ecran, "Echec Critique", 20, 400);
 	else
 	{
  		ecr_text(ecran, "L'ennemi grimace", 20, 400);
		enemy.hp -= -1 +hero.att - (hero.att * enemy.armor / 100);
 	}
 	SDL_Flip(ecran);
	while(continu)
	{
		SDL_Event event;
		SDL_WaitEvent(&event);
		if (event.type == SDL_KEYDOWN)
          continu = 0;
	}
}

void Ep(SDL_Surface *ecran)
{
	int continu = 1;
  	if(crit_rand() < 25)
 	{
 		ecr_text(ecran, "Coup Critique", 20, 400);
		enemy.hp -= 2 + hero.att - (hero.att * enemy.armor / 70);
 	}
 	else if (echec_cri() < 20)
 		ecr_text(ecran, "Echec Critique", 20, 400);
 	else
 	{
  		ecr_text(ecran, "Du sang apparait", 20, 400);
  		enemy.hp -= 1 + hero.att - (hero.att * enemy.armor / 100);
 	}
 	SDL_Flip(ecran);
	while(continu)
	{
		SDL_Event event;
		SDL_WaitEvent(&event);
		if (event.type == SDL_KEYDOWN)
          continu = 0;
	}
}

void C_Tordu(SDL_Surface *ecran)
{
	int continu = 1;
  	if(crit_rand() < 5)
 	{
 		ecr_text(ecran, "Coup Critique", 20, 400);
		enemy.hp -= 3 + hero.att - (hero.att * enemy.armor / 70);
 	}
 	else if (echec_cri() < 2)
 		ecr_text(ecran, "Echec Critique", 20, 400);
 	else
 	{
  		ecr_text(ecran, "Que c'est-il passé ?", 20, 400);
		enemy.hp -= 2 + hero.att - (hero.att * enemy.armor / 100);
 	}
 	SDL_Flip(ecran);
	while(continu)
	{
		SDL_Event event;
		SDL_WaitEvent(&event);
		if (event.type == SDL_KEYDOWN)
          continu = 0;
	}
}