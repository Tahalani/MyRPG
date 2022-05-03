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
					map/church_map								\
					map/mini_map								\
					map/top_map									\
					map/castle_map								\
					map/initialize_side_map						\
					map/initialize_map							\
					map/loop_map								\
					map/view_map								\
					menu/analyse_menu							\
					menu/display_menu							\
					menu/loop_menu								\
					menu/path_menu								\
					menu/position_menu							\
					menu/rect_menu								\
					menu/scale_menu								\
					menu/manage_click							\
					menu/manage_click_pause						\
					menu/save_game								\
					menu/manage_click_settings					\
					menu/manage_click_conf						\
					menu/animation_btn_menu						\
					menu/shape_menu								\
					menu/start_game								\
					player/loop_player							\
					player/position_player						\
					player/rect_player							\
					pnj/display_pnj								\
					pnj/initialize_pnj							\
					pnj/loop_pnj								\
					pnj/position_pnj							\
					pnj/script_pnj								\
					pnj/rect_pnj								\
					pnj/speech_pnj								\
					pnj/path_pnj								\
					inventory/initialize_inv					\
					inventory/loop_inventory					\
					inventory/position_inv						\
					inventory/display_inv						\
					inventory/rect_inv							\
					fight/display_fight							\
					fight/initialize_fight						\
					fight/loop_fight							\
					fight/position_fight						\
					fight/rect_fight							\
					fight/gameplay								\
					utils/move_rect								\
					utils/make_text								\
					utils/position								\
					utils/init									\
					utils/make_shape							\
					destroy/destroy_menu						\
					destroy/destroy_btn							\
					destroy/destroy_game						\
					destroy/destroy_inventory					\
					destroy/destroy_pnj							\
					display										\
					event										\
					music										\
					loop										\
					window										\
					))											\

SRCT 		=		tests/tests_rpg.c							\
					$(addsuffix .c, $(addprefix src/, my_rpg	\
					map/church_map								\
					map/mini_map								\
					map/top_map									\
					map/castle_map								\
					map/initialize_side_map						\
					map/initialize_map							\
					map/loop_map								\
					map/view_map								\
					menu/analyse_menu							\
					menu/display_menu							\
					menu/loop_menu								\
					menu/path_menu								\
					menu/position_menu							\
					menu/rect_menu								\
					menu/scale_menu								\
					menu/manage_click							\
					menu/manage_click_pause						\
					menu/save_game								\
					menu/manage_click_settings					\
					menu/manage_click_conf						\
					menu/animation_btn_menu						\
					menu/shape_menu								\
					menu/start_game								\
					player/loop_player							\
					player/position_player						\
					player/rect_player							\
					pnj/display_pnj								\
					pnj/initialize_pnj							\
					pnj/loop_pnj								\
					pnj/position_pnj							\
					pnj/script_pnj								\
					pnj/rect_pnj								\
					pnj/speech_pnj								\
					pnj/path_pnj								\
					inventory/initialize_inv					\
					inventory/loop_inventory					\
					inventory/position_inv						\
					inventory/display_inv						\
					inventory/rect_inv							\
					fight/display_fight							\
					fight/initialize_fight						\
					fight/loop_fight							\
					fight/position_fight						\
					fight/rect_fight							\
					fight/gameplay								\
					utils/move_rect								\
					utils/make_text								\
					utils/position								\
					utils/init									\
					utils/make_shape							\
					destroy/destroy_menu						\
					destroy/destroy_btn							\
					destroy/destroy_game						\
					destroy/destroy_inventory					\
					destroy/destroy_pnj							\
					display										\
					event										\
					music										\
					loop										\
					window										\
					))											\

OBJ			=		$(SRC:$(EXTENSION)=.o)

OBJT		=		$(SRCT:$(EXTENSION)=.o)

CPPFLAGS	=		-I./includes

CFLAGS		=		-Wall -Wextra

LDFLAGS		=		-l csfml-graphics -l csfml-window	\
					-l csfml-system -l csfml-audio

CC			=		gcc

MKU			=		mkdir $(NAME_DIR)

MV			=		mv

NAME		=		my_rpg

NAME_CRI	=		units_tests

NAME_DIR	=		unwanted

all:	$(NAME)

.SILENT:

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
	$(RM) -r $(NAME_DIR)
	$(RM) $(OBJT)
	$(RM) $(EXT_CRI)

re:		fclean all

units_tests:	fclean $(OBJT)
	$(MAKE) -C lib/my
	$(CC) -o $(NAME_CRI) $(SRCT) $(CPPFLAGS) $(LDFLAGS) -L./lib/my -lmy	\
	-lcriterion --coverage
	$(MKU)
	$(MV) *.gcno $(NAME_DIR)

tests_run:		units_tests
	./$(NAME_CRI)
	$(MV) *.gcda $(NAME_DIR)
	gcovr $(NAME_DIR)/

debug: CPPFLAGS += -g3
debug: re

.PHONY: all re clean fclean units_tests tests_run debug
