#include "../../header/main.h"

void posFond(SDL_Surface *ecran)
{
  SDL_Rect position;
  SDL_Surface *fond;
  fond = IMG_Load("./imagem/menu.jpg");
  position.x = 0;
  position.y = 0;
  SDL_BlitSurface(fond, NULL, ecran, &position);
  SDL_FreeSurface(fond);
}

void posTitre(SDL_Surface *ecran)
{
	char str[256];
	sprintf(str, "First Fantasy");
	ecr_text_rougeMenu(ecran, str, 150, 150);
	sprintf(str, "Jouer");
	ecr_text_rougeMenu(ecran, str, 250, 250);
	sprintf(str, "Editeur");
	ecr_text_rougeMenu(ecran, str, 250, 350);
}

void posSelect(SDL_Surface *ecran)
{
  TTF_Font *police;
  SDL_Color couleurRed = {255, 0, 0, 0};
  police = TTF_OpenFont("./imagem/Captureit.ttf", 65);
  SDL_Surface *select;
  select = TTF_RenderText_Solid(police, ">", couleurRed);
  SDL_BlitSurface(select, NULL, ecran, &positionSelect);
  SDL_FreeSurface(select);
}

void ecr_text_rougeMenu(SDL_Surface *ecran, char *str, int x, int y)
{
    TTF_Font *font;
    font = TTF_OpenFont("./imagem/Captureit.ttf", 65);
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
