#include "../header/main.h"

void placementFreeEdit()
{
  SDL_FreeSurface(arbre);
  SDL_FreeSurface(rocher);
  SDL_FreeSurface(herbe);
  SDL_FreeSurface(pperso);
  SDL_FreeSurface(boss);
  SDL_FreeSurface(monstre);
  SDL_FreeSurface(magasin);
  SDL_FreeSurface(pnj);
  SDL_FreeSurface(perso[BAS]);
}



void effaceEcranEdit(int carte[][NB_BLOCS_HAUTEUR],SDL_Surface* ecran)
{
int s = 0;
  int i;
  int j;
  SDL_Surface* IMG[7] = {arbre, rocher, monstre, pnj, boss, magasin, pperso};
  int img[7] = {ARBRE, ROCHER, MONSTRE, PNJ, BOSS, MAGASIN, PERSO};
  SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));
  position_decor.x = 0;
  position_decor.y = 0;
  SDL_BlitSurface(decor, NULL, ecran, &position_decor);
  for (i = 0 ; i < NB_BLOCS_LARGEUR ; i++)
  {

    for (j = 0 ; j < NB_BLOCS_HAUTEUR ; j++)
    {
     position.x = i * TAILLE_BLOC;
     position.y = j * TAILLE_BLOC;
      while(s < 7)
	{
          if(carte[i][j] == img[s])
      SDL_BlitSurface(IMG[s], NULL, ecran, &position);
s++;
}
s = 0;
  }
}
}

void placeObjet(int carte[][NB_BLOCS_HAUTEUR], SDL_Surface *ecran)
{
  ecran = ecran;

  int ii;
  int jj;
  int i;
  int j;
  i = 0;
  j = 0;
  for (ii = 0 ; ii < NB_BLOCS_LARGEUR ; ii++)
  {
    for (jj = 0 ; jj < NB_BLOCS_HAUTEUR ; jj++)
    {
      if (carte[ii][jj] == PERSO)
      {
        positionEdit.x = ii;
        positionEdit.y = jj;
        carte[ii][jj] = VIDE;
      }
    }
  }
 i = positionEditCurseur.x;
 j = positionEditCurseur.y;
 carte[i][j] = objet;
}
