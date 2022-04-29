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
    if (game->map[1].check == 1 && (game->story_steps == 1 ||
    game->story_steps == 2)) {
        sfRenderWindow_drawSprite
        (game->window.window, game->inventory[0].sprite, NULL);
        game->story_steps = 2;
    }
    return (0);
}

int display_inventory(game_t *game)
{
    sfRenderWindow_drawSprite
    (game->window.window, game->inventory[1].sprite, NULL);
    sfRenderWindow_drawText(game->window.window, game->coins.text, NULL);
    if (game->story_steps == 3) {
        game->inventory[0].scale = (sfVector2f){0.15, 0.15};
        game->inventory[0].pos = (sfVector2f){135, 200};
        sfSprite_setPosition
        (game->inventory[0].sprite, game->inventory[0].pos);
        sfSprite_setScale
        (game->inventory[0].sprite, game->inventory[0].scale);
        sfRenderWindow_drawSprite
        (game->window.window, game->inventory[0].sprite, NULL);
    }
    return (0);
}
