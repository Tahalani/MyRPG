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
    sfSprite_setScale(menu->music_btn.sprite, menu->music_btn.scale);
    sfSprite_setScale(menu->about_btn.sprite, menu->about_btn.scale);
    sfSprite_setScale(menu->cursor.sprite, menu->cursor.scale);
    return (0);
}

int init_scale_menu(menu_t *menu)
{
    menu->play_btn.scale = (sfVector2f){1.01, 1.01};
    menu->stop_btn.scale = (sfVector2f){0.95, 0.95};
    menu->music_btn.scale = (sfVector2f){0.8, 0.8};
    menu->about_btn.scale = (sfVector2f){0.8, 0.8};
    menu->cursor.scale = (sfVector2f){0.1, 0.1};
    set_scale_menu(menu);
    return (0);
}
