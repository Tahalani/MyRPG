/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** loop
*/

#include "my.h"
#include "rpg.h"

int player_before_loop(player_t *player)
{
    position_sprite(player->sprite, &player->position, 900, 770);
    return (0);
}

int player_loop(player_t *player)
{
    return (0);
}
