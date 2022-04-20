/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** display
*/

#include "my.h"
#include "rpg.h"

int function_to_display(game_t *game)
{
    sfRenderWindow_clear(game->window.window, sfBlack);
    if (game->map[0].check == 1) {
        sfRenderWindow_drawSprite
        (game->window.window, game->side_map[0].sprite, NULL);
        sfRenderWindow_drawSprite
        (game->window.window, game->background[0].sprite, NULL);
        display_pnj(game);
    }
    if (game->map[1].check == 1) {
        sfRenderWindow_drawSprite
        (game->window.window, game->background[1].sprite, NULL);
        inventory_loop(game);
    }
    if (game->map[2].check == 1) {
        sfRenderWindow_drawSprite
        (game->window.window, game->background[2].sprite, NULL);
        inventory_loop(game);
    }
    sfRenderWindow_drawSprite(game->window.window, game->player.sprite, NULL);
    sfRenderWindow_display(game->window.window);
    return (0);
}
