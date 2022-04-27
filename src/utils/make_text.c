/*
** EPITECH PROJECT, 2022
** make
** File description:
** text
*/

#include "rpg.h"
#include "my.h"

char *int_to_char(int nb)
{
    int len = 0;
    char *str = NULL;
    int tmp = nb;

    for (; tmp > 0; len++)
        tmp /= 10;
    str = malloc(sizeof(char *) * (len + 1));
    if (str == NULL)
        return (NULL);
    str[len] = '\0';
    for (; len != 0;) {
        --len;
        str[len] = (nb % 10) + '0';
        nb /= 10;
    }
    if (my_strcmp(str, "0") == 0) {
        str[0] = 'O';
        str[1] = '\0';
    }
    return (str);
}

sfText *make_test(char *path, int pos_x, int pos_y, int size)
{
    sfText *text;
    sfFont *font;
    sfVector2f pos;

    pos.x = pos_x;
    pos.y = pos_y;
    font = sfFont_createFromFile(path);
    text = sfText_create();
    sfText_setPosition(text, pos);
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, size);
    return (text);
}
