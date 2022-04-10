/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** rect_pnj
*/

#include "my.h"
#include "rpg.h"

int set_rect_pnj(game_t *game)
{
    game->pnj[0].rect = (sfIntRect){31.3333333, 0, 31, 48};
    game->pnj[1].rect = (sfIntRect){31.6666667, 48, 31, 48};
    game->pnj[2].rect = (sfIntRect){48.3333333, 0, 48, 48};
    for (int i = 0; i != 3; i++)
        sfSprite_setTextureRect(game->pnj[i].sprite, game->pnj[i].rect);
}
