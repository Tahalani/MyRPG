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
    int x_a = 150;
    int x_b = 225;
    int a = 0;
    int b = 1;

    while (a <= 19) {
        position_sprite(game->anime[a].sprite, &game->anime[a].position, 0, x_a);
        x_a += 160;
        a += 2;
        position_sprite(game->anime[b].sprite, &game->anime[b].position, 0, x_b);
        x_b += 160;
        b += 2;
    }
    return 0;
}

int initialize_coin_animation(game_t *game)
{
    for (int i = 0; i <= 19; i++) {
        game->anime[i].sprite =
        init_sprite("ressources/map/coin.png",
        &game->anime[i].texture, 0.4, 0.4);
        game->anime[i].rect = (sfIntRect){0, 0, 560, 560};
    }
    position_coin_animation(game);
    return (0);
}

static int anime_the_coin(game_t *game)
{
    int a = 0;
    int b = 19;

    for (int i = 0; i <= 50; i++) {
        game->anime[a].position =
        (sfVector2f){game->anime[a].position.x, game->anime[a].position.y + 2};
        sfSprite_setPosition(game->anime[a].sprite, game->anime[a].position);
        if (game->anime[a].position.y >= game->player.position.y + 500)
            a++;
        game->anime[b].position =
        (sfVector2f){game->anime[b].position.x, game->anime[b].position.y + 2};
        sfSprite_setPosition(game->anime[b].sprite, game->anime[b].position);
        if (game->anime[b].position.y >= game->player.position.y + 500)
            b--;
        if (a >= 9 || b <= 9)
            break;
    }
    return 0;
}

int display_coin_animation(game_t *game)
{
    anime_the_coin(game);
    for (int i = 0; i <= 19; i++) {
        sfRenderWindow_drawSprite
        (game->window.window, game->anime[i].sprite, NULL);
    }
    return 0;
}
