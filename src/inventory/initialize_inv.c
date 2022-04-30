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
    game->inventory[2].sprite = init_sprite
    ("ressources/inventory/charmander_inv.png",
    game->inventory[2].texture, 1, 1);
    game->inventory[3].sprite = init_sprite
    ("ressources/inventory/charizard_inv.png",
    game->inventory[3].texture, 1, 1);
    set_position_object(game);
    set_rect_inv(game);
    game->coins.text = make_test("ressources/menu/font.ttf", 400, 150, 30);
    sfText_setColor(game->coins.text, sfColor_fromRGB(205, 133, 63));
    game->coins.str = "O";
    sfText_setString(game->coins.text, game->coins.str);
    return (0);
}
