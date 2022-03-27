/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** position
*/

#include "my.h"
#include "rpg.h"

int position_sprite(sfVector2f *position, int x, int y)
{
    position->y = x;
    position->x = y;
    return (0);
}
