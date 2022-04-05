/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** display
*/

#include "my.h"
#include "rpg.h"

int function_to_display(game_t *game)
{
    sfRenderWindow_clear(game->window.window, sfBlack);
    sfRenderWindow_drawSprite
    (game->window.window, game->background.sprite, NULL);
    sfRenderWindow_drawSprite(game->window.window, game->player.sprite, NULL);
    sfRenderWindow_display(game->window.window);
    return (0);
}
