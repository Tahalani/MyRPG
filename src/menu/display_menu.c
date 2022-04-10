/*
** EPITECH PROJECT, 2022
** display_menu
** File description:
** display_menu
*/

#include "rpg.h"

int display_menu_conf(menu_t *menu, game_t *game)
{
    sfRenderWindow_clear(game->window.window, sfBlack);
    sfRenderWindow_drawSprite
    (game->window.window, game->background.sprite, NULL);
    sfRenderWindow_drawSprite
    (game->window.window, menu->cursor.sprite, NULL);
    sfRenderWindow_drawSprite
    (game->window.window, menu->red_skin.sprite, NULL);
    sfRenderWindow_drawSprite
    (game->window.window, menu->brown_skin.sprite, NULL);
    sfRenderWindow_drawSprite
    (game->window.window, menu->blue_skin.sprite, NULL);
    sfRenderWindow_display(game->window.window);
    return (0);
}

int display_menu(menu_t *menu, game_t *game)
{
    sfRenderWindow_clear(game->window.window, sfBlack);
    sfRenderWindow_drawSprite
    (game->window.window, game->background.sprite, NULL);
    sfRenderWindow_drawSprite
    (game->window.window, menu->play_btn.sprite, NULL);
    sfRenderWindow_drawSprite
    (game->window.window, menu->stop_btn.sprite, NULL);
    sfRenderWindow_drawSprite
    (game->window.window, menu->music_btn.sprite, NULL);
    sfRenderWindow_drawSprite
    (game->window.window, menu->about_btn.sprite, NULL);
    sfRenderWindow_drawSprite
    (game->window.window, menu->next_btn.sprite, NULL);
    sfRenderWindow_drawSprite
    (game->window.window, menu->prev_btn.sprite, NULL);
    sfRenderWindow_display(game->window.window);
    return (0);
}
