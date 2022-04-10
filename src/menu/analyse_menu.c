/*
** EPITECH PROJECT, 2022
** analyse_menu
** File description:
** analyse_menu
*/

#include "rpg.h"

int analyse_menu(menu_t *menu, game_t *game, btn_t *btn)
{
    while (sfRenderWindow_pollEvent(game->window.window, &game->event.event)) {
        if (game->event.event.type == sfEvtClosed
        || sfKeyboard_isKeyPressed(sfKeyEscape))
            sfRenderWindow_close(game->window.window);
        if (sfKeyboard_isKeyPressed(sfKeyEnter))
            start_game(game);
        if (game->status < 3 && sfKeyboard_isKeyPressed(sfKeyRight))
            game->status++;
        if (game->status > 1 && sfKeyboard_isKeyPressed(sfKeyLeft))
            game->status--;
    }
    return (0);
}
