/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** path_pnj
*/

#include "my.h"
#include "rpg.h"

int path_script_pnj(game_t *game)
{
    init_pnj(game, 3, "src/conf/path_pnj_four.txt", 34);
    init_pnj(game, 4, "src/conf/path_pnj_five.txt", 31);
    init_pnj(game, 5, "src/conf/path_pnj_six.txt", 31);
    init_pnj(game, 6, "src/conf/path_pnj_seven.txt", 32);
    init_pnj(game, 7, "src/conf/path_pnj_eight.txt", 34);
    init_pnj(game, 8, "src/conf/path_pnj_nine.txt", 33);
    init_pnj(game, 9, "src/conf/path_pnj_ten.txt", 32);
    init_pnj(game, 10, "src/conf/path_pnj_eleven.txt", 33);
    return (0);
}

int pnj_create_two(game_t *game)
{
    game->pnj[5].sprite = init_sprite
    ("ressources/pnj/pnj_six.png", &game->pnj[5].texture, 2.2, 2.2);
    game->pnj[6].sprite = init_sprite
    ("ressources/pnj/pnj_seven.png", &game->pnj[6].texture, 2.2, 2.2);
    game->pnj[7].sprite = init_sprite
    ("ressources/pnj/pnj_eight.png", &game->pnj[7].texture, 2.2, 2.2);
    game->pnj[8].sprite = init_sprite
    ("ressources/pnj/pnj_nine.png", &game->pnj[8].texture, 2.2, 2.2);
    game->pnj[9].sprite = init_sprite
    ("ressources/pnj/pnj_ten.png", &game->pnj[9].texture, 2.2, 2.2);
    game->pnj[10].sprite = init_sprite
    ("ressources/pnj/pnj_eleven.png", &game->pnj[10].texture, 2.2, 2.2);
    return (0);
}
