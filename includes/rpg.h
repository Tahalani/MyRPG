/*
** EPITECH PROJECT, 2021
** projet.h
** File description:
** the .h of project
*/

#ifndef PROJET_H_
    #define PROJET_H_

    #include <stdbool.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <stdio.h>
    #include "player.h"
    #include "game.h"
    #include "menu.h"

// UTILS //
sfSprite *init_sprite(char *, sfTexture*, float, float);
int move_rect(sfIntRect *, int, int, int);
int position_sprite(sfSprite *, sfVector2f *, int, int);

// MAP //
int acces_to_church_map(game_t *game);
char **map_create(char *);
int initialize_map_church(game_t *game);
int initialize_map(game_t *);
int map_loop(game_t *);

// MENU //
int analyse_menu(menu_t *, game_t *);
int display_menu_settings(menu_t *, game_t *, btn_t *);
int display_menu_conf(menu_t *, game_t *, btn_t *);
int display_menu(menu_t *, game_t *, btn_t *);
int loop_menu(menu_t *, game_t *, btn_t *);
int initialize_menu(menu_t *, btn_t *);
int set_path_menu(menu_t *, btn_t *);
int set_pos_menu(menu_t *, btn_t *);
int init_pos_menu(menu_t *, btn_t *);
int set_rect_menu(menu_t *);
int init_rect_menu(menu_t *);
int set_scale_menu(menu_t *, btn_t *);
int init_scale_menu(menu_t *, btn_t *);
int start_game(game_t *, menu_t *);
int init_shape_menu(menu_t *menu);
int manage_click_menu_conf(menu_t *menu, game_t *game);
int manage_click_menu(menu_t *menu, game_t *game);
int animation_menu(menu_t *menu, game_t *game, btn_t *btn);

// PLAYER //
int initialize_player(player_t *);
int player_loop(player_t *);
int test_plus(game_t *, int, float *, int);
int run_player(game_t *, char, int);
int rect_player(player_t *, int);
int analyse_move_player(game_t *);

// PNJ //
int display_pnj(game_t *);
int pnj_create(game_t *);
int initialize_pnj(game_t *);
int set_position_pnj(game_t *);
int set_rect_pnj(game_t *);
int scipt_pnj(game_t *, int);
int pnj_loop(game_t *);

// DISPLAY.C //
int function_to_display(game_t *);

// SHAPE.C //
sfRectangleShape *make_shape(sfTexture *texture,
sfVector2f size, sfVector2f pos);

// EVENT.C //
int analyse_events(game_t *);

// MUSIC.C //
sfMusic *music(char *, int);

// WINDOW.C //
sfRenderWindow *initialize_window(int, int, int);

// MY_RPG //
int initialize_value(game_t *);
int my_rpg(game_t *, menu_t *, btn_t *);

#endif/* !PROJET_H_ */
