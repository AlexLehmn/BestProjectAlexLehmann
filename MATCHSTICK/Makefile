##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC     = 	src/matchstick.c 	\
			lib/my_putstr.c		\
			lib/my_putchar.c 	\
			lib/my_atoi.c	\
			src/struct_fill.c 	\
			src/print_board.c	\
			src/check_error.c	\
			src/init_game.c 	\
			src/refresh_board.c	\
			src/fill_tabint.c 	\
			src/ia_turn.c 	\
			src/play.c	\
			src/get_info_line.c 	\
			lib/my_getnbr.c	\
			lib/my_put_nbr.c	\

INC =   -include ./include/my.h -include ./include/struct.h

CFLAGS  =   -Wall -Wextra

OBJ =   $(SRC:.c=.o)

NAME    =   matchstick

all:    $(NAME)

$(NAME):    $(OBJ)
	gcc -o $(NAME) $(OBJ) $(INC) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: clean fclean all