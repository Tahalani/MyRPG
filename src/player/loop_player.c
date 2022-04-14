/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** loop
*/

#include "my.h"
#include "rpg.h"

int initialize_player(player_t *player)
{
    if (player->check_player == 0)
        player->sprite =
        init_sprite("ressources/player/player.png", player->texture, 2, 2);
    if (player->check_player == 1)
        player->sprite =
        init_sprite("ressources/player/player_2.png", player->texture, 2, 2);
    if (player->check_player == 2)
        player->sprite =
        init_sprite("ressources/player/player_3.png", player->texture, 2, 2);
    position_sprite(player->sprite, &player->position, 1936, 1027);
    player->second = 0.00;
    player->clock = sfClock_create();
    player->rect = (sfIntRect){0, 192, 64, 64};
    return (0);
}

int player_loop(player_t *player)
{
    sfSprite_setTextureRect(player->sprite, player->rect);
    return (0);
}
