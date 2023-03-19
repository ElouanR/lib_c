##
## EPITECH PROJECT, 2023
## PROJECT_BUILDER
## File description:
## Makefile
##

SRC = ./src/main.c					\

OBJ_DIR = ./obj/

OBJ = $(addprefix $(OBJ_DIR), $(notdir $(SRC:.c=.o)))

NAME = exec

DEBUG_FLAGS := -g

WARNING_FLAGS := -Wall -Wextra -W

LIB_FLAGS := -I include/ -L ./lib -l:lib.a

CSFML_FLAGS := -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

all: $(OBJ_DIR) $(NAME)

build_lib:
	make -sC ./lib

clean_lib:
	make clean -sC ./lib

fclean_lib:
	make fclean -sC ./lib

$(NAME): $(OBJ) build_lib
	gcc $(OBJ) $(WARNING_FLAGS) $(DEBUG_FLAGS) $(CSFML_FLAGS) -o $(NAME) $(LIB_FLAGS)

$(OBJ_DIR)%.o: src/%.c
	gcc $(WARNING_FLAGS) $(DEBUG_FLAGS) $(CSFML_FLAGS) -c -o $@ $< $(LIB_FLAGS)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean: clean_lib
	rm -Rf $(OBJ_DIR)

fclean: clean fclean_lib
	rm -f $(NAME)
	rm -f coding-style-reports.log

re: fclean all

.PHONY : all build_lib clean_lib fclean_lib clean fclean re