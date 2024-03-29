/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** window
*/

#include "my.h"
#include "rpg.h"

int set_value_window(game_t *game)
{
    game->window.width = 1920;
    game->window.height = 1080;
    return (0);
}

sfRenderWindow *initialize_window(int width, int height, int bitsPerPixel)
{
    sfRenderWindow *window;
    sfVideoMode video_mode;

    video_mode.width = width;
    video_mode.height = height;
    video_mode.bitsPerPixel = bitsPerPixel;
    window = sfRenderWindow_create(video_mode, "My rpg", sfDefaultStyle, NULL);
    sfRenderWindow_setFramerateLimit(window, 60);
    return (window);
}
