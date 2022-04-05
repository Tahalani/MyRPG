/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** map
*/

#include "my.h"
#include "rpg.h"


char **map_create(game_t *game)
{
    char *buffer = NULL;
    char **map = NULL;

    buffer = my_file_in_str("ressources/map/main_map.txt");
    map = my_str_to_word_array(buffer, '\n');
    return (map);
}
