/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** position
*/

#include "my.h"
#include "rpg.h"

int test_plus(game_t *game, int operator, float *player)
{
    for (int count = 0; count != 8;) {
        game->player.second =
        sfTime_asSeconds(sfClock_getElapsedTime(game->player.clock));
        if (game->player.second >= 0.05 && operator == 1) {
            *player += 14;
            count++;
            sfClock_restart(game->player.clock);
        } else if (game->player.second >= 0.05 && operator == 0) {
            *player -= 14;
            count++;
            sfClock_restart(game->player.clock);
        }
        sfView_setCenter(game->map[0].view, game->player.position);
        sfRenderWindow_setView(game->window.window, game->map[0].view);
        sfSprite_setPosition(game->player.sprite, game->player.position);
        function_to_display(game);
    }
    return (0);
}

void run_player(game_t *game, char check)
{
    if (check == 's' &&
    game->map[0].main_map[game->map[0].y_player + 1][game->map[0].x_player] == '1') {
        game->map[0].y_player += 1;
        test_plus(game, 1, &game->player.position.y);
    }
    if (check == 'q' &&
    game->map[0].main_map[game->map[0].y_player][game->map[0].x_player - 1] == '1') {
        game->map[0].x_player -= 1;
        test_plus(game, 0, &game->player.position.x);
    }
    if (check == 'd' &&
    game->map[0].main_map[game->map[0].y_player][game->map[0].x_player + 1] == '1') {
        game->map[0].x_player += 1;
        test_plus(game, 1, &game->player.position.x);
    }
    if (check == 'z' &&
    game->map[0].main_map[game->map[0].y_player - 1][game->map[0].x_player] == '1') {
        game->map[0].y_player -= 1;
        test_plus(game, 0, &game->player.position.y);
    }
}

int rect_player(player_t *player, int top)
{
    player->rect.top = top;
    player->rect.left += 64;
    if (player->rect.left == 256)
        player->rect.left = 0;
    sfSprite_setTextureRect(player->sprite, player->rect);
    return (0);
}
