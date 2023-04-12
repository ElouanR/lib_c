##
## EPITECH PROJECT, 2023
## PROJECT_BUILDER
## File description:
## Makefile
##

SRC = 	./src/main.c					\

OBJ_DIR = ./obj/

OBJ = $(addprefix $(OBJ_DIR), $(subst src/,,$(SRC:.c=.o)))

NAME = binary

BASIC_FLAGS := -Wall -Wextra -W

LIB_FLAGS := -I include/ -L ./lib -l:lib.a

CSFML_FLAGS := -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

all: $(OBJ_DIR) $(NAME)

build_lib:
	make -sC ./lib

clean_lib:
	make clean -sC ./lib

fclean_lib:
	make fclean -sC ./lib

RED = \033[0m\e[1m\e[31m
GREEN = \033[0m\e[1m\e[32m
ORANGE = \033[0m\e[1m\e[33m
BLUE = \033[0m\e[1m\e[34m
PURPLE = \033[0m\e[1m\e[35m
NC = \033[0m

$(NAME): $(OBJ)
	make build_lib
	gcc $(OBJ) $(BASIC_FLAGS) -o $(NAME) $(LIB_FLAGS) $(CSFML_FLAGS)
	@echo -ne '$(GREEN)Compilation done, $(NC)'
	@echo -e '$(PURPLE)$(NAME)$(NC) $(GREEN)binary created !$(NC)'

$(OBJ_DIR)%.o: src/%.c
	gcc $(BASIC_FLAGS) -c -o $(OBJ_DIR)$(subst src/,,$(basename $<)).o $<	\
	$(LIB_FLAGS) $(CSFML_FLAGS)

$(OBJ_DIR):
	mkdir -p $(dir $(OBJ))

clean: clean_lib
	rm -Rf $(OBJ_DIR)
	@echo -e '$(ORANGE)Objects deleted !$(NC)'

fclean: clean fclean_lib
	rm -f $(NAME)
	rm -f coding-style-reports.log
	@echo -e '$(ORANGE)Binary deleted !$(NC)'

cstyle: fclean_lib
	rm -Rf $(OBJ_DIR)
	rm -f $(NAME)
	~/cstyle.sh . .

re: fclean all

.PHONY : all build_lib clean_lib fclean_lib clean fclean cstyle re
