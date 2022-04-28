/*
** EPITECH PROJECT, 2022
** pause
** File description:
** pause
*/

#include "rpg.h"

static int manage_click_menu_pausebot(menu_t *menu, game_t *game, btn_t *btn)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window.window);
    sfFloatRect shape;

    for (int i = 19; i != 21; ++i) {
        shape = sfRectangleShape_getGlobalBounds(menu->shape_btn[i].shape);
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 19) {
            btn->wood_btn[5].scale = (sfVector2f){0.96, 0.96};
        }
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 20) {
            btn->wood_btn[6].scale = (sfVector2f){0.96, 0.96};
            sfMusic_stop(game->sound.game);
            before_loop(game, menu, btn);
            start_game(game, menu, btn);
        }
    }
    return (0);
}

static int manage_click_menu_pausemid(menu_t *menu, game_t *game, btn_t *btn)
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
    manage_click_menu_pausebot(menu, game, btn);
    return (0);
}

int manage_click_menu_pause(menu_t *menu, game_t *game, btn_t *btn)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window.window);
    sfFloatRect shape;

    for (int i = 0; i != 5; ++i) {
        shape = sfRectangleShape_getGlobalBounds(menu->shape_btn[i].shape);
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 0)
            game->status = 0;
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 1)
            sfRenderWindow_close(game->window.window);
        if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 4
            && game->sound.status == 0) {
            sfMusic_pause(game->sound.game);
            btn->music_btn.scale = (sfVector2f) {0.78, 0.78};
            sfSprite_setColor(btn->music_btn.sprite, menu->opacity[1]);
            game->sound.status = 1;
        } else if (sfFloatRect_contains(&shape, mouse.x, mouse.y) && i == 4
            && game->sound.status == 1) {
            sfMusic_play(game->sound.game);
            sfSprite_setColor(btn->music_btn.sprite, menu->opacity[0]);
            btn->music_btn.scale = (sfVector2f) {0.78, 0.78};
            game->sound.status = 0;
        }
    }
    manage_click_menu_pausemid(menu, game, btn);
    return (0);
}
