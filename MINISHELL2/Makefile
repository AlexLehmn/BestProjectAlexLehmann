##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC 	=	./src/str_to_word.c 	\
			./src/minishell.c	\
			./src/struct.c	\
			./src/get_path.c	\
			./src/free_all.c	\
			./src/exe_bin.c	\
			./src/print_link_list.c	\
			./src/utils.c	\
			./src/exe_built.c	\
			./src/my_exit.c	\
			./src/my_cd.c	\
			./src/my_cd2.c	\
			./src/my_setenv.c 	\
			./src/my_unsetenv.c	\
			./src/my_env.c	\
			./src/pipe.c	\
			./src/pipe2.c	\
			./src/pipe_bin_exe.c	\
			./src/redire_right.c	\
			./src/check_setenv.c	\
			./src/who_exe.c 	\
			./src/main.c	\
			./src/exe_built_pipe.c	\
			./lib/my/my_strcat.c	\
			./lib/my/my_strcmp.c 	\
			./lib/my/my_strdup.c	\
			./lib/my/my_strlen.c	\
			./lib/my/my_putchar.c	\
			./lib/my/my_putstr.c	\
			./lib/my/my_strcpy.c	\
			./lib/my/my_strncmp.c	\
			./lib/my/my_strncpy.c	\
			./lib/my/my_getnbr.c	\

INC	=	-I include

LIB	=	-L ./lib -lmy

CFLAGS	=	-Wall -Wextra -g

OBJ	=	$(SRC:.c=.o)

NAME	=	mysh

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(CFLAGS) $(INC) $(OBJ)
clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	clean fclean all