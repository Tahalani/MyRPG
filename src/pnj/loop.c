/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** loop
*/

#include "my.h"
#include "rpg.h"

int initialize_pnj(game_t *game)
{
    pnj_create(game);
    set_position_pnj(game);
    game->pnj->seconds = 0;
    game->pnj->clock = sfClock_create();
    return (0);
}

int pnj_loop(game_t *game)
{
    game->pnj->seconds = sfTime_asSeconds(sfClock_getElapsedTime(game->pnj->clock));
    rect_pnj(&game->pnj[3].position, game, game->pnj[3].sprite, "ressources/pnj/path_pnj_four.txt");
    return (0);
}
