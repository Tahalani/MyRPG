/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** pnj
*/

#include "my.h"
#include "rpg.h"

int display_pnj(game_t *game)
{
    for (int i = 0; i != 9; i++) {
        sfRenderWindow_drawSprite
        (game->window.window, game->pnj[i].sprite, NULL);
    }
    condition_display_speech(game);
    return (0);
}
