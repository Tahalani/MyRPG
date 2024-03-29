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

int initialize_story_value(game_t *game)
{
    game->exp_player.count = 0;
    game->story_steps = 0;
    game->coins.count = 0;
    game->level_player = 0;
    return (0);
}

int initialize_value(game_t *game)
{
    game->check_coin = 0;
    game->exp_player.text =
    make_test("ressources/menu/font.ttf", 310, 135, 50);
    game->exp_player.str = "O";
    sfText_setString(game->exp_player.text, game->exp_player.str);
    game->status = 2;
    set_value_window(game);
    initialize_story_value(game);
    set_music_value(game);
    initialize_mini_map(game);
    set_view_value(game);
    return (0);
}

int destroy_all(menu_t *menu, btn_t *btn, game_t *game)
{
    sfRenderWindow_destroy(game->window.window);
    destroy_all_btn(btn);
    destroy_all_game(game);
    destroy_all_inventory(game->inventory);
    destroy_all_menu(menu);
    destroy_all_pnj(game->pnj, game->speech);
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
    destroy_all(menu, btn, game);
    destroy_music(game, menu);
    return (0);
}
