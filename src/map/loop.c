/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** loop
*/

#include "my.h"
#include "rpg.h"

int initialize_map(game_t *game)
{
    game->background.sprite =
    init_sprite("ressources/menu/bg.jpg", game->background.texture, 1, 1);
    game->map[0].main_map = map_create("ressources/map/main_map.txt");
    game->map[0].x_player = 14;
    game->map[0].y_player = 29;
    game->map[0].view_size = (sfVector2f){1745, 981};
    position_sprite(game->background.sprite, &game->background.pos, 0, 0);
    return (0);
}

int map_loop(game_t *game)
{
    for (int i = 0; i != 1; i++) {
        game->map[i].view = sfView_create();
        sfView_setSize(game->map[i].view, game->map[i].view_size);
        sfView_setCenter(game->map[i].view, game->player.position);
        sfRenderWindow_setView (game->window.window, game->map[i].view);
    }
    return (0);
}
