/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** position
*/

#include "my.h"
#include "rpg.h"

int run_player(game_t *game, char check)
{
    if (check == 's' && game->map.main_map[game->map.y_player + 1][game->map.x_player] == '1') {
        game->map.y_player += 1;
        for (int count = 0; count != 8;) {
            game->player.second =
            sfTime_asSeconds(sfClock_getElapsedTime(game->player.clock));
            if (game->player.second >= 0.05) {
                game->player.position.y += 5.5;
                game->background.pos.y -= 10;
                sfSprite_setPosition(game->background.sprite, game->background.pos);
                sfSprite_setPosition(game->player.sprite, game->player.position);
                function_to_display(game);
                sfClock_restart(game->player.clock);
                count++;
            }
        }
    }
    if (check == 'q' && game->map.main_map[game->map.y_player][game->map.x_player - 1] == '1') {
        game->map.x_player -= 1;
        for (int count = 0; count != 8;) {
            game->player.second =
            sfTime_asSeconds(sfClock_getElapsedTime(game->player.clock));
            if (game->player.second >= 0.05) {
                game->player.position.x -= 5.5;
                game->background.pos.x += 10;
                sfSprite_setPosition(game->background.sprite, game->background.pos);
                sfSprite_setPosition(game->player.sprite, game->player.position);
                function_to_display(game);
                sfClock_restart(game->player.clock);
                count++;
            }
        }
    }
    if (check == 'd' && game->map.main_map[game->map.y_player][game->map.x_player + 1] == '1') {
        game->map.x_player += 1;
        for (int count = 0; count != 8;) {
            game->player.second =
            sfTime_asSeconds(sfClock_getElapsedTime(game->player.clock));
            if (game->player.second >= 0.05) {
                game->player.position.x += 5.5;
                game->background.pos.x -= 10;
                sfSprite_setPosition(game->background.sprite, game->background.pos);
                sfSprite_setPosition(game->player.sprite, game->player.position);
                function_to_display(game);
                sfClock_restart(game->player.clock);
                count++;
            }
        }
    }
    if (check == 'z' && game->map.main_map[game->map.y_player - 1][game->map.x_player] == '1') {
        game->map.y_player -= 1;
        for (int count = 0; count != 8;) {
            game->player.second =
            sfTime_asSeconds(sfClock_getElapsedTime(game->player.clock));
            if (game->player.second >= 0.05) {
                game->player.position.y -= 5.5;
                game->background.pos.y += 10;
                sfSprite_setPosition(game->background.sprite, game->background.pos);
                sfSprite_setPosition(game->player.sprite, game->player.position);
                function_to_display(game);
                sfClock_restart(game->player.clock);
                count++;
            }
        }
    }
    sfSprite_setPosition(game->background.sprite, game->background.pos);
    sfSprite_setPosition(game->player.sprite, game->player.position);
    return (0);
}

int rect_player(player_t *player, int top)
{
    player->rect.top = top;
    player->rect.left += 64;
    if (player->rect.left == 256)
        player->rect.left = 0;
    return (0);
}
