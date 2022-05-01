/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** loop
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
