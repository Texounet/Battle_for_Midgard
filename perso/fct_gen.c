#include "../header/main.h"

void aff_menu(SDL_Surface *ecran)
{
	aff_img(ecran, "./imagem/images.jpg", 0, 374);
}


void aff_img(SDL_Surface *ecran, char *str, int x, int y)
{
    SDL_Surface *image;
    image = IMG_Load(str);
    SDL_Rect dest;
    dest.x = x;
    dest.y = y;
    SDL_BlitSurface(image, NULL, ecran, &dest);
    SDL_FreeSurface(image);      
}

void ecr_text(SDL_Surface *ecran, char *str, int x, int y)
{
    TTF_Font *font;
    font = TTF_OpenFont("./imagem/Captureit.ttf", 15);
    SDL_Rect dest;
    SDL_Surface *surface;
    SDL_Color black = {0,0,0,0};
    surface = TTF_RenderUTF8_Blended(font, str, black);
    dest.x = x;
    dest.y = y;
    SDL_BlitSurface(surface, NULL, ecran, &dest);
    SDL_FreeSurface(surface);
    TTF_CloseFont(font);  
}

void ecr_text_hud(SDL_Surface *ecran, char *str, int x, int y, int a)
{
    TTF_Font *font;
    font = TTF_OpenFont("./imagem/Captureit.ttf", 25);
    SDL_Rect dest;
    SDL_Surface *surface;
    SDL_Color color[3] = {{150,0,0,0}, {0,0,150,0}, {0,150,0,0}};
    surface = TTF_RenderUTF8_Blended(font, str, color[a]);
    dest.x = x;
    dest.y = y;
    SDL_BlitSurface(surface, NULL, ecran, &dest);
    SDL_FreeSurface(surface);  
    TTF_CloseFont(font);
}

void ecr_text_inv(SDL_Surface *ecran, char *str, int x, int y, int a)
{
    TTF_Font *font;
    font = TTF_OpenFont("./imagem/Captureit.ttf", 15);
    SDL_Rect dest;
    SDL_Surface *surface;
    SDL_Color color[3] = {{150,0,0,0}, {0,0,150,0}, {0,150,0,0}};
    surface = TTF_RenderUTF8_Blended(font, str, color[a]);
    dest.x = x;
    dest.y = y;
    SDL_BlitSurface(surface, NULL, ecran, &dest);
    SDL_FreeSurface(surface);  
    TTF_CloseFont(font);
}