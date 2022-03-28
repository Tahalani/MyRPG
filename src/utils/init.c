/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** init
*/

#include "my.h"
#include "rpg.h"

sfSprite *init_sprite(char *path, sfTexture* texture, float x, float y)
{
    sfSprite* sprite;
    sfVector2f scale = {x, y};

    texture = sfTexture_createFromFile(path, NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfFalse);
    sfSprite_setPosition(sprite, (sfVector2f){0, 0});
    sfSprite_setScale(sprite, scale);
    return (sprite);
}
