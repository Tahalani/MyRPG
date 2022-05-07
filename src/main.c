/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include "my.h"
#include "rpg.h"
#include "menu.h"

void display_help(void)
{
    my_putstr("===== WELCOME TO US RPG =====\n");
    my_putstr("========== OPTION =========\n");
    my_putstr("KEY: you can choose the key in the settings menu\n");
    my_putstr("VOLUM: you can set the volum in the settings menu\n");
    my_putstr("FPS: you can also choice the fps 30/45 or 60\n");
    my_putstr("\n============ CONFIG =========\n");
    my_putstr("SKIN: you can chosse the skin\n");
    my_putstr("MAP: you can also chosse the map: light or dark\n");
    my_putstr("\n============ GAME =========\n");
    my_putstr("GOAL: you have to beat the bad guy\n");
    my_putstr("with your pokemon for that you must\n");
    my_putstr("first, step up your level and your pokemon\n");
    my_putstr("with the different quest in the world\n");
    my_putstr("after what you can beat that bad pokemon trainer.\n");
    my_putstr("in the game you have an inventory with 'TAB' and\n");
    my_putstr("a pause menu with 'P'!\n\n");
    my_putstr("==== ENJOY && GOOD LUCK ====\n");
}

int main(int ac, char **av, char **env)
{
    game_t *game = malloc(sizeof(game_t));
    menu_t *menu = malloc(sizeof(menu_t));
    btn_t btn;

    if (env[0] == NULL)
        return (84);
    if (game == NULL || menu == NULL)
        return (84);
    if (ac == 2 && my_strcmp("-h", av[1]) == 0 && my_strlen(av[1]) == 2) {
        display_help();
        return (0);
    }
    if (ac > 1) {
        my_putstr("Invalid Argument l'hmar\n");
        return (84);
    }
    my_rpg(game, menu, &btn);
    free(game);
    free(menu);
    return (0);
}
