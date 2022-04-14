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
    game->background[0].sprite =
    init_sprite("ressources/menu/bg.jpg", game->background[0].texture, 1, 1);
    game->map[0].main_map = map_create("ressources/map/main_map.txt");
    game->map[0].x_player = 14;
    game->map[0].y_player = 29;
    game->map[0].view_size = (sfVector2f){1745, 981};
    position_sprite(game->background[0].sprite, &game->background[0].pos, 0, 0);
    return (0);
}

int initialize_map_church(game_t *game)
{
    game->background[1].sprite =
    init_sprite("ressources/map/church_map.png", game->background[1].texture, 1.3, 1.3);
    game->map[1].main_map = map_create("ressources/map/church_map.txt");
    game->map[1].x_player = 8;
    game->map[1].y_player = 7;
    game->map[1].view_size = (sfVector2f){1437, 813};
    position_sprite(game->background[1].sprite, &game->background[1].pos, 500, -960);
    return (0);
}

static int check_for_the_good_view(game_t *game)
{
    int i = 0;

    if (game->map[1].check == 1)
        i = 1;
    if (game->map[0].check == 1)
        i = 0;
    return i;
}

int map_loop(game_t *game)
{
    int i = check_for_the_good_view(game);

    game->map[i].view = sfView_create();
    sfView_setSize(game->map[i].view, game->map[i].view_size);
    sfView_setCenter(game->map[i].view, game->player.position);
    sfRenderWindow_setView (game->window.window, game->map[i].view);
    return (0);
}
