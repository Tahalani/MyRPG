/*
** EPITECH PROJECT, 2022
** manage
** File description:
** manage
*/

#include "rpg.h"

int manage_click_menu(menu_t *menu, game_t *game)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window.window);
    sfFloatRect shape;

    for (int i = 0; i != 6; ++i) {
        shape = sfRectangleShape_getGlobalBounds(menu->shape_btn[i].shape);
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 0)
            start_game(game, menu);
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 1)
            sfRenderWindow_close(game->window.window);
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 2) {
            music("ressources/music/menu_page.ogg", 0);
            game->status--;
        }
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 3) {
            music("ressources/music/menu_page.ogg", 0);
            game->status++;
        }
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 4
            && menu->sound.status == 0) {
            sfMusic_pause(menu->sound.menu);
            menu->sound.status = 1;
        } else if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 4
            && menu->sound.status == 1) {
            sfMusic_play(menu->sound.menu);
            menu->sound.status = 0;
        }
    }
    return (0);
}

static int manage_conf_map(menu_t *menu, sfVector2i mouse, sfFloatRect shape)
{
    for (int i = 9; i != 11; ++i) {
        shape = sfRectangleShape_getGlobalBounds(menu->shape_btn[i].shape);
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 9) {
            menu->map1.status = 1;
            menu->map1.status = 0;
        }
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 10) {
            menu->map1.status = 0;
            menu->map1.status = 1;
        }
    }
    return (0);
}

static int manage_conf_skin(menu_t *menu, sfVector2i mouse, sfFloatRect shape)
{
    for (int i = 6; i != 9; ++i) {
        shape = sfRectangleShape_getGlobalBounds(menu->shape_btn[i].shape);
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 6) {
            menu->red_skin.status = 1;
            menu->brown_skin.status = 0;
            menu->blue_skin.status = 0;
        }
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 7) {
            menu->red_skin.status = 0;
            menu->brown_skin.status = 1;
            menu->blue_skin.status = 0;
        }
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 8) {
            menu->red_skin.status = 0;
            menu->brown_skin.status = 0;
            menu->blue_skin.status = 1;
        }
    }
    return (0);
}

int manage_click_menu_conf(menu_t *menu, game_t *game)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window.window);
    sfFloatRect shape;

    manage_conf_skin(menu, mouse, shape);
    manage_conf_map(menu, mouse, shape);
    shape = sfRectangleShape_getGlobalBounds(menu->shape_btn[2].shape);
    if (sfFloatRect_contains(&shape, mouse.x, mouse.y)) {
        music("ressources/music/menu_page.ogg", 0);
        game->status--;
    }
    return (0);
}
