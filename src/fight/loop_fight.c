/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** loop_fight
*/

#include "my.h"
#include "rpg.h"

int acces_fight(game_t *game)
{
    if (game->map[3].check == 1 &&
    game->map[3].x_player == 15 && game->map[3].y_player == 10) {
        game->status = 6;
    }
    return (0);
}

int fight_loop(game_t *game)
{
    game->arena_fight.seconds =
        sfTime_asSeconds(sfClock_getElapsedTime(game->arena_fight.clock));
    if (game->arena_fight.seconds >= 0.008) {
        move_rect_player_fight(game);
        move_rect_monster_fight(game);
        sfClock_restart(game->arena_fight.clock);
    }
    display_fight(game);
    return (0);
}
