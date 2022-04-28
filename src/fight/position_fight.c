/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** position_fight
*/

#include "my.h"
#include "rpg.h"

int set_position_fight(game_t *game)
{
    game->player_fight.position = (sfVector2f){200, -2800};
    game->monster_fight.position = (sfVector2f){1200, -2500};
    game->arena_fight.position = (sfVector2f){123, -2916};
    sfSprite_setPosition(game->player_fight.sprite, game->player_fight.position);
    sfSprite_setPosition(game->monster_fight.sprite, game->monster_fight.position);
    sfSprite_setPosition(game->arena_fight.sprite, game->arena_fight.position);
    return (0);
}
