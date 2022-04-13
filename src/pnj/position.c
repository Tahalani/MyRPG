/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** position_pnj
*/

#include "my.h"
#include "rpg.h"

int set_position_pnj(game_t *game)
{
    game->pnj[0].position = (sfVector2f){2500, 1300};
    game->pnj[1].position = (sfVector2f){1280, 520};
    game->pnj[2].position = (sfVector2f){700, -170};
    game->pnj[3].position = (sfVector2f){-300, 32};
    game->pnj[4].position = (sfVector2f){150, 1695};
    game->pnj[5].position = (sfVector2f){1784, 2065};
    for (int i = 0; i != 6; i++)
        sfSprite_setPosition(game->pnj[i].sprite, game->pnj[i].position);
    set_rect_pnj(game);
    return (0);
}
