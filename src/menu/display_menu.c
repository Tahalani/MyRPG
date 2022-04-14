/*
** EPITECH PROJECT, 2022
** display_menu
** File description:
** display_menu
*/

#include "rpg.h"

int display_menu_settings(menu_t *menu, game_t *game, btn_t *btn)
{
    sfRenderWindow_clear(game->window.window, sfBlack);
    sfRenderWindow_drawSprite
    (game->window.window, game->background[0].sprite, NULL);
    sfRenderWindow_drawSprite
    (game->window.window, btn->down_btn.sprite, NULL);
    sfRenderWindow_drawSprite
    (game->window.window, btn->up_btn.sprite, NULL);
    sfRenderWindow_drawSprite
    (game->window.window, btn->next_btn.sprite, NULL);
    sfRenderWindow_drawSprite
    (game->window.window, menu->sign_settings.sprite, NULL);
    for (int i = 0; i != 5; ++i)
        sfRenderWindow_drawSprite
        (game->window.window, btn->wood_btn[i].sprite, NULL);
    sfRenderWindow_display(game->window.window);
    return (0);
}

static int display_conf_skin(menu_t *menu, game_t *game)
{
    for (int i = 0; i != 3; ++i)
        sfRenderWindow_drawSprite
        (game->window.window, menu->bg_skin[i].sprite, NULL);
    for (int i = 0; i != 2; ++i)
        sfRenderWindow_drawSprite
        (game->window.window, menu->bg_square[i].sprite, NULL);
    sfRenderWindow_drawSprite
    (game->window.window, menu->red_skin.sprite, NULL);
    sfRenderWindow_drawSprite
    (game->window.window, menu->brown_skin.sprite, NULL);
    sfRenderWindow_drawSprite
    (game->window.window, menu->blue_skin.sprite, NULL);
    sfRenderWindow_drawSprite
    (game->window.window, menu->map1.sprite, NULL);
    sfRenderWindow_drawSprite
    (game->window.window, menu->map2.sprite, NULL);
    return (0);
}

int display_menu_conf(menu_t *menu, game_t *game, btn_t *btn)
{
    sfRenderWindow_clear(game->window.window, sfBlack);
    sfRenderWindow_drawSprite
    (game->window.window, game->background[0].sprite, NULL);
    sfRenderWindow_drawSprite
    (game->window.window, btn->prev_btn.sprite, NULL);
    sfRenderWindow_drawSprite
    (game->window.window, menu->sign_skin.sprite, NULL);
    display_conf_skin(menu, game);
    sfRenderWindow_display(game->window.window);
    return (0);
}

int display_menu(menu_t *menu, game_t *game, btn_t *btn)
{
    sfRenderWindow_clear(game->window.window, sfBlack);
    sfRenderWindow_drawSprite
    (game->window.window, game->background[0].sprite, NULL);
    sfRenderWindow_drawRectangleShape(game->window.window,
    menu->shape_btn->shape, NULL);
    sfRenderWindow_drawSprite
    (game->window.window, btn->play_btn.sprite, NULL);
    sfRenderWindow_drawSprite
    (game->window.window, btn->stop_btn.sprite, NULL);
    sfRenderWindow_drawSprite
    (game->window.window, btn->music_btn.sprite, NULL);
    sfRenderWindow_drawSprite
    (game->window.window, btn->about_btn.sprite, NULL);
    sfRenderWindow_drawSprite
    (game->window.window, btn->next_btn.sprite, NULL);
    sfRenderWindow_drawSprite
    (game->window.window, btn->prev_btn.sprite, NULL);
    sfRenderWindow_display(game->window.window);
    return (0);
}
