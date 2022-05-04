/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** speech_pnj
*/

#include "my.h"
#include "rpg.h"

int condition_display_speech_two(game_t *game)
{
    if ((game->map->x_player == 30 && game->map->y_player == 30) &&
    game->story_steps < 5)
        sfRenderWindow_drawSprite
        (game->window.window, game->speech[1].sprite, NULL);
    if (game->map->x_player == 54 && game->map->y_player == 45
    && (game->story_steps == 4 || game->story_steps == 5)) {
        game->story_steps = 5;
        sfRenderWindow_drawSprite
        (game->window.window, game->speech[2].sprite, NULL);
        game->coins.count = 0;
        sfText_setString(game->coins.text, int_to_char(game->coins.count));
    }
    if ((game->map->x_player == 22 && game->map->y_player == 20) ||
    (game->map->x_player == 30 && game->map->y_player == 31) ||
    (game->map->x_player == 54 && game->map->y_player == 46))
        sfMusic_play(game->sound.dialogue);
    return (0);
}

int condition_display_speech_three(game_t *game)
{
    if ((game->map->x_player == 30 && game->map->y_player == 30) &&
    (game->story_steps == 8 || game->story_steps == 9)) {
        sfRenderWindow_drawSprite
        (game->window.window, game->speech[4].sprite, NULL);
        game->story_steps = 9;
    }
    if ((game->map->x_player == 11 && game->map->y_player == 49) &&
    (game->story_steps == 5 || game->story_steps == 6)) {
        sfRenderWindow_drawSprite
        (game->window.window, game->speech[6].sprite, NULL);
        game->story_steps = 6;
        sfMusic_play(game->sound.pika);
    }
    if ((game->map->x_player == 11 && game->map->y_player == 49) &&
    (game->story_steps == 7 || game->story_steps == 8)) {
        sfRenderWindow_drawSprite
        (game->window.window, game->speech[7].sprite, NULL);
        game->story_steps = 8;
        game->coins.count = 100;
        sfText_setString(game->coins.text, int_to_char(game->coins.count));
    }
    return (0);
}

int condition_display_speech_four(game_t *game)
{
    // if ((game->map->x_player == 30 && game->map->y_player == 30) &&
    // (game->story_steps == 9 || game->story_steps == 10)) {
    //     sfRenderWindow_drawSprite
    //     (game->window.window, game->speech[5].sprite, NULL);
        //game->story_steps = 10;
    //}
    return (0);
}

int condition_display_speech(game_t *game)
{
    if ((game->map->x_player == 22 && game->map->y_player == 19) &&
    (game->story_steps == 0 || game->story_steps == 1)) {
        sfRenderWindow_drawSprite
        (game->window.window, game->speech[0].sprite, NULL);
        game->story_steps = 1;
    }
    if ((game->map->x_player == 22 && game->map->y_player == 19) &&
    (game->story_steps == 3 || game->story_steps == 4)) {
        sfRenderWindow_drawSprite
        (game->window.window, game->speech[3].sprite, NULL);
        game->story_steps = 4;
        game->coins.count = 50;
        sfText_setString(game->coins.text, int_to_char(game->coins.count));
    }
    condition_display_speech_three(game);
    condition_display_speech_four(game);
    condition_display_speech_two(game);
    return (0);
}
