/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** loop
*/

#include "my.h"
#include "rpg.h"

int check_status_player(menu_t *menu, player_t *player)
{
    if (menu->brown_skin.status == 1) {
        sfSprite_destroy(player->sprite);
        sfTexture_destroy(player->texture);
        player->sprite =
        init_sprite("ressources/player/player.png", &player->texture, 2, 2);
    }
    if (menu->red_skin.status == 1) {
        sfSprite_destroy(player->sprite);
        sfTexture_destroy(player->texture);
        player->sprite =
        init_sprite("ressources/player/player_2.png", &player->texture, 2, 2);
    }
    if (menu->blue_skin.status == 1) {
        sfSprite_destroy(player->sprite);
        sfTexture_destroy(player->texture);
        player->sprite =
        init_sprite("ressources/player/player_3.png", &player->texture, 2, 2);
    }
    return (0);
}

int initialize_player(menu_t *menu, player_t *player)
{
    player->sprite =
    init_sprite("ressources/player/player.png", &player->texture, 2, 2);
    check_status_player(menu, player);
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
