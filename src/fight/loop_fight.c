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
    if (game->map[3].check == 1 && game->map[3].x_player == 15 &&
    game->map[3].y_player == 10 && game->arena_fight.life == 0) {
        game->status = 6;
        game->map[3].check = 0;
    }
    return (0);
}

int fight_loop(game_t *game)
{
    if (game->sound.status_fight == 0) {
        sfMusic_play(game->sound.fight);
        sfMusic_pause(game->sound.game);
    }
    game->sound.status_fight = 1;
    game->player_fight.seconds =
        sfTime_asSeconds(sfClock_getElapsedTime(game->player_fight.clock));
    game->arena_fight.seconds =
        sfTime_asSeconds(sfClock_getElapsedTime(game->arena_fight.clock));
    if (game->arena_fight.seconds >= 0.008) {
        move_rect_player_fight(game);
        move_rect_monster_fight(game);
        move_rect(&game->life[2].rect, 256, 2304, 0);
        sfSprite_setTextureRect(game->life[2].sprite, game->life[2].rect);
        sfClock_restart(game->arena_fight.clock);
    }
    gameplay_fight(game);
    return (0);
}
