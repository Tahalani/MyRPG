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
    if (game->map[1].check == 1 && game->map[1].x_player == 28
    && game->map[1].y_player == 7)
        game->story_steps = 3;
    sfSprite_setTextureRect(game->inventory[1].sprite,
    game->inventory[1].rect);
    return (0);
}
