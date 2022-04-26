/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** position_inv
*/

#include "my.h"
#include "rpg.h"

int set_position_object(game_t *game)
{
    game->inventory.object[0].pos = (sfVector2f){700, 900};
    game->inventory.object[1].pos = (sfVector2f){1000, 1500};
    for (int i = 0; i != 2; i++) {
        sfSprite_setPosition
        (game->inventory.object[i].sprite, game->inventory.object[i].pos);
    }
    return (0);
}
