#include "../header/main.h"

void inv(int carte[][NB_BLOCS_HAUTEUR], SDL_Surface *ecran)
{
	posinv = 250;
	sel = 0;
	carte = carte;
	SDLKey KEYinv[3];
	KEYinv[0] = SDLK_z;
	KEYinv[1] = SDLK_s;
	KEYinv[2] = SDLK_a;
	void (*foncKEYinv[3])();
	foncKEYinv[0] = selectinv1;
	foncKEYinv[1] = selectinv2;
	foncKEYinv[2] = selectinv3;
	boucleinv(foncKEYinv, KEYinv, ecran);
}

void selectinv1()
{
  if(posinv == 280)
{
	posinv = posinv - 30;
	sel--;
    }
}

void selectinv2()
{
  if(posinv == 250)
    {
      posinv =  posinv + 30;
	sel++;
    }
}

void selectinv3()
{
  if(posinv == 250)
{
	if (inv_hero.nb_l_pot > 0)
	{
 		inv_hero.nb_l_pot -= 1;
		if (hero.hp + 15 < hero.hp_m)
			hero.hp += 15;
		else
			hero.hp = hero.hp_m;
	}	
}
else if(posinv == 280)
{
	if (inv_hero.nb_m_pot > 0)
	{
 		inv_hero.nb_m_pot -= 1;
		if (hero.mp + 8 < hero.mp_m)
			hero.mp += 8;
		else
			hero.mp = hero.mp_m;
	}
}
}

void boucleinv(void (*foncKEYinv[3])(), SDLKey KEYinv[3], SDL_Surface *ecran)
{
  ecran = ecran;
  int b;
  Input in;
  memset(&in,0,sizeof(in));
  while(!in.key[SDLK_ESCAPE])
    {
	aff_img(ecran, "./imagem/inv.png", 0, 0);
	stat(ecran);
	inve(ecran);
	SDL_Flip(ecran);
      UpdateEvents(&in);
      for(b = 0; b < 3; b++)
	{
	  if (in.key[KEYinv[b]])
	    {
	      foncKEYinv[b]();
	      in.key[KEYinv[b]] = 0;
	    }
	}
    }


}

void stat(SDL_Surface *ecran)
{
	char str[256];
	sprintf(str, "%s", hero.name);
	ecr_text_hud(ecran, str, 350, 30, 0);
	ecr_text_inv(ecran, "Stats", 45, 20, 0);
	sprintf(str, "Vie : %i / %i", hero.hp, hero.hp_m);
	ecr_text_inv(ecran, str, 35, 60, 0);
	sprintf(str, "Mana : %i / %i", hero.mp, hero.mp_m);
	ecr_text_inv(ecran, str, 35, 100, 0);
	sprintf(str, "XP : %i / %i", hero.xp, hero.xp_m);
	ecr_text_inv(ecran, str, 35, 140, 0);
	sprintf(str, "Attaque : %i", hero.att);
	ecr_text_inv(ecran, str, 35, 180, 0);
	sprintf(str, "Magie : %i", hero.inte);
	ecr_text_inv(ecran, str, 35, 220, 0);
	sprintf(str, "Armure : %i", hero.armor);
	ecr_text_inv(ecran, str, 35, 260, 0);
	sprintf(str, "Resistance : %i", hero.res_mag);
	ecr_text_inv(ecran, str, 35, 300, 0);
}

void inve(SDL_Surface *ecran)
{

	char str[256];
	sprintf(str, "Briquet %i", inv_hero.nb_bt_feu);
	ecr_text_inv(ecran, str, 35, 390, 1);
	sprintf(str, "Electhor : %i", inv_hero.nb_bt_eclair);
	ecr_text_inv(ecran, str, 35, 420, 1);
	sprintf(str, "Potion vie : %i", inv_hero.nb_l_pot);
	ecr_text_inv(ecran, str, 35, 450, 1);
	sprintf(str, "Potion mana : %i", inv_hero.nb_m_pot);
	ecr_text_inv(ecran, str, 35, 480, 1);
	sprintf(str, "Prendre potion de mana");
	ecr_text_inv(ecran, str, 350, 280, 2);
	sprintf(str, "Prendre potion de vie");
	ecr_text_inv(ecran, str, 350, 250, 2);
	sprintf(str, ">");
	ecr_text_inv(ecran, str, 330, posinv, 2);
}
