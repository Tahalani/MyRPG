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

static int display_pnj_mini_map(game_t *game)
{
    for (int i = 0; i != 11; i++) {
        sfRenderWindow_drawSprite
        (game->window.window, game->pnj[i].sprite, NULL);
    }
    return (0);
}

int display_mini_map(game_t *game)
{
    if (game->check_load == 0 && game->status == 0) {
        if (game->map[0].check == 1) {
            for (int i = 0; i <= 2; i++) {
                sfRenderWindow_drawSprite
                (game->window.window, game->side_map[i].sprite, NULL);
            }
            sfRenderWindow_drawSprite
            (game->window.window, game->background[0].sprite, NULL);
            display_pnj_mini_map(game);
            sfRenderWindow_drawSprite
            (game->window.window, game->map_utils[0].sprite, NULL);
        }
    }
    return (0);
}

int init_mini_map_utils(game_t *game)
{
    game->map_utils[0].sprite =
    init_sprite("ressources/map/epingle.png",
    game->map_utils[0].texture, 1, 1);
    position_sprite
    (game->map_utils[0].sprite, &game->map_utils[0].pos,
    game->map_utils->pos.x, game->map_utils->pos.y);
    return (0);
}
