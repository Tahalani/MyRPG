/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** init_pnj
*/

#include "my.h"
#include "rpg.h"

int pnj_create(game_t *game)
{
    game->pnj[0].sprite = init_sprite
    ("ressources/pnj/pnj_one.png", game->pnj[0].texture, 2.3, 2.3);
    game->pnj[1].sprite = init_sprite
    ("ressources/pnj/pnj_two.png", game->pnj[1].texture, 2.2, 2.2);
    game->pnj[2].sprite = init_sprite
    ("ressources/pnj/pnj_three.png", game->pnj[2].texture, 2.2, 2.2);
    game->pnj[3].sprite = init_sprite
    ("ressources/pnj/pnj_four.png", game->pnj[3].texture, 2.2, 2.2);
    return (0);
}
