/*
** EPITECH PROJECT, 2022
** click
** File description:
** click
*/

#include "my.h"
#include "rpg.h"

int check_click(game_t *game)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window.window);

    if (mouse.x >= 1245 && mouse.x <= 1372 && mouse.y >= 900 &&
        mouse.y <= 940 && game->story_steps == 5)
        my_putstr("click emeric\n");
    if (mouse.x >= 1240 && mouse.x <= 1365 && mouse.y >= 895 &&
        mouse.y <= 930 && game->story_steps == 9)
        my_putstr("click bilal\n");
    return (0);
}
