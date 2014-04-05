#include "../header/main.h"

void decendreEdit(int carte[][NB_BLOCS_HAUTEUR], SDL_Surface *ecran)
{
	deplacerObjet(carte, &positionEditCurseur, BAS, ecran);
}

void droitierEdit(int carte[][NB_BLOCS_HAUTEUR], SDL_Surface *ecran)
{
	deplacerObjet(carte, &positionEditCurseur, DROITE, ecran);
}

void gaucherEdit(int carte[][NB_BLOCS_HAUTEUR], SDL_Surface *ecran)
{
	deplacerObjet(carte, &positionEditCurseur, GAUCHE, ecran);
}

void monterEdit(int carte[][NB_BLOCS_HAUTEUR], SDL_Surface *ecran)
{
	deplacerObjet(carte, &	positionEditCurseur, HAUT, ecran);
}
