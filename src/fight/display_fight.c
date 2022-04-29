/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** display_fight
*/

#include "my.h"
#include "rpg.h"

int display_fight(game_t *game)
{
    sfRenderWindow_drawSprite
    (game->window.window, game->arena_fight.sprite, NULL);
    sfRenderWindow_drawSprite
    (game->window.window, game->player_fight.sprite, NULL);
    sfRenderWindow_drawSprite
    (game->window.window, game->monster_fight.sprite, NULL);
    return (0);
}
