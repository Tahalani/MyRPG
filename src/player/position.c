/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** position
*/

#include "my.h"
#include "rpg.h"

int test_plus(game_t *game, int operator, float *player, float *bg)
{
    for (int count = 0; count != 8;) {
        game->player.second =
        sfTime_asSeconds(sfClock_getElapsedTime(game->player.clock));
        if (game->player.second >= 0.05 && operator == 1) {
            *player += 5.5;
            *bg -= 10;
            count++;
            sfClock_restart(game->player.clock);
        } else if (game->player.second >= 0.05 && operator == 0) {
            *player -= 5.5;
            *bg += 10;
            count++;
            sfClock_restart(game->player.clock);
        }
        sfSprite_setPosition
        (game->background.sprite, game->background.pos);
        sfSprite_setPosition(game->player.sprite, game->player.position);
        function_to_display(game);
    }
    return (0);
}

void run_player(game_t *game, char check)
{
    if (check == 's' &&
    game->map.main_map[game->map.y_player + 1][game->map.x_player] == '1') {
        game->map.y_player += 1;
        test_plus(game, 1, &game->player.position.y, &game->background.pos.y);
    }
    if (check == 'q' &&
    game->map.main_map[game->map.y_player][game->map.x_player - 1] == '1') {
        game->map.x_player -= 1;
        test_plus(game, 0, &game->player.position.x, &game->background.pos.x);
    }
    if (check == 'd' &&
    game->map.main_map[game->map.y_player][game->map.x_player + 1] == '1') {
        game->map.x_player += 1;
        test_plus(game, 1, &game->player.position.x, &game->background.pos.x);
    }
    if (check == 'z' &&
    game->map.main_map[game->map.y_player - 1][game->map.x_player] == '1') {
        game->map.y_player -= 1;
        test_plus(game, 0, &game->player.position.y, &game->background.pos.y);
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
