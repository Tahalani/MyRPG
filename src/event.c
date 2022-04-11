/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** event
*/

#include "my.h"
#include "rpg.h"

int analyse_events(game_t *game)
{
    while (sfRenderWindow_pollEvent(game->window.window, &game->event.event)) {
        if (game->event.event.type == sfEvtClosed
        || sfKeyboard_isKeyPressed(sfKeyEscape))
            sfRenderWindow_close(game->window.window);
        analyse_move_player(game);
    }
    return (0);
}
