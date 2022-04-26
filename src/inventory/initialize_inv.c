/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** initialize_inv
*/

#include "my.h"
#include "rpg.h"

int initialize_story_object(game_t *game)
{
    game->inventory[0].sprite = init_sprite
    ("ressources/inventory/ring.png", game->inventory[0].texture, 1, 1);
    game->inventory[1].sprite = init_sprite
    ("ressources/inventory/inventory.png", game->inventory[1].texture, 1, 1);
    set_position_object(game);
    set_rect_inv(game);
    return (0);
}
