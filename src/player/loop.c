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
    position_sprite(player->sprite, &player->position, 2160, 1027);
    return (0);
}

int player_loop(player_t *player)
{
    sfSprite_setTextureRect(player->sprite, player->rect);
    return (0);
}
