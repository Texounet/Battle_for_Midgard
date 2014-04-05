// fichier struct hero
typedef struct s_stuff
{
	int head_a;
	int arm_a;
	int chest_a;
	int leg_a;
	int feet_a;
	int head_m;
	int arm_m;
	int chest_m;
	int leg_m;
	int feet_m;
	int total_a;
	int total_m;
}	t_stuff;

typedef struct s_inv
{
	int gold;
	int nb_m_pot;
	int nb_l_pot;
	int nb_bt_feu;
	int nb_bt_eclair;
}	t_inv;

typedef struct s_hero
{
	char* name;
	int lvl;
	int hp;
	int hp_m;
	int mp;
	int mp_m;
	int xp;
	int xp_m;
	int armor;
	int res_mag;
	int att;
	int inte;
}	t_hero;

t_stuff stuff_hero;
t_inv inv_hero;
t_hero hero;