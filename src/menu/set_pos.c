/*
** EPITECH PROJECT, 2022
** set_pos
** File description:
** set_pos
*/

#include "rpg.h"

int set_pos_menu(menu_t *menu)
{
    sfSprite_setPosition(menu->play_btn.sprite, menu->play_btn.pos);
    sfSprite_setPosition(menu->stop_btn.sprite, menu->stop_btn.pos);
    sfSprite_setPosition(menu->music_btn.sprite, menu->music_btn.pos);
    sfSprite_setPosition(menu->about_btn.sprite, menu->about_btn.pos);
    return (0);
}

int init_pos_menu(menu_t *menu)
{
    menu->play_btn.pos = (sfVector2f){300, -250};
    menu->stop_btn.pos = (sfVector2f){345, -50};
    menu->music_btn.pos = (sfVector2f){410, 143};
    menu->about_btn.pos = (sfVector2f){520, 138};
    set_pos_menu(menu);
    return (0);
}
