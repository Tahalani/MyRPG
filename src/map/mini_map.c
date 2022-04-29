/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** mini_map
*/

#include "map.h"
#include "rpg.h"

int initialize_mini_map(game_t *game)
{
    game->mini_map.rect = (sfFloatRect){0, 0, 0.15, 0.2};
    return (0);
}

int mini_map_loop(game_t *game)
{
    if (game->status == 0) {
        sfView_setSize(game->mini_map.view, (sfVector2f){3200, 3250});
        sfView_setCenter(game->mini_map.view, (sfVector2f){1250, 550});
        sfView_setViewport(game->mini_map.view, game->mini_map.rect);
        sfRenderWindow_setView (game->window.window, game->mini_map.view);
    }
    return 0;
}

int display_mini_map(game_t *game)
{
    if (game->status == 0) {
        if (game->map[0].check == 1) {
            for (int i = 0; i <= 2; i++) {
                sfRenderWindow_drawSprite
                (game->window.window, game->side_map[i].sprite, NULL);
            }
            sfRenderWindow_drawSprite
            (game->window.window, game->background[0].sprite, NULL);
            display_pnj(game);
        }
        sfRenderWindow_drawSprite
        (game->window.window, game->player.sprite, NULL);
    }
    return (0);
}
