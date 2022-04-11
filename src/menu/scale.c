/*
** EPITECH PROJECT, 2022
** set_scale
** File description:
** set_scale
*/

#include "rpg.h"

int set_scale_menu(menu_t *menu, btn_t *btn)
{
    sfSprite_setScale(btn->play_btn.sprite, btn->play_btn.scale);
    sfSprite_setScale(btn->stop_btn.sprite, btn->stop_btn.scale);
    sfSprite_setScale(btn->down_btn.sprite, btn->down_btn.scale);
    sfSprite_setScale(btn->up_btn.sprite, btn->up_btn.scale);
    sfSprite_setScale(btn->music_btn.sprite, btn->music_btn.scale);
    sfSprite_setScale(btn->about_btn.sprite, btn->about_btn.scale);
    sfSprite_setScale(menu->cursor.sprite, menu->cursor.scale);
    sfSprite_setScale(menu->red_skin.sprite, menu->red_skin.scale);
    sfSprite_setScale(menu->brown_skin.sprite, menu->brown_skin.scale);
    sfSprite_setScale(menu->blue_skin.sprite, menu->blue_skin.scale);
    sfSprite_setScale(menu->sign_settings.sprite, menu->sign_settings.scale);
    sfSprite_setScale(menu->sign_skin.sprite, menu->sign_skin.scale);
    return (0);
}

int init_scale_menu(menu_t *menu, btn_t *btn)
{
    btn->play_btn.scale = (sfVector2f){1.01, 1.01};
    btn->stop_btn.scale = (sfVector2f){0.95, 0.95};
    btn->music_btn.scale = (sfVector2f){0.8, 0.8};
    btn->about_btn.scale = (sfVector2f){0.8, 0.8};
    btn->down_btn.scale = (sfVector2f){0.4, 0.4};
    btn->up_btn.scale = (sfVector2f){0.4, 0.4};
    menu->cursor.scale = (sfVector2f){0.15, 0.15};
    menu->red_skin.scale = (sfVector2f){3, 3};
    menu->brown_skin.scale = (sfVector2f){3, 3};
    menu->blue_skin.scale = (sfVector2f){3, 3};
    menu->sign_settings.scale = (sfVector2f){1.2, 1.2};
    menu->sign_skin.scale = (sfVector2f){1.2, 1.2};
    set_scale_menu(menu, btn);
    return (0);
}
