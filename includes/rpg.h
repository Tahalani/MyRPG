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

// UTILS //
sfSprite *init_sprite(char *path, sfTexture* texture, float x, float y);
int move_rect(sfIntRect *rect, int offset, int max_value, int top);
int position_sprite(sfSprite *sprite, sfVector2f *position, int x, int y);

// PLAYER //
int run_player(game_t *game, char check);
int rect_player(player_t *player, int top);
int player_before_loop(player_t *player);
int player_loop(player_t *player);

// WINDOW.C //
sfRenderWindow *initialize_window(int width, int height, int bitsPerPixel);

// EVENT.C //
int analyse_move_player(game_t *game);
int analyse_events(game_t *game);

// PATH_SPRITE.C //
int set_path_sprite(game_t *game);

// DISPLAY.C //
int function_to_display(game_t *game);

// MY_RPG.C //
int initialize_value(game_t *game);
int my_rpg(game_t *game);

#endif/* !PROJET_H_ */
