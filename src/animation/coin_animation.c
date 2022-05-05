/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** coin_animation
*/

#include "my.h"
#include "rpg.h"
#include "game.h"

int position_coin_animation(game_t *game)
{
    int x = 50;

    for (int i = 0; i <= 20; i++) {
        position_sprite(game->anime[i].sprite, &game->anime[i].position, 0, x);
        x += 500;
    }
    return 0;
}

int initialize_coin_animation(game_t *game)
{
    for (int i = 0; i <= 20; i++) {
        game->anime[i].sprite =
        init_sprite("ressources/map/coin.png",
        &game->anime[i].texture, 1, 1);
        game->anime[i].rect = (sfIntRect){0, 0, 560, 560};
    }
    position_coin_animation(game);
    return (0);
}

int display_coin_animation(game_t *game)
{
    for (int i = 0; i <= 20; i++) {
        sfRenderWindow_drawSprite
        (game->window.window, game->anime[i].sprite, NULL);
    }
    return 0;
}
