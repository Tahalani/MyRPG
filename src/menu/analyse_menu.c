/*
** EPITECH PROJECT, 2022
** analyse_menu
** File description:
** analyse_menu
*/

#include "rpg.h"

int manage_click_menu(menu_t *menu, game_t *game, btn_t *btn)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window.window);
    sfFloatRect shape;

    for (int i = 0; i != 6; ++i) {
        shape = sfRectangleShape_getGlobalBounds(menu->shape_btn[i].shape);
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 0)
            start_game(game, menu);
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 1)
            sfRenderWindow_close(game->window.window);
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 2)
            game->status--;
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 3)
            game->status++;
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 4)
            sfMusic_pause(menu->sound.menu);
    }
    return (0);
}

int analyse_menu(menu_t *menu, game_t *game, btn_t *btn)
{
    while (sfRenderWindow_pollEvent(game->window.window, &game->event.event)) {
        if (game->event.event.type == sfEvtClosed
        || sfKeyboard_isKeyPressed(sfKeyEscape))
            sfRenderWindow_close(game->window.window);
        if (sfKeyboard_isKeyPressed(sfKeyEnter))
            start_game(game, menu);
        if (game->event.event.type == sfEvtMouseButtonPressed &&
            game->status == 2)
            manage_click_menu(menu, game, btn);
        if (game->status < 3 && sfKeyboard_isKeyPressed(sfKeyRight)) {
            game->status++;
            menu->sound.page_menu = music("ressources/music/menu_page.ogg", 0);
        } else if (game->status > 1 && sfKeyboard_isKeyPressed(sfKeyLeft)) {
            game->status--;
            menu->sound.page_menu = music("ressources/music/menu_page.ogg", 0);
        }
    }
    return (0);
}
