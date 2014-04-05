#ifndef MAIN_H
#define MAIN_H

#include <SDL/SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <unistd.h>
#include <time.h>
#include "map.h"
#include "hero.h"
#include "menu.h"
#include "enemy.h"
#include "edit.h"
#include "menuatt.h"

/* -------------------------fichier Perso-----------------------*/
// aff_att.c
void ecr_phy(SDL_Surface *ecran);
void ecr_mag(SDL_Surface *ecran);
void ecr_obj(SDL_Surface *ecran);

// aff_menu_att.c
void img_cmb(SDL_Surface *ecran, int nb);
void aff_pers(SDL_Surface *ecran, int nb);
void ecr_menu(SDL_Surface *ecran);

// aff_mort.c
void mort(SDL_Surface *ecran);
void aff_gameover(SDL_Surface *ecran);
void aff_morten(SDL_Surface *ecran);

// anim_en.c
void anim_att1(SDL_Surface *ecran,int mstr);
void anim_att2(SDL_Surface *ecran, int mstr);
void anim_att3(SDL_Surface *ecran, int mstr);
void anim_att4(SDL_Surface *ecran,int mstr);

// anim_mag.c
void anim_erupt(SDL_Surface *ecran, int mstr);
void anim_typh(SDL_Surface *ecran, int mstr);
void anim_cycl(SDL_Surface *ecran, int mstr);
void anim_sei(SDL_Surface *ecran, int mstr);

// anim_obj.c
void anim_l(SDL_Surface *ecran, int mstr);
void anim_m(SDL_Surface *ecran, int mstr);
void anim_b(SDL_Surface *ecran, int mstr);
void anim_e(SDL_Surface *ecran, int mstr);

// anim_phy.c
void anim_Boule(SDL_Surface *ecran, int mstr);
void anim_Bas(SDL_Surface *ecran, int mstr);
void anim_Epee(SDL_Surface *ecran, int mstr);
void anim_Tordu(SDL_Surface *ecran, int mstr);

// att_en.c
void att1(SDL_Surface *ecran, int mstr);
void att2(SDL_Surface *ecran, int mstr);
void att3(SDL_Surface *ecran, int mstr);
void att4(SDL_Surface *ecran, int mstr);

// att_mag_st.c
void erupt(SDL_Surface *ecran);
void typh(SDL_Surface *ecran);
void cycl(SDL_Surface *ecran);
void sei(SDL_Surface *ecran);

// att_phy_st.c
void C_Boule(SDL_Surface *ecran);
void C_Bas(SDL_Surface *ecran);
void Ep(SDL_Surface *ecran);
void C_Tordu(SDL_Surface *ecran);

// attaque_mag.c
void Eruption(SDL_Surface *ecran, int mstr);
void Typhon(SDL_Surface *ecran, int mstr);
void Cyclone(SDL_Surface *ecran, int mstr);
void Seisme(SDL_Surface *ecran, int mstr);

// attaque_phy.c
void Coup_D_Boule(SDL_Surface *ecran, int mstr);
void Coup_Bas(SDL_Surface *ecran, int mstr);
void Epee(SDL_Surface *ecran, int mstr);
void Coup_Tordu(SDL_Surface *ecran, int mstr);

// choix.c
void choix_menu(SDLKey touche);
void fct_choix_p(SDLKey touche);
void fct_choix_m(SDLKey touche);
void fct_obj(SDLKey touche);

// ecratt.c
void eff_ecr(SDL_Surface *ecran, int mstr);
void aff_hud(SDL_Surface *ecran);

//etape5.c
int fuite(SDL_Surface *ecran, int mstr);
void aff_men(SDL_Surface *ecran);
void att_en(SDL_Surface *ecran, int mstr);
void lvl_up(SDL_Surface *ecran);
void lvl_ups();

// fct_gen.c
void aff_menu(SDL_Surface *ecran);
void aff_img(SDL_Surface *ecran, char *str, int x, int y);
void ecr_text(SDL_Surface *ecran, char *str, int x, int y);
void ecr_text_hud(SDL_Surface *ecran, char *str, int x, int y, int a);
void ecr_text_inv(SDL_Surface *ecran, char *str, int x, int y, int a);

// init_perso.c
void init_hero(char *name);
void init_enemy(int nb);
void init_stuff();

// menu_choix_att.c
void deroul_cmb(SDL_Surface *ecran, int mstr);
void attaque_phy(SDL_Surface *ecran, int mstr);
void attaque_mag(SDL_Surface *ecran, int mstr);
void obj(SDL_Surface *ecran, int mstr);

// obj.c
void pt_vie(SDL_Surface *ecran, int mstr);
void pt_mana(SDL_Surface *ecran, int mstr);
void bt_feu(SDL_Surface *ecran, int mstr);
void bt_eclair(SDL_Surface *ecran, int mstr);

// rand.c
int m_rand();
int crit_rand();
void pop_rand(SDL_Surface *ecran, int mstr);
int attaque_rand();
int echec_cri();

