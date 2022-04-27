/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** rect
*/

#include "my.h"
#include "rpg.h"

int check_map(game_t *game)
{
    int i = 0;

    if (game->map[3].check == 1)
        i = 3;
    if (game->map[2].check == 1)
        i = 2;
    if (game->map[1].check == 1)
        i = 1;
    if (game->map[0].check == 1)
        i = 0;
    return i;
}

int analyse_move_player(game_t *game)
{
    int i = check_map(game);

    if (sfKeyboard_isKeyPressed(sfKeyS)) {
        rect_player(&game->player, 0);
        run_player(game, 's', i);
    }
    if (sfKeyboard_isKeyPressed(sfKeyQ)) {
        rect_player(&game->player, 64);
        run_player(game, 'q', i);
    }
    if (sfKeyboard_isKeyPressed(sfKeyD)) {
        rect_player(&game->player, 128);
        run_player(game, 'd', i);
    }
    if (sfKeyboard_isKeyPressed(sfKeyZ)) {
        rect_player(&game->player, 192);
        run_player(game, 'z', i);
    }
    sfSprite_setTextureRect(game->player.sprite, game->player.rect);
    return 0;
}
