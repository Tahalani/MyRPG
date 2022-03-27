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
    game->clock = sfClock_create();
    game->player.rect = (sfIntRect){0, 0, 64, 64};
    game->window.width = 1920;
    game->window.height = 1080;
    game->window.window =
    initialize_window(game->window.width, game->window.height, 32);
    set_path_sprite(game);
    return (0);
}

int my_rpg(game_t *game)
{
    initialize_value(game);
    while (sfRenderWindow_isOpen(game->window.window)) {
        analyse_events(game);
        player_loop(game);
        function_to_display(game);
    }
    return (0);
}
