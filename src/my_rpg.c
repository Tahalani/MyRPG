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

int before_loop(game_t *game, menu_t *menu, btn_t *btn)
{
    initialize_value(game);
    initialize_map(game);
    initialize_menu(menu, btn, game);
    initialize_pnj(game);
    initialize_fight(game);
    initialize_story_object(game);
    return (0);
}

void check_status_game(game_t *game)
{
    if (game->status == 5) {
        analyse_events_pause(game);
        inventory_loop(game);
    }
    if (game->status == 0) {
        player_loop(&game->player);
        acces_to_church_map(game);
        acces_to_top_map(game);
        acces_to_castle_map(game);
        pnj_loop(game);
        analyse_events(game);
        map_loop(game);
        acces_fight(game);
    }
    if (game->status == 6) {
        analyse_events_pause(game);
        fight_loop(game);
        sfRenderWindow_drawSprite
        (game->window.window, game->arena_fight.sprite, NULL);
    }
}

int in_loop(game_t *game)
{
    sfRenderWindow_clear(game->window.window, sfBlack);
    check_status_game(game);
    function_to_display(game);
    mini_map_loop(game);
    display_mini_map(game);
    sfRenderWindow_display(game->window.window);
    return (0);
}

int initialize_story_value(game_t *game)
{
    game->story_steps = 0;
    game->coins.count = 0;
    return (0);
}

int initialize_value(game_t *game)
{
    game->status = 2;
    set_value_window(game);
    initialize_story_value(game);
    set_music_value(game);
    initialize_mini_map(game);
    set_view_value(game);
    return (0);
}

int my_rpg(game_t *game, menu_t *menu, btn_t *btn)
{
    before_loop(game, menu, btn);
    game->window.window =
    initialize_window(game->window.width, game->window.height, 30);
    while (sfRenderWindow_isOpen(game->window.window)) {
        if (game->status == 0 || game->status == 5 || game->status == 6)
            in_loop(game);
        else if (game->status != 0)
            loop_menu(menu, game, btn);
    }
    return (0);
}
