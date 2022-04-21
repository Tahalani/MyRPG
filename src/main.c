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
    game_t *game = malloc(sizeof(game_t));
    menu_t *menu = malloc(sizeof(menu_t));
    btn_t btn;

    (void) av;
    if (ac > 1) {
        my_putstr("Invalid Argument l'hmar\n");
        return (84);
    }
    my_rpg(game, menu, &btn);
    return (0);
}
