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
sfSprite *init_sprite(char *path, sfTexture* texture, float x, float y);
int move_rect(sfIntRect *rect, int offset, int max_value, int top);
int position_sprite(sfSprite *sprite, sfVector2f *position, int x, int y);

// MAP //
char **map_create(char *path);
int initialize_map(game_t *game);
int map_loop(game_t *game);

// MENU //
int analyse_menu(menu_t *menu, game_t *game, btn_t *btn);
int display_menu_settings(menu_t *menu, game_t *game, btn_t *btn);
int display_menu_conf(menu_t *menu, game_t *game, btn_t *btn);
int display_menu(menu_t *menu, game_t *game, btn_t *btn);
int loop_menu(menu_t *menu, game_t *game, btn_t *btn);
int initialize_menu(menu_t *menu, btn_t *btn);
int set_path_menu(menu_t *menu, btn_t *btn);
int set_pos_menu(menu_t *menu, btn_t *btn);
int init_pos_menu(menu_t *menu, btn_t *btn);
int set_rect_menu(menu_t *menu);
int init_rect_menu(menu_t *menu);
int set_scale_menu(menu_t *menu, btn_t *btn);
int init_scale_menu(menu_t *menu, btn_t *btn);
int start_game(game_t *game, menu_t *menu);

// PLAYER //
int initialize_player(player_t *player);
int player_loop(player_t *player);
int test_plus(game_t *game, int operator, float *player);
void run_player(game_t *game, char check);
int rect_player(player_t *player, int top);
int analyse_move_player(game_t *game);

// PNJ //
int display_pnj(game_t *game);
int pnj_create(game_t *game);
int initialize_pnj(game_t *game);
int set_position_pnj(game_t *game);
int set_rect_pnj(game_t *game);

// DISPLAY.C //
int function_to_display(game_t *game);

// EVENT.C //
int analyse_events(game_t *game);

// MUSIC.C //
sfMusic *music(char *path, int loop);

// WINDOW.C //
sfRenderWindow *initialize_window(int width, int height, int bitsPerPixel);

// MY_RPG //
int initialize_value(game_t *game);
int my_rpg(game_t *game, menu_t *menu, btn_t *btn);

#endif/* !PROJET_H_ */
