/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** position_inv
*/

#include "my.h"
#include "rpg.h"

int set_position_lamp(game_t *game)
{
    position_sprite
    (game->lamp[0].sprite, &game->lamp[0].position, -1000, -400);
    position_sprite
    (game->lamp[1].sprite, &game->lamp[1].position, -1000, 150);
    position_sprite
    (game->lamp[2].sprite, &game->lamp[2].position, -1221, -1173);
    position_sprite
    (game->lamp[3].sprite, &game->lamp[3].position, -1221, 1587);
    position_sprite
    (game->lamp[4].sprite, &game->lamp[4].position, 546, 484);
    position_sprite
    (game->lamp[5].sprite, &game->lamp[5].position, 546, 1366);
    return (0);
}

int set_position_object(game_t *game)
{
    set_position_lamp(game);
    game->inventory[0].pos = (sfVector2f){700, 900};
    game->inventory[1].pos = (sfVector2f){100, 100};
    game->inventory[2].pos = (sfVector2f){140, 120};
    game->inventory[3].pos = (sfVector2f){140, 120};
    game->inventory[4].pos = (sfVector2f){125, 262};
    game->inventory[5].pos = (sfVector2f){140, 210};
    for (int i = 0; i != 6; i++)
        sfSprite_setPosition
        (game->inventory[i].sprite, game->inventory[i].pos);
    return (0);
}
