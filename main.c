// Fichier main.c : fonction main
#include "./header/main.h"

int main(int argc, char *argv[])
{
	if (argc == 3 && argv[1])
	{
	init_hero(argv[2]);
	menu();
	free_sdl();
	return EXIT_SUCCESS;
	}
	else
	printf("Usage : -n \"nom du joueur\" ");
	return 0;
}
