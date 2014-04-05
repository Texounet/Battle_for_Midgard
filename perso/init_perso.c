#include "../header/main.h"

void init_hero(char *name)
{
	hero.name = name;
	hero.lvl = 1;
	hero.hp = 52;
	hero.hp_m = 52;
	hero.mp = 15;
	hero.mp_m = 15;
	hero.xp = 0;
	hero.xp_m = 100;
	hero.att = 8;
	hero.inte = 6;
	inv_hero.gold = 500;
	inv_hero.nb_m_pot = 3;
	inv_hero.nb_l_pot = 3;
	inv_hero.nb_bt_feu = 3;
	inv_hero.nb_bt_eclair = 3;
	init_stuff();
}

void init_stuff()
{
	stuff_hero.head_a = 0;
	stuff_hero.arm_a = 0;
	stuff_hero.chest_a = 0;
	stuff_hero.leg_a = 0;
	stuff_hero.feet_a = 0;
	stuff_hero.head_m = 0;
	stuff_hero.arm_m = 0;
	stuff_hero.chest_m = 0;
	stuff_hero.leg_m = 0;
	stuff_hero.feet_m = 0;
	stuff_hero.total_a = 0;
	stuff_hero.total_m = 0;
	hero.armor = 15;
	hero.res_mag = 10;
}
void init_enemy(int nb)
{
	int dif_enemy[6][9] = // tableau des differents ennemis 	
	{
		{35, 35, 10, 10, 10, 5, 15, 6, 4},
		{47, 47, 8, 8, 15, 1, 16, 7, 4},
		{25, 25, 15, 15, 5, 20, 14, 5,7},
		{35, 35, 15, 15, 10, 10, 18, 8, 2},
		{15, 15, 0, 0, 3, 3, 2, 3, 3},
		{100, 100, 30, 30, 30, 30, 150, 20, 20}
	};
	char* nom_enemy[5] = {"Voleur", "Zombie", "Vampire","Loup", "Chat"}; // nom des ennemis
	enemy.name = nom_enemy[nb];
	enemy.hp = dif_enemy[nb][0];
	enemy.hp_m = dif_enemy[nb][1];
	enemy.mp = dif_enemy[nb][2];
	enemy.mp_m = dif_enemy[nb][3];
	enemy.armor = dif_enemy[nb][4];
	enemy.res_mag = dif_enemy[nb][5];
	enemy.xp_give = dif_enemy[nb][6];
	enemy.att = dif_enemy[nb][7];
	enemy.inte = dif_enemy[nb][8];
}