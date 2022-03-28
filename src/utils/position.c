/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** position
*/

#include "my.h"
#include "rpg.h"

int position_sprite(sfSprite *sprite, sfVector2f *position, int x, int y)
{
    position->y = x;
    position->x = y;
    sfSprite_setPosition(sprite, *position);
    return (0);
}
