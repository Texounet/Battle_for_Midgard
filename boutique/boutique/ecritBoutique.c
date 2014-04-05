#include "../../header/main.h"

void posFondBou(SDL_Surface *ecran)
{
  SDL_Rect position;
  SDL_Surface *fond;
  fond = IMG_Load("./imagem/fond/magasin.png");
  position.x = 0;
  position.y = 0;
  SDL_BlitSurface(fond, NULL, ecran, &position);
  SDL_FreeSurface(fond);
}

void posTitreBou(SDL_Surface *ecran)
{
	char str[256];
	sprintf(str, "Boutique");
	ecr_text_rouge(ecran, str, 275, 150);
	sprintf(str, "Potion de Sante");
	ecr_text_rouge(ecran, str, 100, 250);
	sprintf(str, " Potion de Mana");
	ecr_text_rouge(ecran, str, 100, 350);
	sprintf(str, "150 Gold");
	ecr_text_hud(ecran, str, 100, 300,1);
	sprintf(str, "200 gold");
	ecr_text_hud(ecran, str, 100, 400,1);
	sprintf(str, " Potion de vie : %i", inv_hero.nb_m_pot);
	ecr_text_hud(ecran, str, 50, 30, 1);
	sprintf(str, " Potion de mana : %i", inv_hero.nb_l_pot);
	ecr_text_hud(ecran, str, 50, 80, 1);
	sprintf(str, " Gold : %i", inv_hero.gold);
	ecr_text_hud(ecran, str, 50, 130, 1);
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

void ecr_text_rouge(SDL_Surface *ecran, char *str, int x, int y)
{
    TTF_Font *font;
    font = TTF_OpenFont("./imagem/Captureit.ttf", 40);
    SDL_Rect dest;
    SDL_Surface *surface;
    SDL_Color red = {255,0,0,0};
    surface = TTF_RenderUTF8_Blended(font, str, red);
    dest.x = x;
    dest.y = y;
    SDL_BlitSurface(surface, NULL, ecran, &dest);
    SDL_FreeSurface(surface);
    TTF_CloseFont(font);  
}
