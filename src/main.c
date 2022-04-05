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
    game.player.check_player = my_getnbr(av[1]);
    my_rpg(&game);
    return (0);
}
