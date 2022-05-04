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
    free(buffer);
    return (map);
}

int initialize_map_church(game_t *game)
{
    game->background[1].sprite =
    init_sprite("ressources/map/church_map.png",
    &game->background[1].texture, 1.3, 1.3);
    game->map[1].main_map = map_create("ressources/map/church_map.txt");
    game->map[1].x_player = 16;
    game->map[1].y_player = 16;
    game->map[1].view_size = (sfVector2f){1437, 813};
    position_sprite
    (game->background[1].sprite, &game->background[1].pos, 500, -960);
    return (0);
}

int initialize_map_top(game_t *game)
{
    game->background[2].sprite =
    init_sprite("ressources/map/top_map.png",
    &game->background[2].texture, 1.3, 1.3);
    game->map[2].main_map = map_create("ressources/map/top_map.txt");
    game->map[2].x_player = 10;
    game->map[2].y_player = 18;
    game->map[2].view_size = (sfVector2f){1820, 1080};
    position_sprite
    (game->background[2].sprite, &game->background[2].pos, -2300, -100);
    return (0);
}

int initialize_castle_map(game_t *game)
{
    game->background[3].sprite =
    init_sprite("ressources/map/castle_map.png",
    &game->background[3].texture, 1, 1);
    game->map[3].main_map = map_create("ressources/map/castle_map.txt");
    game->map[3].x_player = 15;
    game->map[3].y_player = 16;
    game->map[3].view_size = (sfVector2f){1920, 1080};
    position_sprite
    (game->background[3].sprite, &game->background[3].pos, -3000, 180);
    return (0);
}

int initialize_map(game_t *game)
{
    game->background[0].sprite = init_sprite
    ("ressources/map/map.png", &game->background[0].texture, 2.3, 2.3);
    game->map[0].main_map = map_create("ressources/map/main_map.txt");
    game->map[0].x_player = 28;
    game->map[0].y_player = 55;
    game->map[0].view_size = (sfVector2f){1745, 981};
    for (int i = 0; i != 6; i++)
        game->lamp[i].sprite = init_sprite
        ("ressources/map/lamp.png", &game->lamp[i].texture, 2.3, 2.3);
    position_sprite
    (game->background[0].sprite, &game->background[0].pos, -1000, -400);
    create_side_map(game);
    initialize_map_church(game);
    initialize_map_top(game);
    initialize_castle_map(game);
    init_mini_map_utils(game);
    return (0);
}
