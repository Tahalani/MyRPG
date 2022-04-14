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
    sfSprite_setScale(menu->red_skin.sprite, menu->red_skin.scale);
    sfSprite_setScale(menu->brown_skin.sprite, menu->brown_skin.scale);
    sfSprite_setScale(menu->blue_skin.sprite, menu->blue_skin.scale);
    sfSprite_setScale(menu->sign_settings.sprite, menu->sign_settings.scale);
    sfSprite_setScale(menu->sign_skin.sprite, menu->sign_skin.scale);
    sfSprite_setScale(menu->map1.sprite, menu->map1.scale);
    sfSprite_setScale(menu->map2.sprite, menu->map2.scale);
    for (int i = 0; i != 3; ++i)
        sfSprite_setScale(menu->bg_skin[i].sprite, menu->bg_skin[i].scale);
    for (int i = 0; i != 2; ++i)
        sfSprite_setScale(menu->bg_square[i].sprite, menu->bg_square[i].scale);
    return (0);
}

static int init_scale_conf(menu_t *menu)
{
    menu->red_skin.scale = (sfVector2f){2.7, 2.7};
    menu->brown_skin.scale = (sfVector2f){2.7, 2.7};
    menu->blue_skin.scale = (sfVector2f){2.7, 2.7};
    menu->sign_skin.scale = (sfVector2f){1.2, 1.2};
    menu->map1.scale = (sfVector2f){0.1, 0.1};
    menu->map2.scale = (sfVector2f){0.1, 0.1};
    for (int i = 0; i != 3; ++i)
        menu->bg_skin[i].scale = (sfVector2f){1.4, 1.4};
    for (int i = 0; i != 2; ++i)
        menu->bg_square[i].scale = (sfVector2f){2, 2};
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
    menu->sign_settings.scale = (sfVector2f){1.2, 1.2};
    init_scale_conf(menu);
    set_scale_menu(menu, btn);
    return (0);
}
