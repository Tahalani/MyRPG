/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** event
*/

#include "my.h"
#include "rpg.h"

int analyse_move_player(game_t *game)
{
    if (sfKeyboard_isKeyPressed(sfKeyS)) {
        rect_player(&game->player, 0);
        run_player(game, 's');
    }
    if (sfKeyboard_isKeyPressed(sfKeyQ)) {
        rect_player(&game->player, 64);
        run_player(game, 'q');
    }
    if (sfKeyboard_isKeyPressed(sfKeyD)) {
        rect_player(&game->player, 128);
        run_player(game, 'd');
    }
    if (sfKeyboard_isKeyPressed(sfKeyZ)) {
        rect_player(&game->player, 192);
        run_player(game, 'z');
    }
    sfSprite_setTextureRect(game->player.sprite, game->player.rect);
    return (0);
}

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
