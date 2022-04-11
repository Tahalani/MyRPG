/*
** EPITECH PROJECT, 2022
** set_pos
** File description:
** set_pos
*/

#include "rpg.h"

int set_pos_menu(menu_t *menu, btn_t *btn)
{
    sfSprite_setPosition(btn->play_btn.sprite, btn->play_btn.pos);
    sfSprite_setPosition(btn->stop_btn.sprite, btn->stop_btn.pos);
    sfSprite_setPosition(btn->down_btn.sprite, btn->down_btn.pos);
    sfSprite_setPosition(btn->up_btn.sprite, btn->up_btn.pos);
    sfSprite_setPosition(btn->music_btn.sprite, btn->music_btn.pos);
    sfSprite_setPosition(btn->about_btn.sprite, btn->about_btn.pos);
    sfSprite_setPosition(btn->next_btn.sprite, btn->next_btn.pos);
    sfSprite_setPosition(btn->prev_btn.sprite, btn->prev_btn.pos);
    sfSprite_setPosition(menu->red_skin.sprite, menu->red_skin.pos);
    sfSprite_setPosition(menu->brown_skin.sprite, menu->brown_skin.pos);
    sfSprite_setPosition(menu->blue_skin.sprite, menu->blue_skin.pos);
    sfSprite_setPosition(menu->sign_settings.sprite, menu->sign_settings.pos);
    sfSprite_setPosition(menu->sign_skin.sprite, menu->sign_skin.pos);
    for (int i = 0; i != 5; ++i)
        sfSprite_setPosition(menu->bg_skin[i].sprite, menu->bg_skin[i].pos);
    return (0);
}

static int init_pos_conf(menu_t *menu)
{
    menu->sign_skin.pos = (sfVector2f){615, 0};
    menu->red_skin.pos = (sfVector2f){572, 350};
    menu->brown_skin.pos = (sfVector2f){872, 350};
    menu->blue_skin.pos = (sfVector2f){1172, 350};
    menu->bg_skin[0].pos = (sfVector2f){495, -100};
    menu->bg_skin[3].pos = (sfVector2f){642, 150};
    menu->bg_skin[4].pos = (sfVector2f){952, 150};
    for (int i = 1; i != 3; ++i)
        menu->bg_skin[i].pos = (sfVector2f)
        {menu->bg_skin[i - 1].pos.x + 300, -100};
    return (0);
}

int init_pos_menu(menu_t *menu, btn_t *btn)
{
    btn->play_btn.pos = (sfVector2f){300, -250};
    btn->stop_btn.pos = (sfVector2f){345, -50};
    btn->down_btn.pos = (sfVector2f){650, 500};
    btn->up_btn.pos = (sfVector2f){1050, 500};
    btn->music_btn.pos = (sfVector2f){410, 143};
    btn->about_btn.pos = (sfVector2f){520, 138};
    btn->next_btn.pos = (sfVector2f){1325, -70};
    btn->prev_btn.pos = (sfVector2f){10, -70};
    menu->sign_settings.pos = (sfVector2f){615, 0};
    init_pos_conf(menu);
    set_pos_menu(menu, btn);
    return (0);
}
