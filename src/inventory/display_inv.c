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
    }
    return (0);
}

int display_condition_inv(game_t *game)
{
    if (game->level_player == 0)
        sfRenderWindow_drawSprite
        (game->window.window, game->inventory[2].sprite, NULL);
    if (game->level_player == 1)
        sfRenderWindow_drawSprite
        (game->window.window, game->inventory[3].sprite, NULL);
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

int display_inventory(game_t *game)
{
    sfRenderWindow_drawSprite
    (game->window.window, game->inventory[1].sprite, NULL);
    sfRenderWindow_drawText(game->window.window, game->coins.text, NULL);
    display_condition_inv(game);
    if (game->story_steps >= 5)
        sfRenderWindow_drawSprite
        (game->window.window, game->inventory[5].sprite, NULL);
    if (game->story_steps == 7)
        sfRenderWindow_drawSprite
        (game->window.window, game->inventory[4].sprite, NULL);
    return (0);
}
