#include "../header/main.h"

void haut(int carte[][NB_BLOCS_HAUTEUR], SDL_Rect *pos, SDL_Surface *ecran)
{
  if (!(pos->y - 1 < 0 || carte[pos->x][pos->y - 1] == ARBRE || carte[pos->x][pos->y - 1] == ROCHER))
    {
      pos->y--;
      pop_rand(ecran, m_rand());
      if (carte[pos->x][pos->y] == PNJ)
	{
	  quete(ecran);
	  positionJoueur.y += 1;
	}
      if (carte[pos->x][pos->y] == MONSTRE)
	{
	  deroul_cmb(ecran, m_rand());
	  carte[pos->x][pos->y] = VIDE;
	}
      if (carte[pos->x][pos->y] == BOSS)
	{
	  deroul_cmb(ecran, 5);
	}
      if (carte[pos->x][pos->y] == MAGASIN)
	{
	  boutique0(ecran);
	}
    }
}

void bas (int carte[][NB_BLOCS_HAUTEUR], SDL_Rect *pos, SDL_Surface *ecran)
{
  if (!(carte[pos->x][pos->y + 1] == ROCHER || pos->y + 1 >= NB_BLOCS_HAUTEUR || carte[pos->x][pos->y + 1] == ARBRE))
    {
      pos->y++;
      pop_rand(ecran, m_rand());
      if (carte[pos->x][pos->y] == PNJ)
	{
	  quete(ecran);
	  positionJoueur.y -= 1;
	}
      if (carte[pos->x][pos->y] == MONSTRE)
	{
	  deroul_cmb(ecran, m_rand());
	  carte[pos->x][pos->y] = VIDE;
	}
      if (carte[pos->x][pos->y] == BOSS)
	{
	  deroul_cmb(ecran, 5);
	}
      if (carte[pos->x][pos->y] == MAGASIN)
	{
	  boutique0(ecran);
	}
    }
}


void droite(int carte[][NB_BLOCS_HAUTEUR], SDL_Rect *pos, SDL_Surface *ecran)
{
  if (!(carte[pos->x + 1][pos->y] == ROCHER || carte[pos->x + 1][pos->y] == ARBRE || pos->x + 1 >= NB_BLOCS_LARGEUR))
    {
      pos->x++;
      pop_rand(ecran,m_rand());
      if (carte[pos->x][pos->y] == PNJ)
	{
			quete(ecran);
			positionJoueur.x -= 1;
	}
      if (carte[pos->x][pos->y] == MONSTRE)
	{
			deroul_cmb(ecran, m_rand());
			carte[pos->x][pos->y] = VIDE;
	}
      if (carte[pos->x][pos->y] == BOSS)
	{
	  deroul_cmb(ecran, 5);
	}
      if (carte[pos->x][pos->y] == MAGASIN)
	{
	  boutique0(ecran);
	}
    }
}

void gauche(int carte[][NB_BLOCS_HAUTEUR], SDL_Rect *pos, SDL_Surface *ecran)
{
  if (!(carte[pos->x - 1][pos->y] == ROCHER || carte[pos->x - 1][pos->y] == ARBRE || pos->x - 1 < 0))
    {
      pos->x--;
      pop_rand(ecran, m_rand());
      if (carte[pos->x][pos->y] == PNJ)
	{
	  quete(ecran);
	  positionJoueur.x += 1;
	}
      if (carte[pos->x][pos->y] == MONSTRE)
	{
	  deroul_cmb(ecran, m_rand());
	  carte[pos->x][pos->y] = VIDE;
	}
      if (carte[pos->x][pos->y] == BOSS)
	{
	  deroul_cmb(ecran, 5);
	  quete(ecran);
	}
      if (carte[pos->x][pos->y] == MAGASIN)
	{
	  boutique0(ecran);
	}
    }
}
