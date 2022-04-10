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
    sfSprite_setPosition(menu->cursor.sprite, menu->cursor.pos);
    sfSprite_setPosition(menu->red_skin.sprite, menu->red_skin.pos);
    sfSprite_setPosition(menu->brown_skin.sprite, menu->brown_skin.pos);
    sfSprite_setPosition(menu->blue_skin.sprite, menu->blue_skin.pos);
    return (0);
}

int init_pos_menu(menu_t *menu)
{
    menu->play_btn.pos = (sfVector2f){300, -250};
    menu->stop_btn.pos = (sfVector2f){345, -50};
    menu->music_btn.pos = (sfVector2f){410, 143};
    menu->about_btn.pos = (sfVector2f){520, 138};
    menu->cursor.pos = (sfVector2f){520, 200};
    menu->red_skin.pos = (sfVector2f){100, 400};
    menu->brown_skin.pos = (sfVector2f){300, 400};
    menu->blue_skin.pos = (sfVector2f){500, 400};
    set_pos_menu(menu);
    return (0);
}
