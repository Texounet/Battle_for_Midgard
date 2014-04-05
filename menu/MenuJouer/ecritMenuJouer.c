#include "../../header/main.h"

void posFondJouer(SDL_Surface *ecran)
{
  SDL_Rect position;
  SDL_Surface *fond;
  fond = IMG_Load("./imagem/menu.jpg");
  position.x = 0;
  position.y = 0;
  SDL_BlitSurface(fond, NULL, ecran, &position);
  SDL_FreeSurface(fond);
}

void posTitreJouer(SDL_Surface *ecran)
{
	char str[256];
	sprintf(str, "First Fantasy");
	ecr_text_rougeMenu(ecran, str, 150, 150);
	sprintf(str, "Jouer");
	ecr_text_rougeMenu(ecran, str, 250, 250);
	sprintf(str, "Jeu perso");
	ecr_text_rougeMenu(ecran, str, 250, 350);
}

void posSelectJouer(SDL_Surface *ecran)
{
  TTF_Font *police;
  SDL_Color couleurRed = {255, 0, 0, 0};
  police = TTF_OpenFont("./imagem/Captureit.ttf", 65);
  SDL_Surface *select;
  select = TTF_RenderText_Solid(police, ">", couleurRed);
  SDL_BlitSurface(select, NULL, ecran, &positionSelect);
  SDL_FreeSurface(select);
}

void select3Jouer(SDL_Surface *ecran)
{
  if( positionSelect.y == 250)
{
niveauActuel = 0;
    jouer(ecran); 
}
	      else if( positionSelect.y == 350)
{
		niveauActuel = 1;
		editeur(ecran);
}
}
