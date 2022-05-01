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
    game->inventory[0].pos = (sfVector2f){700, 900};
    game->inventory[1].pos = (sfVector2f){100, 100};
    game->inventory[2].pos = (sfVector2f){140, 120};
    game->inventory[3].pos = (sfVector2f){140, 120};
    for (int i = 0; i != 4; i++)
        sfSprite_setPosition
        (game->inventory[i].sprite, game->inventory[i].pos);
    return (0);
}
