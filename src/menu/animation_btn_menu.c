/*
** EPITECH PROJECT, 2022
** animation
** File description:
** animation
*/

#include "rpg.h"

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
    return (0);
}
