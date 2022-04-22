/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** castle_map
*/

#include "map.h"
#include "rpg.h"

int acces_to_castle_map(game_t *game)
{
    if (game->map[2].x_player == 10 && game->map[2].y_player == 1) {
        game->map[2].check = 0;
        game->map[3].check = 1;
        game->map[2].y_player = 2;
    }
    if (game->map[3].x_player == 15 && game->map[3].y_player == 17) {
        game->map[3].check = 0;
        game->map[2].check = 1;
        game->map[3].y_player -= 1;
    }
    return 0;
}
