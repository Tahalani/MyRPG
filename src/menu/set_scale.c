/*
** EPITECH PROJECT, 2022
** set_scale
** File description:
** set_scale
*/

#include "rpg.h"

int set_scale_menu(menu_t *menu)
{
    sfSprite_setScale(menu->play_btn.sprite, menu->play_btn.scale);
    sfSprite_setScale(menu->stop_btn.sprite, menu->stop_btn.scale);
    return (0);
}

int init_scale_menu(menu_t *menu)
{
    menu->play_btn.scale = (sfVector2f){1.01, 1.01};
    menu->stop_btn.scale = (sfVector2f){0.95, 0.95};
    set_scale_menu(menu);
    return (0);
}
