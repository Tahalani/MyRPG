/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** rect
*/

#include "my.h"
#include "rpg.h"

int analyse_move_player(game_t *game)
{
    for (int i = 0; i != 1; i++) {
        if (sfKeyboard_isKeyPressed(sfKeyS)) {
            rect_player(&game->player, 0);
            i = run_player(game, 's', i);
        }
        if (sfKeyboard_isKeyPressed(sfKeyQ)) {
            rect_player(&game->player, 64);
            i = run_player(game, 'q', i);
        }
        if (sfKeyboard_isKeyPressed(sfKeyD)) {
            rect_player(&game->player, 128);
            i = run_player(game, 'd', i);
        }
        if (sfKeyboard_isKeyPressed(sfKeyZ)) {
            rect_player(&game->player, 192);
            i = run_player(game, 'z', i);
        }
        sfSprite_setTextureRect(game->player.sprite, game->player.rect);
    }
    return (0);
}
