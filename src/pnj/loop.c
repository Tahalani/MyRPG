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
    return (0);
}
