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
    for (int i = 0; i != 3; i++)
        sfSprite_setPosition(game->pnj[i].sprite, game->pnj[i].position);
    set_rect_pnj(game);
    return (0);
}
