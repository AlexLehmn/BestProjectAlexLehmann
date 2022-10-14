##
## EPITECH PROJECT, 2019
## Makefile rush 2
## File description:
## Makefile
##

SRC		=		src/main.c \
				src/scene.c \
				src/window.c\
				src/struct/struct_fill.c \
				src/struct/struct_fill2.c \
				src/struct/struct_fill3.c \
				src/struct/struct_fill4.c \
				src/struct/struct_fill5.c \
				src/struct/struct_fill6.c \
				src/struct/struct_fill7.c \
				src/struct/struct_fill8.c \
				src/struct/struct_fill9.c \
				src/option/f_lang.c \
				src/option/initialisation.c \
				src/option/set_vol.c \
				src/option/set_vol2.c \
				src/option/initialisation2.c \
				src/option/scene1.c \
				src/option/scene2.c \
				src/option/scene3.c \
				src/option/settings.c \
				src/menu/button/button.c \
				src/menu/button/click_b.c \
				src/menu/button/hover_b.c \
				src/menu/button/set_b_menu.c \
				src/menu/button/set_t_b_menu.c \
				src/menu/init.c \
				src/menu/menu.c \
				src/menu/set_lang_menu.c \
				src/menu/set_menu.c \
				src/menu/event.c \
				src/final/boss.c \
				src/final/draw_lose.c \
				src/final/init_last_page.c \
				src/final/init_final.c \
				src/final/init_character.c \
				src/final/init_txt_inside.c \
				src/final/init_particles.c \
				src/final/button/final_button.c \
				src/final/event_final.c	\
				src/final/press_action.c \
				src/final/move_pointer.c \
				src/final/draw.c \
				src/final/draw_character.c \
				src/final/draw_win.c \
				src/final/tools.c \
				src/final/game_controler.c \
				src/final/draw_particles.c \
				src/play/play.c \
				src/play/struct_play.c \
				src/play/initialisation_play.c \
				src/play/initialisation_play2.c \
				src/play/initialisation_play3.c \
				src/play/interface/interface.c \
				src/play/interface/inventory.c \
				src/play/space_map/struct_space_map.c \
				src/play/space_map/struct_space_map2.c \
				src/play/space_map/struct_space_map3.c \
				src/play/space_map/struct_space_map4.c \
				src/play/space_map/space_map.c \
				src/play/space_map/direction_ship.c \
				src/play/space_map/moove_ship.c \
				src/play/space_map/moove_map.c \
				src/play/space_map/collision_planet.c \
				src/play/space_map/collision_planet2.c \
				src/play/space_map/collision_planet3.c \
				src/play/space_map/collision_planet4.c \
				src/play/space_map/anime_planet.c \
				src/play/space_map/anime_special_planet.c \
				src/play/space_map/anime_special_planet2.c \
				src/play/space_map/condition_anime_special_planet.c \
				src/play/custom/custom.c 	\
				src/play/custom/initialisation_c.c 	\
				src/play/custom/set_click.c 	\
				src/play/custom/set_click2.c 	\
				src/play/custom/change_icon.c 	\
				src/play/custom/b_change_sn.c 	\
				src/play/custom/set_lang_custom.c 	\
				src/play/story/story.c 	\
				src/play/story/initialisation_story.c 	\
				src/play/story/b_change_story.c 	\
				src/play/story/set_click_story.c 	\
				src/play/story/set_lang_story.c 	\
				src/play/echap_option/echap.c 	\
				src/play/echap_option/initialisation_echap.c 	\
				src/play/echap_option/set_click_e.c 	\
				src/play/echap_option/set_click_e2.c 	\
				src/play/loading/loading.c 	\
				src/play/loading/loading2.c 	\
				src/tuto/initialisation_t.c 	\
				src/tuto/tuto.c 	\
				src/tuto/set_click_t.c 	\
				src/tuto/set_lang_t.c 	\

OBJ		=		$(SRC:.c=.o)

INC		=		-include src/include/my_rpg.h -include src/include/struct.h -include src/include/include.h -include src/include/struct_play.h

CFLAGS	=		-l csfml-graphics -l csfml-window -l csfml-system -l csfml-audio -Wall -Wextra -g -lm

NAME	=	my_rpg

all:		$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS) $(INC)

clean:
	rm	-f 	$(OBJ) src/final/*.o

fclean: clean
	rm 	-f 	$(NAME)

re:	clean fclean all