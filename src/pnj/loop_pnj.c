/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** loop
*/

#include "my.h"
#include "rpg.h"

int pnj_loop(game_t *game)
{
    game->pnj->seconds =
    sfTime_asSeconds(sfClock_getElapsedTime(game->pnj->clock));
    for (int i = 3; i < 12; i++)
        scipt_pnj(game, i);
    return (0);
}
