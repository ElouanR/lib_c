##
## EPITECH PROJECT, 2023
## lib
## File description:
## Makefile for lib
##

SRC = 	my_getnbr.c					\
		my_nbrstr.c					\
		my_power.c					\
		my_putchar.c				\
		my_puterror.c				\
		my_putnbr.c					\
		my_putstr.c					\
		my_readfile.c				\
		my_revstr.c					\
		my_strcmp.c					\
		my_strisalpha.c				\
		my_strlen.c					\
		my_wordarray.c				\
		my_strcat.c					\
		my_strcpy.c					\
		my_isalphanumeric.c			\
		my_strncmp.c				\
		my_addlinetab.c				\
		my_tablen.c					\
		my_removelinetab.c			\
		my_getenv.c					\
		my_searchenv.c				\
		my_randnum.c				\

OBJ = $(SRC:.c=.o)

NAME = lib.a

all: $(NAME)

$(NAME): $(OBJ)
	gcc -c $(SRC)
	ar rc $(NAME) *.o

clean:
	rm -f $(OBJ)
	rm -f lib.a

fclean: clean
	rm -f $(NAME)
	rm -f ./$(NAME)

re: fclean all

.PHONY: all clean fclean re
