#include "../header/main.h"

void placementFree()
{
  int i;
  SDL_FreeSurface(arbre);
  SDL_FreeSurface(rocher);
  SDL_FreeSurface(magasin);
  SDL_FreeSurface(boss);
  SDL_FreeSurface(monstre);
  SDL_FreeSurface(pnj);
  for (i = 0 ; i < 4 ; i++)
  SDL_FreeSurface(perso[i]);
}



void effaceEcran(int carte[][NB_BLOCS_HAUTEUR],SDL_Surface* ecran)
{
int s = 0;
  int i;
  int j;
  SDL_Surface* IMG[6] = {arbre, rocher, monstre, pnj, boss, magasin};
  int img[6] = {ARBRE, ROCHER, MONSTRE, PNJ, BOSS, MAGASIN};
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
      while(s < 6)
	{
          if(carte[i][j] == img[s])
      SDL_BlitSurface(IMG[s], NULL, ecran, &position);
s++;
}
s = 0;
  }
}
}


void deplacerJoueur(int carte[][NB_BLOCS_HAUTEUR],SDL_Rect *pos, int direction, SDL_Surface *ecran)
{
  int t = 0;
  void (*tableauDirection[4])(int carte[][NB_BLOCS_HAUTEUR], SDL_Rect *pos, SDL_Surface *ecran) = {haut, bas, gauche, droite};
  while (t < 5)	
  {
    if(t == direction)
    {
      tableauDirection[t](carte, pos, ecran);
      break;
    }
    else
      t++;
  }
}
