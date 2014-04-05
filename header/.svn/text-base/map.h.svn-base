
#ifndef MAP_H
#define MAP_H
    #define TAILLE_BLOC         34
    #define NB_BLOCS_LARGEUR    20
    #define NB_BLOCS_HAUTEUR    15
    #define LARGEUR_FENETRE     TAILLE_BLOC * NB_BLOCS_LARGEUR
    #define HAUTEUR_FENETRE     TAILLE_BLOC * NB_BLOCS_HAUTEUR
  SDL_Surface *arbre;
  SDL_Surface *herbe;
  SDL_Surface *rocher;
  SDL_Surface *monstre;
  SDL_Surface *boss;
  SDL_Surface *pnj;
  SDL_Surface *magasin;
  SDL_Surface *persoActuel;
  SDL_Surface *decor;
  SDL_Surface *perso[4];
  SDL_Rect position;
  SDL_Rect position_decor;
  SDL_Rect positionJoueur;
  char* niveauc[2];
  int niveauActuel;
  int posinv;
  enum {HAUT, BAS, GAUCHE, DROITE};
  enum {VIDE, ROCHER, ARBRE, PERSO, MAGASIN, BOSS, PNJ, MONSTRE};
  typedef struct
  {
      char key[SDLK_LAST];
  } Input;

#endif


