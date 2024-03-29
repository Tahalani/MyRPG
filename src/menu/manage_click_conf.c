/*
** EPITECH PROJECT, 2022
** manage
** File description:
** manage
*/

#include "rpg.h"

int manage_conf_map(menu_t *menu, sfVector2i mouse, sfFloatRect shape)
{
    for (int i = 9; i != 11; ++i) {
        shape = sfRectangleShape_getGlobalBounds(menu->shape_btn[i].shape);
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 9) {
            sfSprite_setColor(menu->map1.sprite, menu->opacity[0]);
            sfSprite_setColor(menu->map2.sprite, menu->opacity[1]);
            menu->map1.status = 1;
            menu->map2.status = 0;
        }
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 10) {
            sfSprite_setColor(menu->map1.sprite, menu->opacity[1]);
            sfSprite_setColor(menu->map2.sprite, menu->opacity[0]);
            menu->map1.status = 0;
            menu->map2.status = 1;
        }
    }
    return (0);
}

static int check_click_skin(menu_t *menu, sfSprite *skin)
{
    menu->red_skin.status = 0;
    menu->brown_skin.status = 0;
    menu->blue_skin.status = 0;
    sfSprite_setColor(menu->red_skin.sprite, menu->opacity[1]);
    sfSprite_setColor(menu->brown_skin.sprite, menu->opacity[1]);
    sfSprite_setColor(menu->blue_skin.sprite, menu->opacity[1]);
    sfSprite_setColor(skin, menu->opacity[0]);
    return (0);
}

int manage_conf_skin(menu_t *menu, sfVector2i mouse, sfFloatRect shape)
{
    for (int i = 6; i != 9; ++i) {
        shape = sfRectangleShape_getGlobalBounds(menu->shape_btn[i].shape);
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 6) {
            check_click_skin(menu, menu->red_skin.sprite);
            menu->red_skin.status = 1;
        }
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 7) {
            check_click_skin(menu, menu->brown_skin.sprite);
            menu->brown_skin.status = 1;
        }
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 8) {
            check_click_skin(menu, menu->blue_skin.sprite);
            menu->blue_skin.status = 1;
        }
    }
    return (0);
}

int manage_click_menu_conf(menu_t *menu, game_t *game, btn_t *btn)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window.window);
    sfFloatRect shape;

    manage_conf_skin(menu, mouse, shape);
    manage_conf_map(menu, mouse, shape);
    shape = sfRectangleShape_getGlobalBounds(menu->shape_btn[2].shape);
    if (sfFloatRect_contains(&shape, mouse.x, mouse.y)) {
        music("ressources/music/menu_page.ogg", 0);
        btn->prev_btn.scale = (sfVector2f) {0.9, 0.9};
        game->status--;
    }
    return (0);
}
