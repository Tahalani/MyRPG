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
    sfSprite_setScale
    (game->inventory.object[0].sprite, game->inventory.object[0].scale);
    return (0);
}

int set_rect_inv(game_t *game)
{
    game->inventory.object[0].rect = (sfIntRect){0, 0, 480, 480};
    for (int i = 0; i < 1; i++) {
        sfSprite_setTextureRect
        (game->inventory.object[i].sprite, game->inventory.object[i].rect);
    }
    set_scale_inv(game);
    return (0);
}
