/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** path
*/

#include "rpg.h"

int set_path_menu_conf(menu_t *menu)
{
    menu->map1.sprite = init_sprite
    ("ressources/map/map.png", menu->map1.texture, 1, 1);
    menu->map2.sprite = init_sprite
    ("ressources/map/map_night.png", menu->map2.texture, 1, 1);
    menu->red_skin.sprite = init_sprite
    ("ressources/player/player_2.png", menu->red_skin.texture, 1, 1);
    menu->brown_skin.sprite = init_sprite
    ("ressources/player/player.png", menu->brown_skin.texture, 1, 1);
    menu->blue_skin.sprite = init_sprite
    ("ressources/player/player_3.png", menu->blue_skin.texture, 1, 1);
    menu->sign_skin.sprite = init_sprite
    ("ressources/menu/sign_skin.png", menu->sign_skin.texture, 1, 1);
    for (int i = 0; i != 3; ++i)
        menu->bg_skin[i].sprite = init_sprite
        ("ressources/menu/bg_skin.png", menu->bg_skin[i].texture, 1, 1);
    for (int i = 0; i != 2; ++i)
        menu->bg_square[i].sprite = init_sprite
        ("ressources/menu/square_bg.png", menu->bg_square[i].texture, 1, 1);
    return (0);
}

int set_path_btn(btn_t *btn)
{
    btn->wood_btn[0].sprite = init_sprite
    ("ressources/menu/fps30_btn.png", btn->wood_btn[0].texture, 1, 1);
    btn->wood_btn[1].sprite = init_sprite
    ("ressources/menu/fps45_btn.png", btn->wood_btn[1].texture, 1, 1);
    btn->wood_btn[2].sprite = init_sprite
    ("ressources/menu/fps60_btn.png", btn->wood_btn[2].texture, 1, 1);
    btn->wood_btn[3].sprite = init_sprite
    ("ressources/menu/zqsd_btn.png", btn->wood_btn[3].texture, 1, 1);
    btn->wood_btn[4].sprite = init_sprite
    ("ressources/menu/key_btn.png", btn->wood_btn[4].texture, 1, 1);
    btn->music_btn.sprite =
    init_sprite("ressources/menu/music.png", btn->music_btn.texture, 1, 1);
    btn->about_btn.sprite =
    init_sprite("ressources/menu/about.png", btn->about_btn.texture, 1, 1);
    return (0);
}

int set_path_menu_settings(menu_t *menu, btn_t *btn, game_t *game)
{
    menu->volum.text = make_test("ressources/menu/font.ttf", 890, 485, 150);
    sfText_setColor(menu->volum.text, sfColor_fromRGB(205,133,63));
    sfText_setString(menu->volum.text, menu->volum.str);
    btn->down_btn.sprite = init_sprite
    ("ressources/menu/down_btn.png", btn->play_btn.texture, 1, 1);
    btn->up_btn.sprite = init_sprite
    ("ressources/menu/up_btn.png", btn->stop_btn.texture, 1, 1);
    menu->sign_settings.sprite = init_sprite
    ("ressources/menu/sign_settings.png",
    menu->blue_skin.texture, 1, 1);
    set_path_btn(btn);
    game->background[4].sprite =
    init_sprite("ressources/menu/bg.jpg", game->background[4].texture, 1, 1);
    return (0);
}

int set_path_menu(menu_t *menu, btn_t *btn, game_t *game)
{
    btn->play_btn.sprite =
    init_sprite("ressources/menu/play_btn.png", btn->play_btn.texture, 1, 1);
    btn->stop_btn.sprite =
    init_sprite("ressources/menu/stop_btn.png", btn->stop_btn.texture, 1, 1);
    btn->next_btn.sprite =
    init_sprite("ressources/menu/next_btn.png", btn->next_btn.texture, 1, 1);
    btn->prev_btn.sprite =
    init_sprite("ressources/menu/prev_btn.png", btn->prev_btn.texture, 1, 1);
    menu->rules.sprite =
    init_sprite("ressources/menu/about_btn.png", menu->rules.texture, 0.5, 0.5);
    btn->wood_btn[5].sprite = init_sprite
    ("ressources/menu/save_btn.png", btn->wood_btn[5].texture, 1, 1);
    btn->wood_btn[6].sprite = init_sprite
    ("ressources/menu/restart_btn.png", btn->wood_btn[0].texture, 1, 1);
    set_path_menu_conf(menu);
    set_path_menu_settings(menu, btn, game);
    return (0);
}
