/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** loop
*/

#include "my.h"
#include "rpg.h"

int player_before_loop(game_t *game)
{
    position_sprite(game->player.sprite, &game->player.position, 900, 626);
    return (0);
}

int player_loop(game_t *game)
{
    return (0);
}
