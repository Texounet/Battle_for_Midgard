#include "../header/main.h"

void rocheux(int carte[][NB_BLOCS_HAUTEUR], SDL_Surface *ecran)
{
carte = carte;
ecran = ecran;
objetActuel = rocher;
objet = ROCHER;
}

void bois(int carte[][NB_BLOCS_HAUTEUR], SDL_Surface *ecran)
{
carte = carte;
ecran = ecran;
objetActuel = arbre;
objet = ARBRE;
}

void personageBas(int carte[][NB_BLOCS_HAUTEUR], SDL_Surface *ecran)
{
carte = carte;
ecran = ecran;
objetActuel = perso[BAS];
objet = PERSO;
}

void vide(int carte[][NB_BLOCS_HAUTEUR], SDL_Surface *ecran)
{
carte = carte;
ecran = ecran;
objetActuel = herbe;
objet = VIDE;
}

void magasinEdit(int carte[][NB_BLOCS_HAUTEUR], SDL_Surface *ecran)
{
carte = carte;
ecran = ecran;
objetActuel = magasin;
objet = MAGASIN;
}

void pnjEdit(int carte[][NB_BLOCS_HAUTEUR], SDL_Surface *ecran)
{
carte = carte;
ecran = ecran;
objetActuel = pnj;
objet = PNJ;
}

void mstrEdit(int carte[][NB_BLOCS_HAUTEUR], SDL_Surface *ecran)
{
carte = carte;
ecran = ecran;
objetActuel = monstre;
objet = MONSTRE;
}

void bossEdit(int carte[][NB_BLOCS_HAUTEUR], SDL_Surface *ecran)
{
carte = carte;
ecran = ecran;
objetActuel = boss;
objet = BOSS;
}
	
