#include "../header/main.h"

void editeur(SDL_Surface* ecran)
{
  niveauc[0] = "./niveau/niveau1.txt";
  niveauc[1] = "./niveau/niveau2.txt";
  pperso = IMG_Load("./map/tiles/bas.png");
  decor = IMG_Load("./map/tiles/fondHerbe.jpg");
  arbre = IMG_Load("./map/tiles/arbre.png");
  rocher = IMG_Load("./map/tiles/rocher.png");
  magasin = IMG_Load("./map/tiles/store.png");
  monstre = IMG_Load("./map/tiles/mstr.png");
  boss = IMG_Load("./map/tiles/boss.png");
  pnj = IMG_Load("./map/tiles/pnj.png");
  perso[BAS] = IMG_Load("./map/tiles/bas.png");
  objetActuel = herbe;
  placementEdit(ecran, positionEdit);
  placementFreeEdit();
}

void placementEdit(SDL_Surface* ecran, SDL_Rect positionEdit)
{
  SDLKey KEY[13];
  KEY[0] = SDLK_z;
  KEY[1] = SDLK_s;
  KEY[2] = SDLK_d;
  KEY[3] = SDLK_q;
  KEY[4] = SDLK_KP1;
  KEY[5] = SDLK_KP2;
  KEY[6] = SDLK_KP3;
  KEY[7] = SDLK_KP4;
  KEY[8] = SDLK_KP5;
  KEY[9] = SDLK_KP6;
  KEY[10] = SDLK_KP7;
  KEY[11] = SDLK_KP8;
  KEY[12] = SDLK_KP0;
  int carte[NB_BLOCS_LARGEUR][NB_BLOCS_HAUTEUR];
  if (!chargerNiveau(carte))
    exit(EXIT_FAILURE);
  placementObjetEdit(carte);
  boucleEdit(carte, ecran, positionEdit, KEY);
  SDL_EnableKeyRepeat(100, 100);

}

void boucleEdit(int carte[][NB_BLOCS_HAUTEUR], SDL_Surface* ecran, SDL_Rect positionEdit, SDLKey KEY[13])
{
  void (*foncKEY[13])(int carte[][NB_BLOCS_HAUTEUR], SDL_Surface *ecran) = {monterEdit, decendreEdit, droitierEdit, gaucherEdit, bois, rocheux, personageBas, vide,pnjEdit, magasinEdit, mstrEdit, bossEdit, placeObjet};
  int a;
  Input in;
  memset(&in,0,sizeof(in));
  while((!in.key[SDLK_ESCAPE]))
  {
    UpdateEvents(&in);
    for(a = 0; a < 13; a++)
    {
      if (in.key[KEY[a]])
      {
        foncKEY[a](carte, ecran);
        in.key[KEY[a]] = 0;
      }
      else if (in.key[SDLK_b])
{
	sauvegarderNiveau(carte);
}
      else if (in.key[SDLK_n])
{
	chargerNiveau(carte);
}
    }
      effaceEcranEdit(carte, ecran);
      posObjetEdit(ecran, positionEdit);
  } 
}

void deplacerObjet(int carte[][NB_BLOCS_HAUTEUR],SDL_Rect *pos, int direction, SDL_Surface *ecran)
{
  carte = carte;
ecran = ecran;
  int t = 0;
  void (*tableauDirection[4])(SDL_Rect *pos);
  tableauDirection[0] = hautEdit;
  tableauDirection[1] = basEdit;
  tableauDirection[2] = gaucheEdit;
  tableauDirection[3] = droiteEdit;
  while (t < 4)	
  {
    if(t == direction)
    {
      tableauDirection[t](pos);
      break;
    }
    else
      t++;
  }
}
