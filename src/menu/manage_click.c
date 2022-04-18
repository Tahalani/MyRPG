/*
** EPITECH PROJECT, 2022
** manage
** File description:
** manage
*/

#include "rpg.h"

int manage_click_menu(menu_t *menu, game_t *game)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window.window);
    sfFloatRect shape;

    for (int i = 0; i != 6; ++i) {
        shape = sfRectangleShape_getGlobalBounds(menu->shape_btn[i].shape);
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 0)
            start_game(game, menu);
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 1)
            sfRenderWindow_close(game->window.window);
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 2) {
            music("ressources/music/menu_page.ogg", 0);
            game->status--;
        }
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 3) {
            music("ressources/music/menu_page.ogg", 0);
            game->status++;
        }
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 4
            && menu->sound.status == 0) {
            sfMusic_pause(menu->sound.menu);
            menu->sound.status = 1;
        } else if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 4
            && menu->sound.status == 1) {
            sfMusic_play(menu->sound.menu);
            menu->sound.status = 0;
        }
    }
    return (0);
}
