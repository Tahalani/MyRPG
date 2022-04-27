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
    game->map[3].x_player == 15 && game->map[3].y_player == 10)
        game->status = 6;
    return (0);
}

int fight_loop(game_t *game)
{
    sfView_setCenter(game->arena_fight.view, (sfVector2f){-1500, 500});
    sfRenderWindow_setView (game->window.window, game->arena_fight.view);
    display_fight(game);
    return (0);
}
