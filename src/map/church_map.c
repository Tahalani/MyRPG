/*
** EPITECH PROJECT, 2022
** original_rpg
** File description:
** church_map
*/

#include "map.h"
#include "rpg.h"

int acces_to_church_map(game_t *game)
{
    if (game->map[0].x_player == 4 && game->map[0].y_player == 22) {
        game->map[0].check = 0;
        game->map[1].check = 1;
    }
    return 0;
}