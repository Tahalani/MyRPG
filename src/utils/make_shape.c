/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** make_shape
*/

#include "my.h"
#include "rpg.h"
#include "game.h"
#include "menu.h"

sfRectangleShape *make_shape(sfTexture *texture,
sfVector2f size, sfVector2f pos)
{
    sfRectangleShape *shape = sfRectangleShape_create();

    sfRectangleShape_setSize(shape, size);
    sfRectangleShape_setPosition(shape, pos);
    //sfRectangleShape_setOrigin(shape, (sfVector2f){.x = 100, .y = 100});
    // texture = NULL;
    sfRectangleShape_setFillColor(shape, sfRed);
    texture = sfTexture_createFromFile("ressources/menu/about.png", NULL);
    sfRectangleShape_setTexture(shape, texture, true);
    return (shape);
}
