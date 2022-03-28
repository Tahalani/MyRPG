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
        game->player.position.y += 4;
        game->map.pos.y -= 4;
    }
    if (check == 'q') {
        game->player.position.x -= 4;
        game->map.pos.x += 4;
    }
    if (check == 'd') {
        game->player.position.x += 4;
        game->map.pos.x -= 4;
    }
    if (check == 'z') {
        game->player.position.y -= 4;
        game->map.pos.y += 4;
    }
    sfSprite_setPosition(game->map.sprite, game->map.pos);
    sfSprite_setPosition(game->player.sprite, game->player.position);
    return (0);
}

int rect_player(game_t *game, int top)
{
    game->player.rect.top = top;
    game->player.rect.left += 64;
    if (game->player.rect.left == 256)
        game->player.rect.left = 0;
    return (0);
}
