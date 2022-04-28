/*
** EPITECH PROJECT, 2022
** B-MUL-200-PAR-2-1-myrpg-taha.alani
** File description:
** top_map
*/

#include "map.h"
#include "rpg.h"

int acces_to_top_map(game_t *game)
{
    if (game->map[0].x_player == 29 && game->map[0].y_player == 1) {
        game->map[0].check = 0;
        game->map[2].check = 1;
        game->map[0].y_player = 3;
    }
    if (game->map[2].x_player == 10 && game->map[2].y_player == 20) {
        game->map[2].check = 0;
        game->map[0].check = 1;
        game->map[2].y_player = 18;
    }
    return 0;
}
