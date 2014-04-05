#include "../header/main.h"

int chargerNiveau(int niveau[NB_BLOCS_LARGEUR][NB_BLOCS_HAUTEUR])
{
  FILE* fichier = NULL;
  char ligneFichier[NB_BLOCS_LARGEUR * NB_BLOCS_HAUTEUR + 1] = {0};
  int i;
  int j;
  int a;
  char tt[8]= {'0','1','2','3','4','5','6','7'};
  fichier = fopen( niveauc[niveauActuel]	, "r");
  if(fichier == NULL)
    return 0;
  fgets(ligneFichier, NB_BLOCS_LARGEUR * NB_BLOCS_HAUTEUR + 1, fichier);
  for(i = 0; i < NB_BLOCS_HAUTEUR; i++)
    {
      for(j = 0; j < NB_BLOCS_LARGEUR; j++)
	{
	  for(a = 0; a < 8; a++)
	  {
	    if(ligneFichier[(i * NB_BLOCS_LARGEUR) + j] == tt[a])
	      niveau[j][i] = a;
	  }
	a = 0;
	}
    }
  fclose(fichier);
  return 1;
}

int sauvegarderNiveau(int niveau[][NB_BLOCS_HAUTEUR])
{
    FILE* fichier = NULL;
    int i = 0, j = 0;

    fichier = fopen("./niveau/niveau2.txt", "w");
    if (fichier == NULL)
        return 0;

    for (i = 0 ; i < NB_BLOCS_LARGEUR ; i++)
    {
        for (j = 0 ; j < NB_BLOCS_HAUTEUR ; j++)
        {
            fprintf(fichier, "%d", niveau[j][i]);
        }
    }

    fclose(fichier);
    return 1;
}
