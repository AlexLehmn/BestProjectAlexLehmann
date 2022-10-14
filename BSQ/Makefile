##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC     = 	bsq.c \
			my_putchar.c	\
			my_putstr.c	\
			open_file.c	\
			struct.c	\
			pointeur_todouble.c	\
			my_strlen.c	\
			create_doublecopy.c	\
			algofindsquare.c	\
			my_atoi.c	\
			my_put_nbr.c	\
			errorfile.c	\

INC =   -include ./include/my.h

CFLAGS  =   -Wall -Wextra -g

OBJ =   $(SRC:.c=.o)

NAME    =   bsq

all:    $(NAME)

$(NAME):    $(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS) $(INC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: clean fclean all