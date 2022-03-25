/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** my_rpg
*/

#include "my.h"
#include "rpg.h"

int initialize_value(game_t *game)
{
    game->window.width = 1920;
    game->window.height = 1080;
    game->window.window =
    initialize_window(game->window.width, game->window.height, 32);
    return (0);
}

int my_rpg(game_t *game)
{
    initialize_value(game);
    while (sfRenderWindow_isOpen(game->window.window)) {
        analyse_events(game);
        function_to_display(game);
    }
    return (0);
}
