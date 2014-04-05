#include "../header/main.h"

void pt_vie(SDL_Surface *ecran, int mstr)
{
	int continu = 1;
	if (inv_hero.nb_l_pot > 0)
	{
  		if(hero.hp < (hero.hp_m - 15))
  			hero.hp += 15;
  		else
  			hero.hp = hero.hp_m;
  		anim_l(ecran, mstr);
		while(continu)
		{
			SDL_Event event;
			SDL_WaitEvent(&event);
			if (event.type == SDL_KEYDOWN)
          	continu = 0;
		}
		att_en(ecran, mstr);
		inv_hero.nb_l_pot -= 1;
	}
	else
	{
		eff_ecr(ecran, mstr);
  		ecr_text(ecran, "Plus de Potions", 20, 400);
	}
}

void pt_mana(SDL_Surface *ecran, int mstr)
{
	int continu = 1;
	if (inv_hero.nb_m_pot > 0)
	{
  		if(hero.mp < (hero.mp_m - 8))
  			hero.mp += 8;
  		else
  			hero.mp = hero.mp_m;
		anim_m(ecran, mstr);
		while(continu)
		{
			SDL_Event event;
			SDL_WaitEvent(&event);
			if (event.type == SDL_KEYDOWN)
          	continu = 0;
		}
		att_en(ecran, mstr);
		inv_hero.nb_m_pot -= 1;
	}
	else
	{
		eff_ecr(ecran, mstr);
  		ecr_text(ecran, "Plus de Potions", 20, 400);
	}
}

void bt_feu(SDL_Surface *ecran, int mstr)
{
	int continu = 1;
	if (inv_hero.nb_bt_feu > 0)
	{
		enemy.hp -= 8;
		anim_b(ecran, mstr);
		while(continu)
		{
			SDL_Event event;
			SDL_WaitEvent(&event);
			if (event.type == SDL_KEYDOWN)
          	continu = 0;
		}
		inv_hero.nb_bt_feu -= 1;
		if(enemy.hp > 0)
		att_en(ecran, mstr);
	}
	else
	{
		eff_ecr(ecran, mstr);
  		ecr_text(ecran, "Plus de Briquet", 20, 400);
	}
}

void bt_eclair(SDL_Surface *ecran, int mstr)
{
	int continu = 1;
	if (inv_hero.nb_bt_eclair > 0)
	{
		enemy.hp -= 7;
		anim_e(ecran, mstr);
		while(continu)
		{
			SDL_Event event;
			SDL_WaitEvent(&event);
			if (event.type == SDL_KEYDOWN)
          	continu = 0;
		}
		inv_hero.nb_bt_eclair -= 1;
		if(enemy.hp > 0)
		att_en(ecran, mstr);
	}
	else
	{
		eff_ecr(ecran, mstr);
  		ecr_text(ecran, "Plus de Briquet", 20, 400);
	}
}