/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** speech_pnj
*/

#include "my.h"
#include "rpg.h"

int condition_display_speech(game_t *game)
{
    if (game->map->x_player == 22 && game->map->y_player == 19) {
        sfMusic_play(game->sound.dialogue);
        sfRenderWindow_drawSprite
        (game->window.window, game->speech[0].sprite, NULL);
    }
    if (game->map->x_player == 30 && game->map->y_player == 30) {
        sfMusic_play(game->sound.dialogue);
        sfRenderWindow_drawSprite
        (game->window.window, game->speech[1].sprite, NULL);
    }
    if (game->map->x_player == 54 && game->map->y_player == 45) {
        sfMusic_play(game->sound.dialogue);
        sfRenderWindow_drawSprite
        (game->window.window, game->speech[2].sprite, NULL);
    }
    return (0);
}
