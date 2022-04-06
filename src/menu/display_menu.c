/*
** EPITECH PROJECT, 2022
** display_menu
** File description:
** display_menu
*/

#include "rpg.h"

int display_menu(menu_t *menu, game_t *game)
{
    sfRenderWindow_clear(game->window.window, sfBlack);
    sfRenderWindow_drawSprite
    (game->window.window, game->background.sprite, NULL);
    sfRenderWindow_display(game->window.window);
    return (0);
}
