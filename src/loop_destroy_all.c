/*
** EPITECH PROJECT, 2022
** destroy_all
** File description:
** destroy_all
*/

#include "rpg.h"

void loop_for_destroy(game_t *game, menu_t *menu)
{
    for (int i = 0; i <= 3; i++) {
        sfSprite_destroy(game->speech[i].sprite);
        sfTexture_destroy(game->speech[i].texture);
    }
    for (int i = 0; i <= 10; i++) {
        sfSprite_destroy(game->pnj[i].sprite);
        sfTexture_destroy(game->pnj[i].texture);
    }
    for (int i = 0; i <= 3; i++) {
        sfSprite_destroy(menu->bg_skin[i].sprite);
        sfTexture_destroy(menu->bg_skin[i].texture);
    }
    for (int i = 0; i <= 2; i++) {
        sfSprite_destroy(menu->bg_square[i].sprite);
        sfTexture_destroy(menu->bg_square[i].texture);
    }
    for (int i = 0; i <= 4; i++) {
        sfSprite_destroy(game->inventory.object[i].sprite);
        sfTexture_destroy(game->inventory.object[i].texture);
    }
}
