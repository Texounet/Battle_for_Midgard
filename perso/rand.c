// fichier pour la gestion temps
#include "../header/main.h"

int m_rand()
{
  int a;
  srand(time(NULL));
  a = rand() % 5;
  return a;
}

int crit_rand()
{
 int a;
 srand(time(NULL));
 a = rand() % 100;
 return a; 
}

void pop_rand(SDL_Surface *ecran, int mstr)
{
  int a;
  srand(time(NULL));
  a = rand() % 6;
  if(a == 0)
    deroul_cmb(ecran, mstr);
}

int attaque_rand()
{
 int a;
 srand(time(NULL));
 a = rand() % 4;
 return a;  
}

int echec_cri()
{
	int a;
	srand(time(NULL));
	a = rand() % 100;
	return a; 	
}