/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** my_rpg
*/

#include "my.h"
#include "rpg.h"
#include "game.h"

static int before_loop(game_t *game)
{
    initialize_value(game);
    player_before_loop(&game->player);
    position_sprite(game->map.sprite, &game->map.pos, -2700, -850);
    return (0);
}

static int in_loop(game_t *game)
{
    analyse_events(game);
    game->second_clock = sfTime_asSeconds(sfClock_getElapsedTime(game->clock));
    player_loop(&game->player);
    function_to_display(game);
    return (0);
}

int initialize_value(game_t *game)
{
    game->second_clock = 0.00;
    game->player.second = 0.00;
    game->clock = sfClock_create();
    game->player.clock = sfClock_create();
    game->player.rect = (sfIntRect){0, 192, 64, 64};
    game->window.width = 1920;
    game->window.height = 1080;
    game->window.window =
    initialize_window(game->window.width, game->window.height, 32);
    set_path_sprite(game);
    return (0);
}

int my_rpg(game_t *game)
{
    before_loop(game);
    while (sfRenderWindow_isOpen(game->window.window))
        in_loop(game);
    return (0);
}
