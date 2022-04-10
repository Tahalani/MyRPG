/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include "my.h"
#include "rpg.h"
#include "menu.h"

int main(int ac, char **av)
{
    game_t game;
    menu_t menu;
    btn_t btn;

    if (ac <= 1 || my_strlen(av[1]) != 1) {
        my_putstr("Invalid Argument l'hmar\n");
        return (84);
    }
    game.player.check_player = my_getnbr(av[1]);
    my_rpg(&game, &menu, &btn);
    return (0);
}
