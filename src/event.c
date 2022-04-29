/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** event
*/

#include "my.h"
#include "rpg.h"

int analyse_events_pause(game_t *game)
{
    while (sfRenderWindow_pollEvent(game->window.window, &game->event.event)) {
        if (game->event.event.type == sfEvtClosed
        || sfKeyboard_isKeyPressed(sfKeyEscape))
            sfRenderWindow_close(game->window.window);
        if (game->status == 5 && sfKeyboard_isKeyPressed(sfKeyTab))
            game->status = 0;
    }
    return (0);
}

int analyse_events(game_t *game)
{
    while (sfRenderWindow_pollEvent(game->window.window, &game->event.event)) {
        if (game->event.event.type == sfEvtClosed
        || sfKeyboard_isKeyPressed(sfKeyEscape))
            sfRenderWindow_close(game->window.window);
        if (sfKeyboard_isKeyPressed(sfKeyP)) {
            game->status = 4;
            game->sound.page_menu = music("ressources/music/menu_page.ogg", 0);
        }
        analyse_move_player(game);
        if (sfKeyboard_isKeyPressed(sfKeyTab))
            game->status = 5;
    }
    return (0);
}
