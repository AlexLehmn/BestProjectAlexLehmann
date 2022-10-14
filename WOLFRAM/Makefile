#TOP = ./

#CFLAGS += -Wall -Wextra --make -o

#SRC = input.hs \
#	  operator.hs \
#	  sort.hs \
#	  operation.hs \

NAME = wolfram

all: $(NAME)

$(NAME):
	stack install --local-bin-path .
	mv wolfram-exe wolfram

clean:
	rm -f *.hi
	rm -f *.o
	stack clean

fclean: clean
	rm -f $(NAME)

re: clean fclean all