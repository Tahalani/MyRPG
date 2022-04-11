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
    game->map.main_map = map_create("ressources/map/main_map.txt");
    game->map.x_player = 14;
    game->map.y_player = 29;
    game->map.view_size = (sfVector2f){1745, 981};
    position_sprite(game->background.sprite, &game->background.pos, 0, 0);
    return (0);
}

int map_loop(game_t *game)
{
    game->map.view = sfView_create();
    sfView_setSize(game->map.view, game->map.view_size);
    sfView_setCenter(game->map.view, game->player.position);
    sfRenderWindow_setView (game->window.window, game->map.view);
    return (0);
}
