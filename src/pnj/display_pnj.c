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
    for (int i = 0; i != 12; i++) {
        if (i != 4)
            sfRenderWindow_drawSprite
            (game->window.window, game->pnj[i].sprite, NULL);
    }
    if (game->story_steps < 7)
        sfRenderWindow_drawSprite
        (game->window.window, game->pnj[4].sprite, NULL);
    condition_display_speech(game);
    return (0);
}
