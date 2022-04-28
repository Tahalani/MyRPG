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
    game->speech[3].rect = (sfIntRect){0, 0, 1450, 349};
    for (int i = 0; i < 4; i++) {
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
    game->pnj[5].rect = (sfIntRect){0, 100, 35, 35};
    game->pnj[6].rect = (sfIntRect){0, 100, 35, 35};
    game->pnj[7].rect = (sfIntRect){31.3333333, 48, 31, 48};
    game->pnj[8].rect = (sfIntRect){0, 63, 38, 48};
    game->pnj[9].rect = (sfIntRect){32, 0, 31, 48};
    game->pnj[10].rect = (sfIntRect){33, 0, 31, 48};
    game->pnj[11].rect = (sfIntRect){49, 0, 48, 48};
    for (int i = 0; i < 12; i++)
        sfSprite_setTextureRect(game->pnj[i].sprite, game->pnj[i].rect);
    return (0);
}
