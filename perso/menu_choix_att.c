#include "../header/main.h"

void deroul_cmb(SDL_Surface *ecran, int mstr)
{
	cmb = 1;
	int continu = 1;
	init_enemy(mstr);
	choix_att = 0;
	img_cmb(ecran, mstr);
	void (* type_att[3])(SDL_Surface *ecran,int mstr) = {attaque_phy, attaque_mag, obj};
	while(continu && cmb)
	{
		aff_men(ecran);
	  	SDL_Event event;
		SDL_WaitEvent(&event);
		if(event.type == SDL_QUIT)
			continu = 0;
		else if (event.type == SDL_KEYDOWN)
        {
            SDLKey touche = event.key.keysym.sym;
			if (choix_att == 3 && ( touche == SDLK_a))
				continu = fuite(ecran, mstr);
			else if ( touche == SDLK_a)
				type_att[choix_att](ecran, mstr);
			else
				choix_menu(touche);
		}
	}
	lvl_up(ecran);
}

void attaque_phy(SDL_Surface *ecran, int mstr)
{
	int continu = 1;
	choix_att_p = 0;
	void (* att_phy[4])(SDL_Surface *ecran, int mstr) = {Coup_D_Boule, Coup_Bas, Epee, Coup_Tordu};
	while(continu)
	{
		ecr_phy(ecran);
		SDL_Flip(ecran);
	  	SDL_Event event;
		SDL_WaitEvent(&event);
		if(event.type == SDL_QUIT)
			continu = 0;
		else if (event.type == SDL_KEYDOWN)
         {
            SDLKey touche = event.key.keysym.sym;
			if( touche == SDLK_a)
			{
				att_phy[choix_att_p](ecran, mstr);
				continu = 0;
			}
			else if (touche == SDLK_ESCAPE)
				continu = 0;
			else
				fct_choix_p(touche);
		}
	}
}

void attaque_mag(SDL_Surface *ecran, int mstr)
{
	int continu = 1;
	choix_att_m = 0;
	void (* att_mag[4])(SDL_Surface *ecran, int mstr) = {Eruption, Typhon, Cyclone, Seisme};
	while(continu)
	{
		ecr_mag(ecran);
		SDL_Flip(ecran);
	  	SDL_Event event;
		SDL_WaitEvent(&event);
		if(event.type == SDL_QUIT)
			continu = 0;
		else if (event.type == SDL_KEYDOWN)
        {
            SDLKey touche = event.key.keysym.sym; 
			if( touche == SDLK_a)
			{
				att_mag[choix_att_m](ecran, mstr);
				continu = 0;
			}
			else if (touche == SDLK_ESCAPE)
				continu = 0;
			else
				fct_choix_m(touche);
		}
	}
}

void obj(SDL_Surface *ecran, int mstr)
{
	int continu = 1;
	choix_obj = 0;
	void (* obj[4])(SDL_Surface *ecran, int mstr) = {pt_vie, pt_mana, bt_feu, bt_eclair};
	while(continu)
	{
		ecr_obj(ecran);
		SDL_Flip(ecran);
	  	SDL_Event event;
		SDL_WaitEvent(&event);
		if(event.type == SDL_QUIT)
			continu = 0;
		else if (event.type == SDL_KEYDOWN)
         {
            SDLKey touche = event.key.keysym.sym;
			if( touche == SDLK_a)
			{
				obj[choix_obj](ecran, mstr);
				continu = 0;
			}
			else if (touche == SDLK_ESCAPE)
				continu = 0;
			else
				fct_obj(touche);
		}
	}
}