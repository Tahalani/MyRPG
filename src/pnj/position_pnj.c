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
    sfSprite_setPosition(game->pnj[0].sprite, game->pnj[0].position);
    sfSprite_setPosition(game->pnj[1].sprite, game->pnj[1].position);
    sfSprite_setPosition(game->pnj[2].sprite, game->pnj[2].position);
    set_rect_pnj(game);
    return (0);
}


