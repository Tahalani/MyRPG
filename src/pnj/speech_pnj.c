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
    if (game->map->x_player == 22 && game->map->y_player == 19 &&
    game->story_steps == 0) {
        sfRenderWindow_drawSprite
        (game->window.window, game->speech[0].sprite, NULL);
        // game->story_steps = 1;
    }
    if (game->map->x_player == 22 && game->map->y_player == 19 &&
    game->story_steps == 1) {
        sfRenderWindow_drawSprite
        (game->window.window, game->speech[3].sprite, NULL);
        game->story_steps = 2;
    }
    if (game->map->x_player == 30 && game->map->y_player == 30)
        sfRenderWindow_drawSprite
        (game->window.window, game->speech[1].sprite, NULL);
    if (game->map->x_player == 54 && game->map->y_player == 45)
        sfRenderWindow_drawSprite
        (game->window.window, game->speech[2].sprite, NULL);
    if ((game->map->x_player == 22 && game->map->y_player == 20) ||
    (game->map->x_player == 30 && game->map->y_player == 31) || 
    (game->map->x_player == 54 && game->map->y_player == 46))
        sfMusic_play(game->sound.dialogue);
    return (0);
}
