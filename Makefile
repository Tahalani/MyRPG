##
## EPITECH PROJECT, 2021
## makefile
## File description:
## Make the project
##

EXT_CRI		=		*.gcno *.gcda

EXTENSION	=		.c

SRC			=		src/main.c									\
					$(addsuffix .c, $(addprefix src/, my_rpg	\
					utils/move_rect								\
					utils/position								\
					player/loop									\
					player/position								\
					window										\
					display										\
					event										\
					path_sprite									\
					))											\

SRCT 		=		tests/tests_rpg.c							\
					$(addsuffix .c, $(addprefix src/, my_rpg	\
					utils/move_rect								\
					utils/position								\
					player/loop									\
					player/position								\
					window										\
					display										\
					event										\
					path_sprite									\
					))											\

OBJ			=		$(SRC:$(EXTENSION)=.o)

OBJT		=		$(SRCT:$(EXTENSION)=.o)

CFLAGS		=		-I./includes -Wall -Wextra

LDFLAGS		=		-l csfml-graphics -l csfml-window	\
					-l csfml-system -l csfml-audio

CC			=		gcc

MKU			=		mkdir $(NAME_DIR)

RM			=		rm -rf

MV			=		mv

NAME		=		my_rpg

NAME_CRI	=		units_tests

NAME_DIR	=		unwanted

all:	$(NAME)

.SILENT:

.PHONY: all re clean fclean units_tests tests_run

$(NAME):	$(OBJ)
	$(MAKE) -C lib/my
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS) $(CFLAGS) -L./lib/my -lmy
	@echo -e "\e[92;5m----- MY RPG START -----\e[0m"

clean:
	$(RM) $(OBJ)
	@echo -e "\e[35m----- MY RPG CLEANED -----\033[0m"

fclean:	clean
	$(MAKE) -C lib/my fclean
	$(RM) $(NAME)
	$(RM) $(NAME_CRI)
	$(RM) -r unwanted
	$(RM) $(OBJT)
	$(RM) $(EXT_CRI)

re:		fclean all

units_tests:	fclean $(OBJT)
	$(MAKE) -C lib/my
	$(CC) -o $(NAME_CRI) $(SRCT) $(CFLAGS) $(LDFLAGS) -L./lib/my -lmy	\
	-lcriterion --coverage
	$(MKU)
	$(MV) *.gcno $(NAME_DIR)

tests_run:		units_tests
	./$(NAME_CRI)
	$(MV) *.gcda $(NAME_DIR)
	gcovr $(NAME_DIR)/
