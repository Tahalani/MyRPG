/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** rect_inv
*/

#include "my.h"
#include "rpg.h"

int set_scale_inv(game_t *game)
{
    game->inventory.object[0].scale = (sfVector2f){0.1, 0.1};
    game->inventory.object[1].scale = (sfVector2f){1, 1};
    for (int i = 0; i != 2; i++) {
        sfSprite_setScale
        (game->inventory.object[i].sprite, game->inventory.object[i].scale);
    }
    return (0);
}

int set_rect_inv(game_t *game)
{
    game->inventory.object[0].rect = (sfIntRect){0, 0, 480, 480};
    game->inventory.object[1].rect = (sfIntRect){0, 0, 407, 613};
    for (int i = 0; i != 2; i++) {
        sfSprite_setTextureRect
        (game->inventory.object[i].sprite, game->inventory.object[i].rect);
    }
    set_scale_inv(game);
    return (0);
}
