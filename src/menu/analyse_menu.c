/*
** EPITECH PROJECT, 2022
** analyse_menu
** File description:
** analyse_menu
*/

#include "rpg.h"

int analyse_click(menu_t *menu, game_t *game, btn_t *btn)
{
    if (game->event.event.type == sfEvtMouseButtonPressed &&
        game->status == 2)
        manage_click_menu(menu, game, btn);
    if (game->event.event.type == sfEvtMouseButtonPressed &&
        game->status == 1)
        manage_click_menu_settings(menu, game, btn);
    if (game->event.event.type == sfEvtMouseButtonPressed &&
        game->status == 3)
        manage_click_menu_conf(menu, game, btn);
    if (game->event.event.type == sfEvtMouseButtonPressed &&
        game->status == 4)
        manage_click_menu_pause(menu, game, btn);
    return (0);
}

int analyse_key(menu_t *menu, game_t *game, btn_t *btn)
{
    if (game->event.event.type == sfEvtClosed
    || sfKeyboard_isKeyPressed(sfKeyEscape))
        sfRenderWindow_close(game->window.window);
    if (sfKeyboard_isKeyPressed(sfKeyEnter) && game->status != 4)
        start_game(game, menu, btn);
    if (game->status < 3 && sfKeyboard_isKeyPressed(sfKeyRight)) {
        game->status++;
        menu->sound.page_menu = music("ressources/music/menu_page.ogg", 0);
    } else if (game->status != 4 &&
        game->status > 1 && sfKeyboard_isKeyPressed(sfKeyLeft)) {
        game->status--;
        menu->sound.page_menu = music("ressources/music/menu_page.ogg", 0);
    }
    if (sfKeyboard_isKeyPressed(sfKeyP) && game->status == 4) {
        game->status = 0;
        position_sprite
        (game->background[4].sprite, &game->background[4].pos, 0, 0);
    }
    return (0);
}

int analyse_menu(menu_t *menu, game_t *game, btn_t *btn)
{
    while (sfRenderWindow_pollEvent(game->window.window, &game->event.event)) {
        analyse_click(menu, game, btn);
        analyse_key(menu, game, btn);
    }
    return (0);
}
