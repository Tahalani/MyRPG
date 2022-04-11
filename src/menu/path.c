/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** path
*/

#include "rpg.h"

static int set_path_menu_conf(menu_t *menu)
{
    menu->cursor.sprite =
    init_sprite("ressources/menu/cursor.png", menu->cursor.texture, 1, 1);
    menu->red_skin.sprite =
    init_sprite("ressources/player_2.png", menu->red_skin.texture, 1, 1);
    menu->brown_skin.sprite =
    init_sprite("ressources/player.png", menu->brown_skin.texture, 1, 1);
    menu->blue_skin.sprite =
    init_sprite("ressources/player_3.png", menu->blue_skin.texture, 1, 1);
    menu->sign_skin.sprite =
    init_sprite("ressources/menu/sign_skin.png",
    menu->blue_skin.texture, 1, 1);
    for (int i = 0; i != 4; ++i)
        menu->bg_skin[i].sprite = init_sprite("ressources/menu/bg_skin.png",
        menu->blue_skin.texture, 1, 1);
    return (0);
}

static int set_path_menu_settings(menu_t *menu, btn_t *btn)
{
    btn->down_btn.sprite =
    init_sprite("ressources/menu/down_btn.png", btn->play_btn.texture, 1, 1);
    btn->up_btn.sprite =
    init_sprite("ressources/menu/up_btn.png", btn->stop_btn.texture, 1, 1);
    menu->sign_settings.sprite =
    init_sprite("ressources/menu/sign_settings.png",
    menu->blue_skin.texture, 1, 1);
    return (0);
}

int set_path_menu(menu_t *menu, btn_t *btn)
{
    btn->play_btn.sprite =
    init_sprite("ressources/menu/play_btn.png", btn->play_btn.texture, 1, 1);
    btn->stop_btn.sprite =
    init_sprite("ressources/menu/stop_btn.png", btn->stop_btn.texture, 1, 1);
    btn->music_btn.sprite =
    init_sprite("ressources/menu/music.png", btn->music_btn.texture, 1, 1);
    btn->about_btn.sprite =
    init_sprite("ressources/menu/about.png", btn->about_btn.texture, 1, 1);
    btn->next_btn.sprite =
    init_sprite("ressources/menu/next_btn.png", btn->next_btn.texture, 1, 1);
    btn->prev_btn.sprite =
    init_sprite("ressources/menu/prev_btn.png", btn->prev_btn.texture, 1, 1);
    set_path_menu_conf(menu);
    set_path_menu_settings(menu, btn);
    return (0);
}
