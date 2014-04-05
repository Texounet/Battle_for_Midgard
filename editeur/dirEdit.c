#include "../header/main.h"

void hautEdit(SDL_Rect *pos)
{
	if (!(pos->y - 1 < 0))
		pos->y--;
}

void basEdit(SDL_Rect *pos)
{
	if (!(pos->y + 1 >= NB_BLOCS_HAUTEUR))
	pos->y++;
}

void droiteEdit(SDL_Rect *pos)
{
	if (!(pos->x + 1 >= NB_BLOCS_LARGEUR))
		pos->x++;
}

void gaucheEdit(SDL_Rect *pos)
{
	if (!(pos->x - 1 < 0))
		pos->x--;
}
