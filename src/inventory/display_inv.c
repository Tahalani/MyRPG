/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** display_inv
*/

#include "my.h"
#include "rpg.h"

int display_natural_object(game_t *game)
{
    if (game->map[1].check == 1) {
        sfRenderWindow_drawSprite
        (game->window.window, game->inventory.object[0].sprite, NULL);
    }
    return (0);
}
