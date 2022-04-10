/*
** EPITECH PROJECT, 2022
** make_menu
** File description:
** make_menu
*/

#include "rpg.h"

int loop_menu(menu_t *menu, game_t *game)
{
    analyse_menu(menu, game);
    printf("%d\n", game->status);
    if (game->status == 2)
        display_menu(menu, game);
    if (game->status == 3) {
        display_menu_conf(menu, game);
    }
    return (0);
}
