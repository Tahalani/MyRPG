/*
** EPITECH PROJECT, 2022
** animation
** File description:
** animation
*/

#include "rpg.h"

int animation_menu_pause(menu_t *menu, game_t *game, btn_t *btn,
sfFloatRect shape)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window.window);
    for (int i = 19; i != 21; ++i) {
        shape = sfRectangleShape_getGlobalBounds(menu->shape_btn[i].shape);
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 19)
            btn->wood_btn[5].scale = (sfVector2f){0.98, 0.98};
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 20)
            btn->wood_btn[6].scale = (sfVector2f){0.98, 0.98};
    }
    return (0);
}

int animation_menu_settings(menu_t *menu, game_t *game, btn_t *btn,
sfFloatRect shape)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window.window);
    for (int i = 11; i != 18; ++i) {
        shape = sfRectangleShape_getGlobalBounds(menu->shape_btn[i].shape);
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 11)
            btn->wood_btn[4].scale = (sfVector2f){0.98, 0.98};
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 12)
            btn->wood_btn[3].scale = (sfVector2f){0.98, 0.98};
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 13)
            btn->down_btn.scale = (sfVector2f){0.38, 0.38};
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 14)
            btn->up_btn.scale = (sfVector2f){0.38, 0.38};
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 15)
            btn->wood_btn[0].scale = (sfVector2f){0.98, 0.98};
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 16)
            btn->wood_btn[1].scale = (sfVector2f){0.98, 0.98};
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 17)
            btn->wood_btn[2].scale = (sfVector2f){0.98, 0.98};
    }
    animation_menu_pause(menu, game, btn, shape);
    return (0);
}

int animation_menu_config(menu_t *menu, game_t *game, btn_t *btn,
sfFloatRect shape)
{
    menu->seconds =
        sfTime_asSeconds(sfClock_getElapsedTime(menu->clock));
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window.window);
    for (int i = 6; i != 11; ++i) {
        shape = sfRectangleShape_getGlobalBounds(menu->shape_btn[i].shape);
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 6)
            rect_skin(&menu->red_skin, 0, menu->clock, menu->seconds);
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 7)
            rect_skin(&menu->brown_skin, 0, menu->clock, menu->seconds);
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 8)
            rect_skin(&menu->blue_skin, 0, menu->clock, menu->seconds);
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 9)
            menu->map1.scale = (sfVector2f){0.09, 0.09};
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 10)
            menu->map2.scale = (sfVector2f){0.09, 0.09};
    }
    animation_menu_settings(menu, game, btn, shape);
    return (0);
}

int animation_menu(menu_t *menu, game_t *game, btn_t *btn)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window.window);
    sfFloatRect shape;

    init_scale_menu(menu, btn);
    for (int i = 0; i != 6; ++i) {
        shape = sfRectangleShape_getGlobalBounds(menu->shape_btn[i].shape);
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 0)
            btn->play_btn.scale = (sfVector2f) {1, 1};
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 1)
            btn->stop_btn.scale = (sfVector2f) {0.94, 0.94};
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 2)
            btn->prev_btn.scale = (sfVector2f) {0.95, 0.95};
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 3)
            btn->next_btn.scale = (sfVector2f) {0.95, 0.95};
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 4)
            btn->music_btn.scale = (sfVector2f) {0.79, 0.79};
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 5)
            btn->about_btn.scale = (sfVector2f) {0.79, 0.79};
    }
    animation_menu_config(menu, game, btn, shape);
    return (0);
}
