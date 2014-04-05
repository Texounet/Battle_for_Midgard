#include "../header/main.h"

void decendre(int carte[][NB_BLOCS_HAUTEUR], SDL_Surface *ecran)
{
	persoActuel = perso[BAS];
	deplacerJoueur(carte, &positionJoueur, BAS, ecran);
}

void droitier(int carte[][NB_BLOCS_HAUTEUR], SDL_Surface *ecran)
{
	persoActuel = perso[DROITE];
	deplacerJoueur(carte, &positionJoueur, DROITE, ecran);
}

void gaucher(int carte[][NB_BLOCS_HAUTEUR], SDL_Surface *ecran)
{
	persoActuel = perso[GAUCHE];
	deplacerJoueur(carte, &positionJoueur, GAUCHE, ecran);
}

void monter(int carte[][NB_BLOCS_HAUTEUR], SDL_Surface *ecran)
{
	persoActuel = perso[HAUT];
	deplacerJoueur(carte, &positionJoueur, HAUT, ecran);
}
