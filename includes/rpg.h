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
    #include "inventory.h"

// UTILS //
sfRectangleShape *make_shape(sfTexture *texture, sfVector2f size, sfVector2f pos);
sfSprite *init_sprite(char *path, sfTexture *texture, float x, float y);
int position_sprite(sfSprite *, sfVector2f *, int, int);
int rect_skin(param_t *player, int top);
int move_rect(sfIntRect *rect, int offset, int max_value, int top);
sfText *make_test(char *path, int pos_x, int pos_y, int size);
char *int_to_char(int nb);

// MAP //
int create_side_map(game_t *game);
char **map_create(char *path);
int acces_to_top_map(game_t *game);
int acces_to_church_map(game_t *game);
int acces_to_castle_map(game_t *game);
int initialize_map_top(game_t *game);
int initialize_map_church(game_t *game);
int initialize_map(game_t *game);
int initialize_castle_map(game_t *game);
int check_for_the_good_view(game_t *game);
int map_loop(game_t *game);
int before_loop(game_t *game, menu_t *menu, btn_t *btn);

// MENU //
int analyse_click(menu_t *menu, game_t *game, btn_t *btn);
int analyse_key(menu_t *menu, game_t *game, btn_t *btn);
int analyse_menu(menu_t *menu, game_t *game, btn_t *btn);
int animation_menu_settings(menu_t *menu, game_t *game, btn_t *btn, sfFloatRect shape);
int animation_menu_config(menu_t *menu, game_t *game, btn_t *btn, sfFloatRect shape);
int animation_menu(menu_t *menu, game_t *game, btn_t *btn);
int display_menu_settings(menu_t *menu, game_t *game, btn_t *btn);
int display_conf_skin(menu_t *menu, game_t *game);
int display_menu_conf(menu_t *menu, game_t *game, btn_t *btn);
int display_menu(menu_t *menu, game_t *game, btn_t *btn);
int loop_menu(menu_t *menu, game_t *game, btn_t *btn);
int initialize_menu(menu_t *menu, btn_t *btn);
int manage_conf_map(menu_t *menu, sfVector2i mouse, sfFloatRect shape);
int manage_conf_skin(menu_t *menu, sfVector2i mouse, sfFloatRect shape);
int manage_click_menu_conf(menu_t *menu, game_t *game, btn_t *btn);
int manage_settings_volume(menu_t *menu, game_t *game, sfVector2i mouse, btn_t *btn);
int manage_wood_top(menu_t *menu, sfVector2i mouse, btn_t *btn);
int manage_settings_wood(menu_t *menu, game_t *game, sfVector2i mouse, btn_t *btn);
int manage_click_menu_settings(menu_t *menu, game_t *game, btn_t *btn);
int manage_click_menu(menu_t *menu, game_t *game, btn_t *btn);
int set_path_menu_conf(menu_t *menu);
int manage_click_menu_pause(menu_t *menu, game_t *game, btn_t *btn);

// PAUSE //
int analyse_events_pause(game_t *game);

// SET_MENU //
int set_path_menu_settings(menu_t *menu, btn_t *btn);
int set_path_menu(menu_t *menu, btn_t *btn);
int set_pos_menu_conf(menu_t *menu);
int set_pos_menu(menu_t *menu, btn_t *btn);
int init_pos_conf(menu_t *menu);
int init_pos_menu(menu_t *menu, btn_t *btn);
int set_rect_menu(menu_t *menu);
int init_rect_menu(menu_t *menu);
int set_scale_config(menu_t *menu);
int set_scale_menu(menu_t *menu, btn_t *btn);
int init_scale_conf(menu_t *menu);
int init_scale_menu(menu_t *menu, btn_t *btn);
int init_pos_shape(menu_t *menu);
int init_shape_menu_settings(menu_t *menu);
int init_shape_menu_conf(menu_t *menu);
int init_shape_menu(menu_t *menu);
int start_game(game_t *game, menu_t *menu, btn_t *btn);
int display_menu_pause(menu_t *menu, game_t *game, btn_t *btn);

// PLAYER //
int initialize_player(menu_t *menu, player_t *player);
int player_loop(player_t *player);
int test_plus(game_t *game, int operator, float *player, int i);
int run_player_two(game_t *game, char check, int i);
int run_player(game_t *game, char check, int i);
int rect_player(player_t *player, int top);
int check_map(game_t *game);
int analyse_move_player(game_t *game);

// PNJ //
int display_pnj(game_t *game);
int pnj_create(game_t *game);
int initialize_pnj(game_t *game);
int set_position_pnj(game_t *game);
int set_rect_pnj(game_t *game);
int scipt_pnj(game_t *game, int i);
int pnj_loop(game_t *game);
int speech_create(game_t *game);
int condition_display_speech(game_t *game);
int put_key(game_t *game, btn_t *btn);

// INVENTORY //
int initialize_story_object(game_t *game);
int set_position_object(game_t *game);
int display_natural_object(game_t *game);
int inventory_loop(game_t *game);
int set_scale_inv(game_t *game);
int set_rect_inv(game_t *game);
int display_inventory(game_t *game);

// DISPLAY.C //
int function_to_display(game_t *game);

// EVENT.C //
int analyse_events(game_t *);

// MUSIC.C //
sfMusic *music(char *, int);

// WINDOW.C //
sfRenderWindow *initialize_window(int, int, int);

// MY_RPG //
int initialize_value(game_t *game);
int my_rpg(game_t *, menu_t *, btn_t *);

// DESTROY //
void destroy_all(menu_t *menu, btn_t *btn, game_t *game, player_t *player);

#endif/* !PROJET_H_ */
