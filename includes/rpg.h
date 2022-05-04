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
sfRectangleShape *make_shape(sfTexture *, sfVector2f, sfVector2f);
sfSprite *init_sprite(char *path, sfTexture **texture, float x, float y);
int position_sprite(sfSprite *, sfVector2f *, int, int);
int rect_skin(param_t *player, int top, sfClock *clock, float seconds);
int move_rect(sfIntRect *rect, int offset, int max_value, int top);
sfText *make_test(char *path, int pos_x, int pos_y, int size);
char *int_to_char(int nb);

// MAP //
int mini_map_utils(game_t *game);
int init_mini_map_utils(game_t *game);
int display_mini_map(game_t *game);
int mini_map_loop(game_t *game);
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
int initialize_mini_map(game_t *game);
int set_view_value(game_t *game);
int destroy_music(game_t *game, menu_t *menu);

// MENU //
int analyse_click(menu_t *menu, game_t *game, btn_t *btn);
int analyse_key(menu_t *menu, game_t *game, btn_t *btn);
int analyse_menu(menu_t *menu, game_t *game, btn_t *btn);
int animation_menu_settings(menu_t *, game_t *, btn_t *, sfFloatRect);
int animation_menu_config(menu_t *, game_t *, btn_t *, sfFloatRect );
int animation_menu(menu_t *menu, game_t *game, btn_t *btn);
int display_menu_settings(menu_t *menu, game_t *game, btn_t *btn);
int display_conf_skin(menu_t *menu, game_t *game);
int display_menu_conf(menu_t *menu, game_t *game, btn_t *btn);
int display_menu(menu_t *menu, game_t *game, btn_t *btn);
int loop_menu(menu_t *menu, game_t *game, btn_t *btn);
int initialize_menu(menu_t *menu, btn_t *btn, game_t *game);
int manage_conf_map(menu_t *menu, sfVector2i mouse, sfFloatRect shape);
int manage_conf_skin(menu_t *menu, sfVector2i mouse, sfFloatRect shape);
int manage_click_menu_conf(menu_t *menu, game_t *game, btn_t *btn);
void manage_settings_volume(menu_t *, game_t *, sfVector2i, btn_t *);
int manage_wood_top(menu_t *menu, sfVector2i mouse, btn_t *btn);
int manage_settings_wood(menu_t *, game_t *, sfVector2i, btn_t *);
int manage_click_menu_settings(menu_t *menu, game_t *game, btn_t *btn);
int manage_click_menu(menu_t *menu, game_t *game, btn_t *btn);
int set_path_menu_conf(menu_t *menu);
void manage_click_menu_pause(menu_t *menu, game_t *game, btn_t *btn);
int check_click(game_t *game);
int manage_setting_wood_two_again(menu_t *menu, game_t *game, btn_t *btn);

// PAUSE //
int analyse_events_pause(game_t *game);

// SET_MENU //
int set_path_menu_settings(menu_t *menu, btn_t *btn, game_t *game);
int set_path_menu(menu_t *menu, btn_t *btn, game_t *game);
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
int init_shape_menu_settings(menu_t *menu);
int init_shape_menu_conf(menu_t *menu);
int start_game(game_t *game, menu_t *menu, btn_t *btn);
int display_menu_pause(menu_t *menu, game_t *game, btn_t *btn);
int save_game(game_t *game, btn_t *btn);
void init_shape_menu(menu_t *menu);
void init_pos_shape(menu_t *menu);

// PLAYER //
int initialize_player(menu_t *menu, player_t *player);
int player_loop(player_t *player);
int player_function_move(game_t *game, int operator, float *player, int i);
int run_player_two(game_t *game, char check, int i);
int run_player(game_t *game, char check, int i);
int rect_player(player_t *player, int top);
int check_map(game_t *game);
int analyse_move_player(game_t *game);

// quête //
int find_pika(game_t *game);

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
int path_script_pnj(game_t *game);
int pnj_create_two(game_t *game);
int init_pnj(game_t *game, int i, char *path, int offset);

// INVENTORY //
int initialize_story_object(game_t *game);
int set_position_object(game_t *game);
int display_natural_object(game_t *game);
int inventory_loop(game_t *game);
int set_scale_inv(game_t *game);
int set_rect_inv(game_t *game);
int display_inventory(game_t *game);
int check_click(game_t *game);

// FIGHT //
int acces_fight(game_t *game);
int initialize_fight(game_t *game);
int set_rect_fight(game_t *game);
int set_position_fight(game_t *game);
int display_fight(game_t *game);
int fight_loop(game_t *game);
int move_rect_player_fight(game_t *game);
int move_rect_monster_fight(game_t *game);
int gameplay_fight(game_t *game);
int move_rect_victory(game_t *game);

// DISPLAY.C //
int function_to_display(game_t *game);

// EVENT.C //
int analyse_events(game_t *);

// MUSIC.C //
int set_music_value(game_t *game);
sfMusic *music(char *path, int loop);

// WINDOW.C //
int set_value_window(game_t *game);
sfRenderWindow *initialize_window(int width, int height, int bitsPerPixel);

// MY_RPG //
void check_status_game(game_t *game);
int before_loop(game_t *game, menu_t *menu, btn_t *btn);
int in_loop(game_t *game);
int initialize_value(game_t *game);
int my_rpg(game_t *, menu_t *, btn_t *);

// DESTROY //
int destroy_all_game(game_t *game);
int destroy_all_inventory(inventory_t *inventory);
int destroy_all_menu(menu_t *menu);
int destroy_all_btn(btn_t *btn);
int destroy_all_pnj(pnj_t *pnj, speech_t *speech);
int destroy_all(menu_t *menu, btn_t *btn, game_t *game);

// ANIMATION //
int initialize_animation(game_t *game);
int display_animation(game_t *game);
int loop_animation(game_t *game);

#endif/* !PROJET_H_ */
