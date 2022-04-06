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
    display_menu(menu, game);
    return (0);
}
