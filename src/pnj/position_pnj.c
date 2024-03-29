/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** position_pnj
*/

#include "my.h"
#include "rpg.h"

int set_position_speech(game_t *game)
{
    game->speech[0].pos = (sfVector2f){-200, 100};
    game->speech[1].pos = (sfVector2f){250, 700};
    game->speech[2].pos = (sfVector2f){1600, 1550};
    game->speech[3].pos = (sfVector2f){-200, 100};
    game->speech[4].pos = (sfVector2f){250, 700};
    game->speech[5].pos = (sfVector2f){250, 700};
    game->speech[6].pos = (sfVector2f){-820, 1750};
    game->speech[7].pos = (sfVector2f){-820, 1750};
    game->speech[8].pos = (sfVector2f){100, -2250};
    game->speech[9].pos = (sfVector2f){100, -2250};
    for (int i = 0; i != 10; i++)
        sfSprite_setPosition(game->speech[i].sprite, game->speech[i].pos);
    return (0);
}

int set_position_pnj(game_t *game)
{
    set_position_speech(game);
    game->pnj[0].position = (sfVector2f){2500, 1300};
    game->pnj[1].position = (sfVector2f){1280, 520};
    game->pnj[2].position = (sfVector2f){700, -170};
    game->pnj[3].position = (sfVector2f){-300, 32};
    game->pnj[4].position = (sfVector2f){1603, 301};
    game->pnj[5].position = (sfVector2f){1784, 2065};
    game->pnj[6].position = (sfVector2f){150, 1695};
    game->pnj[7].position = (sfVector2f){150, 1617};
    game->pnj[8].position = (sfVector2f){791, -161};
    game->pnj[9].position = (sfVector2f){-168, 2065};
    game->pnj[10].position = (sfVector2f){1050, 630};
    game->pnj[11].position = (sfVector2f){1099, -2499};
    for (int i = 0; i != 12; i++)
        sfSprite_setPosition(game->pnj[i].sprite, game->pnj[i].position);
    set_rect_pnj(game);
    return (0);
}
