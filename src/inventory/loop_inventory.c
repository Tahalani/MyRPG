/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** loop_inventory
*/

#include "my.h"
#include "rpg.h"



int inventory_loop(game_t *game)
{
    display_natural_object(game);
    move_rect(&game->inventory.object[0].rect, 480, 3840, 0);
    sfSprite_setTextureRect(game->inventory.object[0].sprite,
    game->inventory.object[0].rect);
    return (0);
}
