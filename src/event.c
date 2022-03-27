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
        move_rect(&game->player.rect, 64, 256, 0);
        run_player(game->player.sprite, &game->player.position, 's');
    }
    if (sfKeyboard_isKeyPressed(sfKeyQ)) {
        move_rect(&game->player.rect, 64, 256, 64);
        run_player(game->player.sprite, &game->player.position, 'q');
    }
    if (sfKeyboard_isKeyPressed(sfKeyD)) {
        move_rect(&game->player.rect, 64, 256, 128);
            run_player(game->player.sprite, &game->player.position, 'd');
    }
    if (sfKeyboard_isKeyPressed(sfKeyZ)) {
        move_rect(&game->player.rect, 64, 256, 192);
        run_player(game->player.sprite, &game->player.position, 'z');
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
