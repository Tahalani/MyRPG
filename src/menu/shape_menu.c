/*
** EPITECH PROJECT, 2022
** make_menu
** File description:
** init_shape
*/

#include "rpg.h"

int init_shape_menu(menu_t *menu)
{
    menu->shape_btn->size.x = 200;
    menu->shape_btn->size.y = 200;
    menu->shape_btn->pos.x = 500;
    menu->shape_btn->pos.y = 500;
    menu->shape_btn->shape = make_shape(menu->shape_btn->texture,
    menu->shape_btn->size, menu->shape_btn->pos);
    return (0);
}
