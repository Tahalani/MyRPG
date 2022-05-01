/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** display
*/

#include "my.h"
#include "rpg.h"

int check_number_map(game_t *game)
{
    if (game->map[3].check == 1)
        sfRenderWindow_drawSprite
        (game->window.window, game->background[3].sprite, NULL);
    if (game->map[0].check == 1) {
        for (int i = 0; i <= 2; i++)
            sfRenderWindow_drawSprite
            (game->window.window, game->side_map[i].sprite, NULL);
        sfRenderWindow_drawSprite
        (game->window.window, game->background[0].sprite, NULL);
        display_pnj(game);
    }
    if (game->map[1].check == 1)
        sfRenderWindow_drawSprite
        (game->window.window, game->background[1].sprite, NULL);
    if (game->map[2].check == 1)
        sfRenderWindow_drawSprite
        (game->window.window, game->background[2].sprite, NULL);
    return (0);
}

int function_to_display(game_t *game)
{
    sfRenderWindow_clear(game->window.window, sfBlack);
    if (game->status != 5) {
        check_number_map(game);
        inventory_loop(game);
        sfRenderWindow_drawSprite
        (game->window.window, game->player.sprite, NULL);
        if (game->map[0].check == 1) {
            for (int i = 0; i != 6; i++)
                sfRenderWindow_drawSprite
                (game->window.window, game->lamp[i].sprite, NULL);
            display_pnj(game);
        }
        if (game->status == 6)
            display_fight(game);
    } else if (game->status == 5)
        display_inventory(game);
    return (0);
}
