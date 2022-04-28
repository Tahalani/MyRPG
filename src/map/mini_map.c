/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** mini_map
*/

#include "map.h"
#include "rpg.h"

int mini_map_loop(game_t *game)
{
    // int i = check_for_the_good_view(game);

    sfView_setSize(game->mini_map.view, (sfVector2f){1400, 1400});
    sfView_setViewport(game->mini_map.view, game->mini_map.rect);
    sfRenderWindow_setView (game->window.window, game->mini_map.view);
    return 0;
}
