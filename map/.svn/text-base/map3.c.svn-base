	#include "../header/main.h"

void posJoueur(SDL_Surface* ecran, SDL_Rect position)
{
    position.x = positionJoueur.x * TAILLE_BLOC;
    position.y = positionJoueur.y * TAILLE_BLOC;
    SDL_BlitSurface(persoActuel, NULL, ecran, &position);
    SDL_Flip(ecran);
}

void placementPerso(int carte[][NB_BLOCS_HAUTEUR])
{
  int i;
  int j;
  for (i = 0 ; i < NB_BLOCS_LARGEUR ; i++)
  {

    for (j = 0 ; j < NB_BLOCS_HAUTEUR ; j++)
    {
      if (carte[i][j] == PERSO)
      {
        positionJoueur.x = i;
        positionJoueur.y = j;
        carte[i][j] = VIDE;
      }
    }
  }
}
