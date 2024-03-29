/*
** EPITECH PROJECT, 2022
** manage
** File description:
** manage
*/

#include "rpg.h"

static int manage_click_menu_mid(menu_t *menu, game_t *game, btn_t *btn)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window.window);
    sfFloatRect shape;

    for (int i = 0; i != 4; ++i) {
        shape = sfRectangleShape_getGlobalBounds(menu->shape_btn[i].shape);
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 0)
            start_game(game, menu, btn);
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 1)
            sfRenderWindow_close(game->window.window);
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 2) {
            music("ressources/music/menu_page.ogg", 0);
            btn->prev_btn.scale = (sfVector2f) {0.9, 0.9};
            game->status--;
        }
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 3) {
            music("ressources/music/menu_page.ogg", 0);
            game->status++;
        }
    }
    return (0);
}

static int manage_click_menu_bot(menu_t *menu, game_t *game, btn_t *btn)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window.window);
    sfFloatRect shape;

    shape = sfRectangleShape_getGlobalBounds(menu->shape_btn[5].shape);
    if (sfFloatRect_contains(&shape, mouse.x, mouse.y) &&
        menu->rules.status == 0) {
        sfSprite_setColor(btn->about_btn.sprite, menu->opacity[1]);
        btn->about_btn.scale = (sfVector2f) {0.78, 0.78};
        menu->rules.status = 1;
    } else if (sfFloatRect_contains(&shape, mouse.x, mouse.y) &&
        menu->rules.status == 1) {
        sfSprite_setColor(btn->about_btn.sprite, menu->opacity[0]);
        btn->about_btn.scale = (sfVector2f) {0.78, 0.78};
        menu->rules.status = 0;
    }
    return (0);
}

int manage_setting_wood_two_again(menu_t *menu, game_t *game, btn_t *btn)
{
    sfRenderWindow_setFramerateLimit(game->window.window, 45);
    sfSprite_setColor(btn->wood_btn[0].sprite, menu->opacity[1]);
    sfSprite_setColor(btn->wood_btn[1].sprite, menu->opacity[0]);
    sfSprite_setColor(btn->wood_btn[2].sprite, menu->opacity[1]);
    btn->wood_btn[1].scale = (sfVector2f){0.94, 0.94};
    return (0);
}

int manage_click_menu(menu_t *menu, game_t *game, btn_t *btn)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window.window);
    sfFloatRect shape;

    manage_click_menu_mid(menu, game, btn);
    manage_click_menu_bot(menu, game, btn);
    shape = sfRectangleShape_getGlobalBounds(menu->shape_btn[4].shape);
    if (sfFloatRect_contains(&shape, mouse.x, mouse.y)
        && menu->sound.status == 0) {
        sfMusic_pause(menu->sound.menu);
        btn->music_btn.scale = (sfVector2f) {0.78, 0.78};
        sfSprite_setColor(btn->music_btn.sprite, menu->opacity[1]);
        menu->sound.status = 1;
    } else if (sfFloatRect_contains(&shape, mouse.x, mouse.y)
        && menu->sound.status == 1) {
        sfMusic_play(menu->sound.menu);
        sfSprite_setColor(btn->music_btn.sprite, menu->opacity[0]);
        btn->music_btn.scale = (sfVector2f) {0.78, 0.78};
        menu->sound.status = 0;
    }
    return (0);
}
