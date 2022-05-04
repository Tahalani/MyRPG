/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** position_fight
*/

#include "my.h"
#include "rpg.h"
#include "game.h"

int set_position_fight(game_t *game)
{
    game->fight_status[0].position = (sfVector2f){120, -2960};
    game->player_fight.position = (sfVector2f){200, -2800};
    game->monster_fight.position = (sfVector2f){1200, -2500};
    game->arena_fight.position = (sfVector2f){123, -2916};
    game->life[0].position = (sfVector2f){150, -2950};
    game->life[1].position = (sfVector2f){2000, -2745};
    game->life[2].position = (sfVector2f){1000, -2900};
    sfSprite_setPosition
    (game->player_fight.sprite, game->player_fight.position);
    sfSprite_setPosition
    (game->monster_fight.sprite, game->monster_fight.position);
    sfSprite_setPosition
    (game->arena_fight.sprite, game->arena_fight.position);
    sfSprite_setPosition
    (game->fight_status[0].sprite, game->fight_status[0].position);
    sfSprite_setPosition(game->life[0].sprite, game->life[0].position);
    sfSprite_setPosition(game->life[1].sprite, game->life[1].position);
    sfSprite_setPosition(game->life[2].sprite, game->life[2].position);
    return (0);
}
