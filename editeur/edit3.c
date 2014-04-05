#include "../header/main.h"

void posObjetEdit(SDL_Surface* ecran, SDL_Rect positionEdit)
{
    positionEdit.x = positionEditCurseur.x * TAILLE_BLOC;
    positionEdit.y = positionEditCurseur.y * TAILLE_BLOC;
    SDL_BlitSurface(objetActuel, NULL, ecran, &positionEdit);
    SDL_Flip(ecran);
}

void placementObjetEdit(int carte[][NB_BLOCS_HAUTEUR])
{
  int i;
  int j;
  for (i = 0 ; i < NB_BLOCS_LARGEUR ; i++)
  {
    for (j = 0 ; j < NB_BLOCS_HAUTEUR ; j++)
    {
      if (carte[i][j] == PERSO)
      {
        positionEditCurseur.x = i;
        positionEditCurseur.y = j;
        carte[i][j] = VIDE;
      }
    }
  }
}
