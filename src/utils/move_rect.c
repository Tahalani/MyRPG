/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** move_rect
*/

#include "my.h"
#include "rpg.h"

int move_rect(sfIntRect *rect, int offset, int max_value, int top)
{
    rect->top = top;
    rect->left += offset;
    if (rect->left == max_value)
        rect->left = 0;
    return (0);
}
