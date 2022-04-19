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
    scipt_pnj(game, 3);
    scipt_pnj(game, 4);
    scipt_pnj(game, 5);
    scipt_pnj(game, 6);
    scipt_pnj(game, 7);
    return (0);
}
