/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** initialize
*/

#include "my.h"
#include "rpg.h"

char **map_create(char *path)
{
    char *buffer = NULL;
    char **map = NULL;

    buffer = my_file_in_str(path);
    map = my_str_to_word_array(buffer, '\n');
    return (map);
}

int initialize_map_church(game_t *game)
{
    game->background[1].sprite =
    init_sprite("ressources/map/church_map.png",
    game->background[1].texture, 1.3, 1.3);
    game->map[1].main_map = map_create("ressources/map/church_map.txt");
    game->map[1].x_player = 16;
    game->map[1].y_player = 16;
    game->map[1].view_size = (sfVector2f){1437, 813};
    position_sprite
    (game->background[1].sprite, &game->background[1].pos, 500, -960);
    return (0);
}

int initialize_map(game_t *game)
{
    game->background[0].sprite =
    init_sprite("ressources/menu/bg.jpg", game->background[0].texture, 1, 1);
    game->map[0].main_map = map_create("ressources/map/main_map.txt");
    game->map[0].x_player = 28;
    game->map[0].y_player = 55;
    game->map[0].view_size = (sfVector2f){1745, 981};
    position_sprite
    (game->background[0].sprite, &game->background[0].pos, 0, 0);
    initialize_map_church(game);
    return (0);
}
