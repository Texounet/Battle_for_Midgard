#include "../header/main.h"

void posQuete(SDL_Surface *ecran)
{
	char str[256];
	sprintf(str, " Potion de vie : %i", inv_hero.nb_l_pot);
	ecr_text_hud(ecran, str, 50, 30, 2);
	sprintf(str, " Boujour.");
	ecr_text_hud(ecran, str, 150, 200, 2);
	sprintf(str, " Je suis blesser. auriez-vous 2 potion de vie.");
	ecr_text_hud(ecran, str, 150, 250, 2);
	sprintf(str, " Biensur je vous dedomagerais en échange.");
	ecr_text_hud(ecran, str, 150, 300, 2);
	sprintf(str, " Oui biensur.");
	ecr_text_hud(ecran, str, 150, 350, 1);
	sprintf(str, " Non.");
	ecr_text_hud(ecran, str, 150, 400, 1);
	sprintf(str, " Gold : %i", inv_hero.gold);
	ecr_text_hud(ecran, str, 50, 80, 2);
}

void posSelectQuete(SDL_Surface *ecran)
{
  TTF_Font *police;
  SDL_Color couleurRed = {255, 0, 0, 0};
  police = TTF_OpenFont("./imagem/Captureit.ttf", 30);
  SDL_Surface *select;
  select = TTF_RenderText_Solid(police, ">", couleurRed);
  SDL_BlitSurface(select, NULL, ecran, &positionSelectQ);
  SDL_FreeSurface(select);
}

void posFondQuete(SDL_Surface *ecran)
{
  SDL_Rect position;
  SDL_Surface *fond;
  fond = IMG_Load("./imagem/menu.jpg");
  position.x = 0;
  position.y = 0;
  SDL_BlitSurface(fond, NULL, ecran, &position);
  SDL_FreeSurface(fond);
}
