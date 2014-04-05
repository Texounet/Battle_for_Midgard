#include "../header/main.h"

void att1(SDL_Surface *ecran, int mstr)
{
 	anim_att1(ecran, mstr);
 	if(crit_rand() < 15)
 	{
 		ecr_text(ecran, "Coup Critique", 20, 400);
		hero.hp -= 2 + enemy.att - (enemy.att * hero.armor / 70);
 	}
 	else if (echec_cri() < 10)
 		ecr_text(ecran, "Echec Critique", 20, 400);
 	else
 	{
 		ecr_text(ecran, "Quelle vitesse !!", 20, 400);
		hero.hp -= 2 + enemy.att - (enemy.att * hero.armor / 100);
 	}
}

void att2(SDL_Surface *ecran, int mstr)
{
 	anim_att2(ecran, mstr);
 	if(crit_rand() < 20)
 	{
 		ecr_text(ecran, "Coup Critique", 20, 400);
		hero.hp -= enemy.att - (enemy.att * hero.armor / 70);
 	}
 	else if (echec_cri() < 5)
 		ecr_text(ecran, "Echec Critique", 20, 400);
 	else
 	{
 		ecr_text(ecran, "RATATATATATATATA", 20, 400);
		hero.hp -= enemy.att - (enemy.att * hero.armor / 100);
 	}
}

void att3(SDL_Surface *ecran, int mstr)
{
 	anim_att3(ecran, mstr);
 	if(crit_rand() < 20)
 	{
 		ecr_text(ecran, "Coup Critique", 20, 400);
		hero.hp -= enemy.inte - (enemy.inte * hero.res_mag / 70);
 	}
 	else if (echec_cri() < 10)
 		ecr_text(ecran, "Echec Critique", 20, 400);
 	else
 	{
 		ecr_text(ecran, "Tonnerre", 20, 400);
		hero.hp -= enemy.inte - (enemy.inte * hero.res_mag / 100);
 	}
 	enemy.mp -= 3;
}

void att4(SDL_Surface *ecran, int mstr)
{
 	anim_att4(ecran, mstr);
 	if(crit_rand() < 15)
 	{
 		ecr_text(ecran, "Coup Critique", 20, 400);
		hero.hp -= 2 + enemy.inte - (enemy.inte * hero.res_mag / 70);
 	}
 	else if (echec_cri() < 5)
 		ecr_text(ecran, "Echec Critique", 20, 400);
 	else
 	{
 		ecr_text(ecran, "HADOKEN !", 20, 400);
		hero.hp -= 2 + enemy.inte - (enemy.inte * hero.res_mag / 100);
 	}
 	enemy.mp -= 4;
}