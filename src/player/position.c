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
    if (check == 's') {
        game->player.position.y += 3;
        game->map.pos.y -= 15;
    }
    if (check == 'q') {
        game->player.position.x -= 3;
        game->map.pos.x += 15;
    }
    if (check == 'd') {
        game->player.position.x += 3;
        game->map.pos.x -= 15;
    }
    if (check == 'z') {
        game->player.position.y -= 3;
        game->map.pos.y += 15;
    }
    sfSprite_setPosition(game->map.sprite, game->map.pos);
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
