/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include "my.h"
#include "rpg.h"

int main(int ac, char **av)
{
    game_t game;

    (void)ac;
    if (ac <= 1 || my_strlen(av[1]) != 1) {
        my_putstr("Invalid Argument l'hmar\n");
        return (84);
    }
    game.player.check_player = my_getnbr(av[1]);
    my_rpg(&game);
    return (0);
}
