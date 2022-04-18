/*
** EPITECH PROJECT, 2022
** manage
** File description:
** manage
*/

#include "rpg.h"

int manage_click_menu_settings(menu_t *menu, game_t *game)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window.window);
    sfFloatRect shape;

    for (int i = 0; i != 6; ++i) {
        shape = sfRectangleShape_getGlobalBounds(menu->shape_btn[i].shape);
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 0)
            start_game(game, menu);
    }
    return (0);
}
