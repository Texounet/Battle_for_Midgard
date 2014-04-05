#include "../header/main.h"

void ecr_phy(SDL_Surface *ecran)
{
    aff_menu(ecran);
    char* sur[4] = {"> Coup D'Boule","> Coup Bas","> Epee","> Coup Tordu"};
    char* n_sur[4] = {" Coup D'Boule"," Coup Bas"," Epee"," Coup Tordu"};
    int i;
    for(i = 0; i < 4; i++)
    {
        if(i != choix_att_p)
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

void ecr_mag(SDL_Surface *ecran)
{
    aff_menu(ecran);
    char* sur[4] = {"> Eruption","> Typhon","> Cyclone","> Seisme"};
    char* n_sur[4] = {"Eruption","Typhon","Cyclone","Seisme"};
    int i;
    for(i = 0; i < 4; i++)
    {
        if(i != choix_att_m)
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

void ecr_obj(SDL_Surface *ecran)
{
    aff_menu(ecran);
    char* sur[4] = {"> Potion Vie","> Potion Mana","> Briquet","> Electhor"};
    char* n_sur[4] = {"Potion Vie","Potion Mana","Briquet","Electhor"};
    int i;
    for(i = 0; i < 4; i++)
    {
        if(i != choix_obj)
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