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
    if (game->map[1].check == 1 && (game->story_steps == 1 || game->story_steps == 2)) {
        sfRenderWindow_drawSprite
        (game->window.window, game->inventory.object[0].sprite, NULL);
        game->story_steps = 2;
    }
    return (0);
}

int display_inventory(game_t *game)
{
    sfRenderWindow_drawSprite
    (game->window.window, game->inventory.object[1].sprite, NULL);
    return (0);
}
