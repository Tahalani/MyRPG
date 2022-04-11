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
