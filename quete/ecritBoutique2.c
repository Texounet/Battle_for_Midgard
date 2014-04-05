#include "../../header/main.h"

void posMVBou(SDL_Surface *ecran)
{
	char str[256];
	sprintf(str, " Potion de vie : %i", inv_hero.nb_m_pot);
	ecr_text_hud(ecran, str, 50, 30, 2);
	sprintf(str, " Potion de mana : %i", inv_hero.nb_l_pot);
	ecr_text_hud(ecran, str, 50, 80, 2);
	sprintf(str, " Gold : %i", inv_hero.gold);
	ecr_text_hud(ecran, str, 50, 130, 2);
}

void posSelectBou(SDL_Surface *ecran)
{
  TTF_Font *police;
  SDL_Color couleurRed = {255, 0, 0, 0};
  police = TTF_OpenFont("./imagem/Captureit.ttf", 40);
  SDL_Surface *select;
  select = TTF_RenderText_Solid(police, ">", couleurRed);
  SDL_BlitSurface(select, NULL, ecran, &positionSelect);
  SDL_FreeSurface(select);
}
