/*
** EPITECH PROJECT, 2022
** make
** File description:
** text
*/

#include "rpg.h"

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
