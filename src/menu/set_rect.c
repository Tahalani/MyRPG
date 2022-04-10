/*
** EPITECH PROJECT, 2022
** set_rect
** File description:
** set_rect
*/

#include "rpg.h"

int set_rect_menu(menu_t *menu)
{
    sfSprite_setTextureRect(menu->red_skin.sprite, menu->red_skin.rect);
    sfSprite_setTextureRect(menu->brown_skin.sprite, menu->brown_skin.rect);
    sfSprite_setTextureRect(menu->blue_skin.sprite, menu->blue_skin.rect);
    return (0);
}

int init_rect_menu(menu_t *menu)
{
    menu->red_skin.rect = (sfIntRect){0, 0, 50, 75};
    menu->brown_skin.rect = (sfIntRect){0, 0, 50, 73};
    menu->blue_skin.rect= (sfIntRect){0, 0, 50, 75};
    set_rect_menu(menu);
    return (0);
}
