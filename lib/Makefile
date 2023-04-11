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
		my_putstrerror.c			\
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
		my_isalphanum.c				\
		my_strncmp.c				\
		my_addlinetab.c				\
		my_tablen.c					\
		my_removelinetab.c			\
		my_getenv.c					\
		my_searchintab.c			\
		my_randnum.c				\
		my_printf.c					\
		my_putcharerror.c			\
		my_putnbrerror.c			\
		my_printferror.c			\
		my_freetab.c				\
		my_realloctab.c				\
		my_reallocstr.c				\
		my_strdup.c					\
		my_incharacteres.c			\
		my_isnum.c					\
		my_isalpha.c				\
		my_strncpy.c				\

OBJ_DIR = ../obj/

OBJ = $(addprefix $(OBJ_DIR), $(notdir $(SRC:.c=.o)))

NAME = lib.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

$(OBJ_DIR)%.o: %.c
	gcc -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
