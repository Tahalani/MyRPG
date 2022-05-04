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
    game->inventory[0].scale = (sfVector2f){0.1, 0.1};
    game->inventory[1].scale = (sfVector2f){1, 1};
    game->inventory[2].scale = (sfVector2f){0.08, 0.08};
    game->inventory[3].scale = (sfVector2f){0.08, 0.08};
    for (int i = 0; i != 4; i++) {
        sfSprite_setScale
        (game->inventory[i].sprite, game->inventory[i].scale);
    }
    return (0);
}

int set_rect_inv(game_t *game)
{
    game->inventory[0].rect = (sfIntRect){0, 0, 480, 480};
    game->inventory[1].rect = (sfIntRect){0, 0, 407, 613};
    game->inventory[4].rect = (sfIntRect){0, 0, 35, 35};
    for (int i = 0; i != 2; i++) {
        sfSprite_setTextureRect
        (game->inventory[i].sprite, game->inventory[i].rect);
    }
    sfSprite_setTextureRect
        (game->inventory[4].sprite, game->inventory[4].rect);
    set_scale_inv(game);
    return (0);
}