/* -------------------------fichier map-----------------------*/
//init.c
void init_sdl();
void free_sdl();
void Pause();
void preums(SDL_Surface *ecran);

//map.c

void boucleMap(int carte[][NB_BLOCS_HAUTEUR], SDL_Surface* ecran, SDL_Rect position);
void UpdateEvents(Input* in);
void placement(SDL_Surface* ecran, SDL_Rect position);
void jouer(SDL_Surface* ecran);

//deplace.c
void monter(int carte[][NB_BLOCS_HAUTEUR], SDL_Surface *ecran);
void droitier(int carte[][NB_BLOCS_HAUTEUR], SDL_Surface *ecran);
void gaucher(int carte[][NB_BLOCS_HAUTEUR], SDL_Surface *ecran);
void decendre(int carte[][NB_BLOCS_HAUTEUR], SDL_Surface *ecran);

//map2.c
void effaceEcran(int niveau[][NB_BLOCS_HAUTEUR],SDL_Surface* ecran);
void placementFree();
void deplacerJoueur(int carte[][NB_BLOCS_HAUTEUR], SDL_Rect *pos, int direction, SDL_Surface *ecran);


//map3.c
void posJoueur(SDL_Surface* ecran, SDL_Rect position);
void placementPerso(int carte[][NB_BLOCS_HAUTEUR]);

//dir.c
void haut(int carte[][NB_BLOCS_HAUTEUR], SDL_Rect *pos, SDL_Surface *ecran);
void bas(int carte[][NB_BLOCS_HAUTEUR], SDL_Rect *pos, SDL_Surface *ecran);
void droite(int carte[][NB_BLOCS_HAUTEUR], SDL_Rect *pos, SDL_Surface *ecran);
void gauche(int carte[][NB_BLOCS_HAUTEUR], SDL_Rect *pos, SDL_Surface *ecran);

// inv.c
void inv(int carte[][NB_BLOCS_HAUTEUR], SDL_Surface *ecran);
void stat(SDL_Surface *ecran);
void inve(SDL_Surface *ecran);
void boucleinv(void (*foncKEYinv[3])(), SDLKey KEYinv[3], SDL_Surface *ecran);

//inv2.c
void selectinv1();
void selectinv2();
void selectinv3();


/*-------------------fichier menu-------------------*/

//menu.c
void declaration_KEYMenu(SDL_Surface *ecran, void (*foncKEYMenu[3])(), SDLKey  KEYMenu[3]);
void menu();
void boucle(SDL_Surface *ecran);
void pos(SDL_Surface *ecran);

//menuselect.c

void select1();
void select2();
void select3(SDL_Surface *ecran);

//ecritMenue.c
void posTitre(SDL_Surface *ecran);
void posFond(SDL_Surface *ecran);
void posSelect(SDL_Surface* ecran);
void ecr_text_rougeMenu(SDL_Surface *ecran, char *str, int x, int y);

//menuJouer.c
void declaration_KEYMenuJouer(SDL_Surface *ecran, void (*foncKEYMenu[3])(), SDLKey  KEYMenu[3]);
void menuJouer();
void boucleJouer(SDL_Surface *ecran);
void posJou(SDL_Surface *ecran);

//ecritMenueJouer.c
void posTitreJouer(SDL_Surface *ecran);
void posFondJouer(SDL_Surface *ecran);
void select3Jouer(SDL_Surface *ecran);
void posSelectJouer(SDL_Surface* ecran);

/*-----------------fichier editeur----------------------*/
//edit.c
void editeur(SDL_Surface* ecran);
void placementEdit(SDL_Surface* ecran, SDL_Rect position);
void boucleEdit(int carte[][NB_BLOCS_HAUTEUR], SDL_Surface* ecran, SDL_Rect position, SDLKey KEY[12]);
void deplacerObjet(int carte[][NB_BLOCS_HAUTEUR],SDL_Rect *pos, int direction, SDL_Surface *ecran);

//edit2.c
void placementFreeEdit();
void effaceEcranEdit(int carte[][NB_BLOCS_HAUTEUR],SDL_Surface* ecran);
void placeObjet(int carte[][NB_BLOCS_HAUTEUR], SDL_Surface *ecran);

//edit.3
void placementObjetEdit(int carte[][NB_BLOCS_HAUTEUR]);
void posObjetEdit(SDL_Surface* ecran, SDL_Rect positionEdit);

//deplaceEdit.c
void decendreEdit(int carte[][NB_BLOCS_HAUTEUR], SDL_Surface *ecran);
void droitierEdit(int carte[][NB_BLOCS_HAUTEUR], SDL_Surface *ecran);
void gaucherEdit(int carte[][NB_BLOCS_HAUTEUR], SDL_Surface *ecran);
void monterEdit(int carte[][NB_BLOCS_HAUTEUR], SDL_Surface *ecran);

