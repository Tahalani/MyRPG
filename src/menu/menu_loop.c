/*
** EPITECH PROJECT, 2022
** make_menu
** File description:
** make_menu
*/

#include "rpg.h"

int loop_menu(menu_t *menu, game_t *game, btn_t *btn)
{
    analyse_menu(menu, game, btn);
    if (game->status == 1)
        display_menu_settings(menu, game, btn);
    if (game->status == 2)
        display_menu(menu, game, btn);
    if (game->status == 3)
        display_menu_conf(menu, game, btn);
    return (0);
}
