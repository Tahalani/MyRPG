/*
** EPITECH PROJECT, 2022
** manage
** File description:
** manage
*/

#include "rpg.h"

static int manage_settings_volume(menu_t *menu, game_t *game, sfVector2i mouse,
btn_t *btn)
{
    sfFloatRect shape;
    float vol = sfMusic_getVolume(game->sound.game);

    for (int i = 13; i != 15; ++i) {
        shape = sfRectangleShape_getGlobalBounds(menu->shape_btn[i].shape);
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 13
        && vol >= 20) {
            vol -= 20;
            sfMusic_setVolume(game->sound.game, vol);
            btn->down_btn.scale = (sfVector2f) {0.37, 0.37};
        }
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 14 &&
        vol <= 80) {
            vol += 20;
            btn->up_btn.scale = (sfVector2f) {0.37, 0.37};
            sfMusic_setVolume(game->sound.game, vol);
        }
    }
    return (0);
}


static int manage_wood_top(menu_t *menu, sfVector2i mouse, btn_t *btn)
{
    sfFloatRect shape;

    for (int i = 11; i != 13; ++i) {
        shape = sfRectangleShape_getGlobalBounds(menu->shape_btn[i].shape);
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 11)
            btn->wood_btn[4].scale = (sfVector2f){0.96, 0.96};
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 12)
            btn->wood_btn[3].scale = (sfVector2f){0.96, 0.96};
    }
    return (0);
}

static int manage_settings_wood(menu_t *menu, game_t *game, sfVector2i mouse,
btn_t *btn)
{
    sfFloatRect shape;

    manage_wood_top(menu, mouse, btn);
    for (int i = 15; i != 18; ++i) {
        shape = sfRectangleShape_getGlobalBounds(menu->shape_btn[i].shape);
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 15) {
            sfRenderWindow_setFramerateLimit(game->window.window, 30);
            btn->wood_btn[0].scale = (sfVector2f){0.96, 0.96};
        }
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 16) {
            sfRenderWindow_setFramerateLimit(game->window.window, 45);
            btn->wood_btn[1].scale = (sfVector2f){0.96, 0.96};
        }
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 17) {
            sfRenderWindow_setFramerateLimit(game->window.window, 60);
            btn->wood_btn[2].scale = (sfVector2f){0.96, 0.96};
        }
    }
    return (0);
}

int manage_click_menu_settings(menu_t *menu, game_t *game, btn_t *btn)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window.window);
    sfFloatRect shape =
    sfRectangleShape_getGlobalBounds(menu->shape_btn[3].shape);

    manage_settings_wood(menu, game, mouse, btn);
    manage_settings_volume(menu, game, mouse, btn);
    if (sfFloatRect_contains(&shape, mouse.x, mouse.y)) {
        music("ressources/music/menu_page.ogg", 0);
        game->status++;
    }
    return (0);
}
