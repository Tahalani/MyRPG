/*
** EPITECH PROJECT, 2022
** manage
** File description:
** manage
*/

#include "rpg.h"

void manage_settings_volume(menu_t *menu, game_t *game, sfVector2i mouse,
btn_t *btn)
{
    sfFloatRect shape;
    static int vol = 100;

    for (int i = 13; i != 15; ++i) {
        shape = sfRectangleShape_getGlobalBounds(menu->shape_btn[i].shape);
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 13
        && vol >= 10) {
            vol -= 10;
            sfText_setString(menu->volum.text, int_to_char(vol));
            sfMusic_setVolume(game->sound.game, vol);
            btn->down_btn.scale = (sfVector2f) {0.35, 0.35};
        }
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 14 &&
        vol <= 90) {
            vol += 10;
            sfText_setString(menu->volum.text, int_to_char(vol));
            btn->up_btn.scale = (sfVector2f) {0.35, 0.35};
            sfMusic_setVolume(game->sound.game, vol);
        }
    }
}

int manage_wood_top(menu_t *menu, sfVector2i mouse, btn_t *btn)
{
    sfFloatRect shape;

    for (int i = 11; i != 13; ++i) {
        shape = sfRectangleShape_getGlobalBounds(menu->shape_btn[i].shape);
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 11) {
            sfSprite_setColor(btn->wood_btn[4].sprite, menu->opacity[0]);
            sfSprite_setColor(btn->wood_btn[3].sprite, menu->opacity[1]);
            btn->wood_btn[4].scale = (sfVector2f){0.94, 0.94};
            btn->wood_btn[4].status = 1;
            btn->wood_btn[3].status = 0;
        }
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 12) {
            sfSprite_setColor(btn->wood_btn[3].sprite, menu->opacity[0]);
            sfSprite_setColor(btn->wood_btn[4].sprite, menu->opacity[1]);
            btn->wood_btn[3].scale = (sfVector2f){0.94, 0.94};
            btn->wood_btn[3].status = 1;
            btn->wood_btn[4].status = 0;
        }
    }
    return (0);
}

int manage_setting_wood_two(menu_t *menu, game_t *game, btn_t *btn)
{
    sfRenderWindow_setFramerateLimit(game->window.window, 60);
    sfSprite_setColor(btn->wood_btn[0].sprite, menu->opacity[1]);
    sfSprite_setColor(btn->wood_btn[1].sprite, menu->opacity[1]);
    sfSprite_setColor(btn->wood_btn[2].sprite, menu->opacity[0]);
    btn->wood_btn[2].scale = (sfVector2f){0.94, 0.94};
    return (0);
}

int manage_settings_wood(menu_t *menu, game_t *game, sfVector2i mouse,
btn_t *btn)
{
    sfFloatRect shape;

    manage_wood_top(menu, mouse, btn);
    for (int i = 15; i != 18; ++i) {
        shape = sfRectangleShape_getGlobalBounds(menu->shape_btn[i].shape);
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 15) {
            sfRenderWindow_setFramerateLimit(game->window.window, 30);
            sfSprite_setColor(btn->wood_btn[0].sprite, menu->opacity[0]);
            sfSprite_setColor(btn->wood_btn[1].sprite, menu->opacity[1]);
            sfSprite_setColor(btn->wood_btn[2].sprite, menu->opacity[1]);
            btn->wood_btn[0].scale = (sfVector2f){0.94, 0.94};
        }
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 16)
            manage_setting_wood_two_again(menu, game, btn);
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 17)
            manage_setting_wood_two(menu, game, btn);
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
        btn->next_btn.scale = (sfVector2f) {0.92, 0.92};
        music("ressources/music/menu_page.ogg", 0);
        game->status++;
    }
    return (0);
}
