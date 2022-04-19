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

static int before_loop(game_t *game, menu_t *menu, btn_t *btn)
{
    initialize_value(game);
    initialize_map(game);
    initialize_menu(menu, btn);
    initialize_player(&game->player);
    initialize_pnj(game);
    return (0);
}

static int in_loop(game_t *game)
{
    game->second_clock = sfTime_asSeconds(sfClock_getElapsedTime(game->clock));
    player_loop(&game->player);
    acces_to_church_map(game);
    pnj_loop(game);
    analyse_events(game);
    map_loop(game);
    function_to_display(game);
    return (0);
}

int initialize_value(game_t *game)
{
    game->second_clock = 0.00;
    game->clock = sfClock_create();
    game->status = 2;
    game->window.width = 1920;
    game->window.height = 1080;
    game->window.window =
    initialize_window(game->window.width, game->window.height, 32);
    for (int i = 0; i <= 1; i++)
        game->map[i].check = 0;
    game->map[0].check = 1;
    return (0);
}

int my_rpg(game_t *game, menu_t *menu, btn_t *btn)
{
    before_loop(game, menu, btn);
    while (sfRenderWindow_isOpen(game->window.window)) {
        if (game->status == 0)
            in_loop(game);
        else if (game->status != 0)
            loop_menu(menu, game, btn);
    }
    return (0);
}
