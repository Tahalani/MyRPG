/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** position
*/

#include "my.h"
#include "rpg.h"

int run_player(sfSprite *sprite, sfVector2f *position, char check)
{
    switch (check)
    {
    case 's':
        position->y += 2;
        break;
    case 'q':
        position->x -= 2;
        break;
    case 'd':
        position->x += 2;
        break;
    case 'z':
        position->y -= 2;
        break;
    default:
        break;
    }
    sfSprite_setPosition(sprite, *position);
    return (0);
}
