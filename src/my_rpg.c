/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** my_rpg
*/

#include "my.h"
#include "rpg.h"
#include "game.h"
#include "menu.h"

static int before_loop(game_t *game)
{
    initialize_value(game);
    player_before_loop(&game->player);
    position_sprite
    (game->background.sprite, &game->background.pos, 0, 0);
    return (0);
}

static int in_loop(game_t *game)
{
    game->second_clock = sfTime_asSeconds(sfClock_getElapsedTime(game->clock));
    player_loop(&game->player);
    game->map.view = sfView_create();
    sfView_setSize(game->map.view, game->map.view_size);
    analyse_events(game);
    function_to_display(game);
    return (0);
}

int initialize_value(game_t *game)
{
    game->map.main_map = map_create(game);
    game->map.x_player = 14;
    game->map.y_player = 29;
    game->second_clock = 0.00;
    game->player.second = 0.00;
    game->clock = sfClock_create();
    game->player.clock = sfClock_create();
    game->player.rect = (sfIntRect){0, 192, 64, 64};
    game->map.view_size = (sfVector2f){1745, 981};
    game->window.width = 1920;
    game->window.height = 1080;
    game->status = 1;
    game->window.window =
    initialize_window(game->window.width, game->window.height, 32);
    set_path_sprite(game);
    return (0);
}

int my_rpg(game_t *game, menu_t *menu)
{
    before_loop(game);
    while (sfRenderWindow_isOpen(game->window.window)) {
        if (game->status == 1)
            loop_menu(menu, game);
        if (game->status == 0)
            in_loop(game);
    }
    return (0);
}
