/*
** EPITECH PROJECT, 2022
** make_menu
** File description:
** make_menu
*/

#include "rpg.h"

int loop_menu(menu_t *menu, game_t *game, btn_t *btn)
{
    animation_menu(menu, game, btn);
    analyse_menu(menu, game, btn);
    set_scale_menu(menu, btn);
    if (game->status == 1)
        display_menu_settings(menu, game, btn);
    if (game->status == 2)
        display_menu(menu, game, btn);
    if (game->status == 3)
        display_menu_conf(menu, game, btn);
    if (game->status == 4)
        display_menu_pause(menu, game, btn);
    return (0);
}

static int init_status_menu(menu_t *menu, btn_t *btn)
{
    btn->wood_btn[3].status = 1;
    btn->wood_btn[4].status = 0;
    menu->rules.status = 0;
    menu->red_skin.status = 0;
    menu->brown_skin.status = 0;
    menu->blue_skin.status = 0;
    menu->sound.status = 0;
    menu->map1.status = 1;
    menu->map2.status = 0;
    return (0);
}

int initialize_menu(menu_t *menu, btn_t *btn, game_t *game)
{
    menu->clock = sfClock_create();
    menu->seconds = 0;
    menu->opacity[0] = sfColor_fromRGB(255, 255, 255);
    menu->opacity[1] = sfColor_fromRGB(150, 150, 150);
    init_status_menu(menu, btn);
    menu->volum.str = malloc(sizeof(char) * (3 + 1));
    menu->volum.str = "100";
    menu->sound.page_menu = music("ressources/music/menu_page.ogg", 0);
    sfMusic_pause(menu->sound.page_menu);
    menu->sound.menu = music("ressources/music/ost_menu.ogg", 1);
    sfMusic_setVolume(menu->sound.menu, 75.0);
    init_shape_menu(menu);
    set_path_menu(menu, btn, game);
    init_pos_menu(menu, btn);
    init_scale_menu(menu, btn);
    init_rect_menu(menu);
    position_sprite
    (game->background[4].sprite, &game->background[4].pos, 0, 0);
    return (0);
}
