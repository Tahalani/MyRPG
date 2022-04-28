/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** initialize_fight
*/

#include "my.h"
#include "rpg.h"

int initialize_fight(game_t *game)
{
    game->arena_fight.clock = sfClock_create();
    game->arena_fight.seconds = 0;
    game->arena_fight.sprite = init_sprite
    ("ressources/fight/arena.jpg", game->arena_fight.texture, 1, 1);
    game->player_fight.sprite = init_sprite
    ("ressources/fight/player_fight.png", game->player_fight.texture, 2.4, 2.4);
    game->monster_fight.sprite = init_sprite
    ("ressources/fight/monster_fight.png", game->monster_fight.texture, 0.4, 0.4);
    set_position_fight(game);
    set_rect_fight(game);
    return (0);
}
