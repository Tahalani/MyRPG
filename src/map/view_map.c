/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** view_map
*/

#include "my.h"
#include "rpg.h"

int set_view_value(game_t *game)
{
    for (int i = 0; i <= 3; i++) {
        game->map[i].check = 0;
        game->map[i].view = sfView_create();
    }
    game->map[0].check = 1;
    game->mini_map.view = sfView_create();
    return (0);
}
