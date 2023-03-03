##
## EPITECH PROJECT, 2023
## PROJECT_BUILDER
## File description:
## Makefile
##

SRC = 	./src/main.c				\

OBJ = $(SRC:.c=.o)

NAME = exec

WARNING_FLAGS := -Wall -Wextra -W -g

LIB_FLAGS := -I include/ -L ./lib -l:lib.a

CSFML_FLAGS := -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

all: $(NAME)

build_lib:
	make -sC ./lib

$(NAME): $(OBJ) build_lib
	gcc $(SRC) $(WARNING_FLAGS) $(CSFML_FLAGS) -o $(NAME) $(LIB_FLAGS)
	make clean

clean:
	make clean -sC ./lib
	rm -f $(OBJ)

fclean: clean
	make fclean -sC ./lib
	rm -f $(NAME)
	rm -f coding-style-reports.log

re: fclean all

.PHONY : all build_lib clean fclean re
