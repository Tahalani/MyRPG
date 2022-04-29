/*
** EPITECH PROJECT, 2022
** make_menu
** File description:
** init_shape
*/

#include "rpg.h"

void init_pos_shape(menu_t *menu)
{
    menu->shape_btn[0].pos = (sfVector2f) {765, 260};
    menu->shape_btn[1].pos = (sfVector2f) {765, 440};
    menu->shape_btn[2].pos = (sfVector2f) {50, 20};
    menu->shape_btn[3].pos = (sfVector2f) {1625, 20};
    menu->shape_btn[4].pos = (sfVector2f) {840, 625};
    menu->shape_btn[5].pos = (sfVector2f) {970, 625};
    menu->shape_btn[6].pos = (sfVector2f) {580, 350};
    menu->shape_btn[7].pos = (sfVector2f) {880, 350};
    menu->shape_btn[8].pos = (sfVector2f) {1180, 350};
    menu->shape_btn[9].pos = (sfVector2f) {700, 635};
    menu->shape_btn[10].pos = (sfVector2f) {1020, 635};
    menu->shape_btn[11].pos = (sfVector2f) {770, 342};
    menu->shape_btn[12].pos = (sfVector2f) {1020, 342};
    menu->shape_btn[13].pos = (sfVector2f) {662, 535};
    menu->shape_btn[14].pos = (sfVector2f) {1172, 535};
    menu->shape_btn[15].pos = (sfVector2f) {656, 692};
    menu->shape_btn[16].pos = (sfVector2f) {905, 692};
    menu->shape_btn[17].pos = (sfVector2f) {1156, 692};
    menu->shape_btn[19].pos = (sfVector2f) {810, 842};
    menu->shape_btn[20].pos = (sfVector2f) {995, 842};
}

int init_shape_menu_settings(menu_t *menu)
{
    for (int i = 11; i != 13; ++i) {
        menu->shape_btn[i].size.y = 130;
        menu->shape_btn[i].size.x = 130;
        menu->shape_btn[i].shape = make_shape(menu->shape_btn[i].texture,
        menu->shape_btn[i].size, menu->shape_btn[i].pos);
    }
    for (int i = 13; i != 15; ++i) {
        menu->shape_btn[i].size.y = 100;
        menu->shape_btn[i].size.x = 100;
        menu->shape_btn[i].shape = make_shape(menu->shape_btn[i].texture,
        menu->shape_btn[i].size, menu->shape_btn[i].pos);
    }
    for (int i = 15; i != 18; ++i) {
        menu->shape_btn[i].size.y = 130;
        menu->shape_btn[i].size.x = 130;
        menu->shape_btn[i].shape = make_shape(menu->shape_btn[i].texture,
        menu->shape_btn[i].size, menu->shape_btn[i].pos);
    }
    return (0);
}

int init_shape_menu_conf(menu_t *menu)
{
    init_shape_menu_settings(menu);
    for (int i = 6; i != 9; ++i) {
        menu->shape_btn[i].size.y = 210;
        menu->shape_btn[i].size.x = 150;
        menu->shape_btn[i].shape = make_shape(menu->shape_btn[i].texture,
        menu->shape_btn[i].size, menu->shape_btn[i].pos);
    }
    for (int i = 9; i != 11; ++i) {
        menu->shape_btn[i].size.y = 200;
        menu->shape_btn[i].size.x = 200;
        menu->shape_btn[i].shape = make_shape(menu->shape_btn[i].texture,
        menu->shape_btn[i].size, menu->shape_btn[i].pos);
    }
    for (int i = 18; i != 21; ++i) {
        menu->shape_btn[i].size.y = 130;
        menu->shape_btn[i].size.x = 130;
        menu->shape_btn[i].shape = make_shape(menu->shape_btn[i].texture,
        menu->shape_btn[i].size, menu->shape_btn[i].pos);
    }
    return (0);
}

void init_shape_menu(menu_t *menu)
{
    init_pos_shape(menu);
    for (int i = 0; i != 2; ++i) {
        menu->shape_btn[i].size.y = 170;
        menu->shape_btn[i].size.x = 375;
        menu->shape_btn[i].shape = make_shape(menu->shape_btn[i].texture,
        menu->shape_btn[i].size, menu->shape_btn[i].pos);
    }
    for (int i = 2; i != 4; ++i) {
        menu->shape_btn[i].size.y = 170;
        menu->shape_btn[i].size.x = 250;
        menu->shape_btn[i].shape = make_shape(menu->shape_btn[i].texture,
        menu->shape_btn[i].size, menu->shape_btn[i].pos);
    }
    for (int i = 4; i != 6; ++i) {
        menu->shape_btn[i].size.y = 90;
        menu->shape_btn[i].size.x = 100;
        menu->shape_btn[i].shape = make_shape(menu->shape_btn[i].texture,
        menu->shape_btn[i].size, menu->shape_btn[i].pos);
    }
    init_shape_menu_conf(menu);
}
