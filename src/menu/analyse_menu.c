/*
** EPITECH PROJECT, 2022
** analyse_menu
** File description:
** analyse_menu
*/

#include "rpg.h"

int analyse_menu(menu_t *menu, game_t *game)
{
    while (sfRenderWindow_pollEvent(game->window.window, &game->event.event)) {
        if (game->event.event.type == sfEvtClosed
        || sfKeyboard_isKeyPressed(sfKeyEscape))
            sfRenderWindow_close(game->window.window);
        if (sfKeyboard_isKeyPressed(sfKeyEnter))
            start_game(game, menu);
        if (game->event.event.type == sfEvtMouseButtonPressed &&
            game->status == 2)
            manage_click_menu(menu, game);
        if (game->event.event.type == sfEvtMouseButtonPressed &&
            game->status == 3)
            manage_click_menu_conf(menu, game);
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
