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

    if ((mouse.x >= 1245 && mouse.x <= 1372 && mouse.y >= 900 &&
    mouse.y <= 940) && game->story_steps == 4) {
        if (game->coins.count == 50) {
            game->coins.count = 0;
            sfText_setString(game->coins.text, int_to_char(game->coins.count));
            game->story_steps = 5;
        }
    }
    if (mouse.x >= 1240 && mouse.x <= 1365 && mouse.y >= 895 &&
    mouse.y <= 930 && (game->story_steps == 8 || game->story_steps == 9)) {
        if (game->coins.count == 100) {
            game->coins.count = 0;
            sfText_setString(game->coins.text, int_to_char(game->coins.count));
            game->level_player = 1;
            game->story_steps = 9;
        }
    }
    return (0);
}
