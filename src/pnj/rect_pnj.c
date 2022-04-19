/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** rect_pnj
*/

#include "my.h"
#include "rpg.h"

int set_rect_speech(game_t *game)
{
    game->speech[0].rect = (sfIntRect){0, 0, 1450, 349};
    game->speech[1].rect = (sfIntRect){0, 0, 1450, 349};
    game->speech[2].rect = (sfIntRect){0, 0, 1450, 349};
    for (int i = 0; i < 3; i++) {
        sfSprite_setTextureRect(game->speech[i].sprite, game->speech[i].rect);
    }
    return (0);
}

int set_rect_pnj(game_t *game)
{
    set_rect_speech(game);
    game->pnj[0].rect = (sfIntRect){31.3333333, 0, 31, 48};
    game->pnj[1].rect = (sfIntRect){31.6666667, 48, 31, 48};
    game->pnj[2].rect = (sfIntRect){48.3333333, 0, 48, 48};
    game->pnj[3].rect = (sfIntRect){0, 108, 34, 54};
    game->pnj[4].rect = (sfIntRect){0, 97, 34, 33};
    game->pnj[5].rect = (sfIntRect){0, 100, 40, 35};
    for (int i = 0; i < 6; i++)
        sfSprite_setTextureRect(game->pnj[i].sprite, game->pnj[i].rect);
    return (0);
}
