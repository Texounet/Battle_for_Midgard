CC = gcc

LDFLAGS = `sdl-config --cflags --libs` -lSDL_image -lSDL_ttf

SRC	=  main.c\
	   init.c\
	   map/map.c\
	   map/map2.c\
	   map/map3.c\
	   map/dir.c\
	   map/deplace.c\
	   map/inv.c\
	   editeur/edit.c\
	   editeur/edit2.c\
	   editeur/edit3.c\
	   editeur/deplaceEdit.c\
	   editeur/ObjetEdit.c\
	   editeur/dirEdit.c\
	   chargeETsauvegarde/cs.c\
	   menu/MenuPrincipal/menu.c\
	   menu/MenuPrincipal/ecritMenu.c\
	   menu/MenuPrincipal/menuselect.c\
	   menu/MenuJouer/menuJouer.c\
	   menu/MenuJouer/ecritMenuJouer.c\
           boutique/boutique/boutique.c\
	   boutique/boutique/ecritBoutique.c\
           boutique/BoutiqueArme/boutiqueA.c\
	   boutique/BoutiqueArme/ecritBoutiqueA.c\
           boutique/BoutiqueMagie/boutiqueM.c\
	   boutique/BoutiqueMagie/ecritBoutiqueM.c\
           boutique/BoutiqueObjet/boutiqueO.c\
	   boutique/BoutiqueObjet/ecritBoutiqueO.c\
           boutique/boutique1/boutique1.c\
	   boutique/boutique1/ecritBoutique1.c\
           boutique/boutique2/boutique2.c\
	   boutique/boutique2/ecritBoutique2.c\
           boutique/boutique0.c\
	   boutique/ecritBoutique0.c\
	   quete/ecritQuete.c\
	   quete/quete.c\
	   quete/queteSelect.c\
	   perso/aff_att.c\
	   perso/aff_menu_att.c\
	   perso/aff_mort.c\
	   perso/anim_en.c\
	   perso/anim_obj.c\
	   perso/anim_mag.c\
	   perso/anim_phy.c\
	   perso/att_en.c\
	   perso/att_mag_st.c\
	   perso/att_phy_st.c\
	   perso/attaque_mag.c\
	   perso/attaque_phy.c\
	   perso/choix.c\
	   perso/ecratt.c\
	   perso/etape5.c\
	   perso/fct_gen.c\
	   perso/init_perso.c\
	   perso/menu_choix_att.c\
	   perso/obj.c\
	   perso/rand.c

NAME	= test

OBJ	= $(SRC:.c=.o)

RM	= rm -f

CFLAGS	= -W -Wall -Werror

$(NAME):	$(OBJ)
			$(CC) -g $(SRC) -o $(NAME) $(LDFLAGS)

all:		$(NAME)

clean:
			$(RM) $(OBJ)
			$(RM) *~
			$(RM) */*~
			$(RM) */*/*~

fclean:		clean
			$(RM) $(NAME)
re:			fclean all
