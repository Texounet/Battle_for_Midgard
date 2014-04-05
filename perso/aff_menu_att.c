#include "../header/main.h"

void img_cmb(SDL_Surface *ecran, int nb)
{
	SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 0, 0, 0));
    aff_img(ecran, "./imagem/bataille.png", 0, 0);
    aff_pers(ecran, nb);
    ecr_menu(ecran);
 	SDL_Flip(ecran);
}

void aff_pers(SDL_Surface *ecran, int nb)
{
  aff_img(ecran, "./imagem/perso.png", 100, 220);
	char* dif_enemy[5] = 
	{
		"./imagem/mechant/voleur.png",
		"./imagem/mechant/zombie.png",
		"./imagem/mechant/vampire.png",
		"./imagem/mechant/wolf.png",
		"./imagem/mechant/cat.png"
	};
    if (nb == 5)
        aff_img(ecran, "./imagem/mechant/boss.png", 400, 180);
    else
        aff_img(ecran, dif_enemy[nb], 500, 240);
}

void ecr_menu(SDL_Surface *ecran)
{
    aff_menu(ecran);
    char* sur[4] = {"> Attaque","> Magie","> objet","> Fuite"};
    char* n_sur[4] = {"Attaque","Magie","objet","Fuite"};
    int i;
    for(i = 0; i < 4; i++)
    {
        if(i != choix_att)
        {
            ecr_text(ecran, n_sur[i], 20, 400  + (25 * i));
        }
        else
        {
            ecr_text(ecran, sur[i], 20, 400 + (25 * i));   
        }
    }
    aff_hud(ecran);
}