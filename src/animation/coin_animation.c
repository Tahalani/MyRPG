/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** coin_animation
*/

#include "my.h"
#include "rpg.h"
#include "game.h"

int initialize_coin_animation(game_t *game)
{
    for (int i = 0; i != 19; i++) {
        game->anime[i].sprite =
        init_sprite("ressources/map/coin.png",
        &game->anime[i].texture, 2.4, 2.4);
        position_sprite(game->anime[i].sprite, &game->anime[i].position, 0, 0);
        game->anime[i].rect = (sfIntRect){800, 600, 800, 600};
    }
    return (0);
}

int display_coin_animation(game_t *game)
{
    for (int i = 0; i != 19; i++) {
        sfRenderWindow_drawSprite
        (game->window.window, game->anime[i].sprite, NULL);
    }
    return 0;
}