//ObjetEdit.c
void rocheux(int carte[][NB_BLOCS_HAUTEUR], SDL_Surface *ecran);
void bois(int carte[][NB_BLOCS_HAUTEUR], SDL_Surface *ecran);
void personageBas(int carte[][NB_BLOCS_HAUTEUR], SDL_Surface *ecran);
void vide(int carte[][NB_BLOCS_HAUTEUR], SDL_Surface *ecran);
void magasinEdit(int carte[][NB_BLOCS_HAUTEUR], SDL_Surface *ecran);
void pnjEdit(int carte[][NB_BLOCS_HAUTEUR], SDL_Surface *ecran);
void mstrEdit(int carte[][NB_BLOCS_HAUTEUR], SDL_Surface *ecran);
void bossEdit(int carte[][NB_BLOCS_HAUTEUR], SDL_Surface *ecran);

//dirEdit.c
void hautEdit(SDL_Rect *pos);
void basEdit(SDL_Rect *pos);
void droiteEdit(SDL_Rect *pos);
void gaucheEdit(SDL_Rect *pos);

/*-------------------fichier boutique-----------------------*/

//boutique.c
void boutique();
void declaration_KEYBou(SDL_Surface *ecran, void (*foncKEYBou[3])(), SDLKey  KEYBou[3]);
void posBou(SDL_Surface *ecran);

//ecritBoutique.c
void posFondBou(SDL_Surface *ecran);
void posTitreBou(SDL_Surface *ecran);
void posSelectBou(SDL_Surface *ecran);
void ecr_text_rouge(SDL_Surface *ecran, char *str, int x, int y);

//boutiqueA.c
void boutiqueA(SDL_Surface *ecran);
void declaration_KEYBouA(SDL_Surface *ecran, void (*foncKEYBouA[2])(), SDLKey  KEYBouA[2]);
void posBouA(SDL_Surface *ecran);
void selectBou();

//ecritBoutique.c
void posFondBouA(SDL_Surface *ecran);
void posTitreBouA(SDL_Surface *ecran);

//boutiqueM.C
void boutiqueM(SDL_Surface *ecran);
void declaration_KEYBouM(SDL_Surface *ecran, void (*foncKEYBouM[3])(), SDLKey  KEYBouM[3]);
void posBouM(SDL_Surface *ecran);
void selectBouA();

//ecritBoutiqueM.c
void posFondBouM(SDL_Surface *ecran);
void posTitreBouM(SDL_Surface *ecran);
void posADBouM(SDL_Surface *ecran);
void selectBouM();


//boutiqueO.C
void boutiqueO(SDL_Surface *ecran);
void declaration_KEYBouO(SDL_Surface *ecran, void (*foncKEYBouO[3])(), SDLKey  KEYBouO[3]);
void posBouO(SDL_Surface *ecran);

//ecritBoutique0.c
void posFondBouO(SDL_Surface *ecran);
void posTitreBouO(SDL_Surface *ecran);
void selectBouO();

//boutique1.c
void declaration_KEYBou1(SDL_Surface *ecran, void (*foncKEYBou1[2])(), SDLKey  KEYBou1[2]);
void boutique1(SDL_Surface *ecran);
void posBou1(SDL_Surface *ecran);

//ecritBoutique1.c
void posFondBou1(SDL_Surface *ecran);
void posTitreBou1(SDL_Surface *ecran);
void selectBou1(SDL_Surface *ecran);

//boutique0.c
void declaration_KEYBou0(SDL_Surface *ecran, void (*foncKEYBou1[2])(), SDLKey  KEYBou1[2]);
void boutique0(SDL_Surface *ecran);
void posBou0(SDL_Surface *ecran);

//ecritBoutique0.c
void posFondBou0(SDL_Surface *ecran);
void posTitreBou0(SDL_Surface *ecran);
void selectBou0(SDL_Surface *ecran);

//boutique2.c
void declaration_KEYBou2(SDL_Surface *ecran, void (*foncKEYBou1[2])(), SDLKey  KEYBou1[2]);
void boutique2(SDL_Surface *ecran);
void posBou2(SDL_Surface *ecran);

//ecritBoutique2.c
void posFondBou2(SDL_Surface *ecran);
void posTitreBou2(SDL_Surface *ecran);
void selectBou2(SDL_Surface *ecran);

/*-----------------fichier Quete-------------*/

//Quete.c
void quete(SDL_Surface *ecran);
void declaration_KEYQuete(SDL_Surface *ecran, void (*foncKEYQuete[3])(), SDLKey KEYQuete[3]);
void boucleQuete(SDL_Surface *ecran);
void posQuetes(SDL_Surface *ecran);

//ecritQuete.c
void posQuete(SDL_Surface *ecran);
void posSelectQuete(SDL_Surface *ecran);
void posFondQuete(SDL_Surface *ecran);

//queteSelect
void selectQuete();
void select1Quete();
void select2Quete();

/*-----------------fichier chargeETsauvegarde------------------------*/
//cs.c
int chargerNiveau(int niveau[][NB_BLOCS_HAUTEUR]);
int sauvegarderNiveau(int niveau[][NB_BLOCS_HAUTEUR]);

#endif
