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
    if ((game->map[0].x_player == 8 || game->map[0].x_player == 9) &&
    game->map[0].y_player == 45) {
        game->map[0].check = 0;
        game->map[1].check = 1;
        game->map[0].y_player = 46;
        sfClock_restart(game->clock_load);
    }
    if (game->map[1].x_player == 16 && game->map[1].y_player == 17 &&
    game->map[1].check == 1) {
        game->map[1].check = 0;
        game->map[0].check = 1;
        game->map[1].y_player -= 1;
        sfClock_restart(game->clock_load);
    }
    return 0;
}
