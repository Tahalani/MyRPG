/*
** EPITECH PROJECT, 2022
** manage
** File description:
** manage
*/

#include "rpg.h"

int manage_click_menu(menu_t *menu, game_t *game, btn_t *btn)
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
            btn->prev_btn.scale = (sfVector2f) {0.9, 0.9};
            game->status--;
        }
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 3) {
            music("ressources/music/menu_page.ogg", 0);
            game->status++;
        }
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 4
            && menu->sound.status == 0) {
            sfMusic_pause(menu->sound.menu);
            btn->music_btn.scale = (sfVector2f) {0.78, 0.78};
            menu->sound.status = 1;
        } else if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 4
            && menu->sound.status == 1) {
            sfMusic_play(menu->sound.menu);
            btn->music_btn.scale = (sfVector2f) {0.78, 0.78};
            menu->sound.status = 0;
        }
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 5) {
            btn->about_btn.scale = (sfVector2f) {0.78, 0.78};
        }
    }
    return (0);
}
