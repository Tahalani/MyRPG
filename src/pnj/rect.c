/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** rect_pnj
*/

#include "my.h"
#include "rpg.h"

int set_rect_pnj(game_t *game)
{
    game->pnj[0].rect = (sfIntRect){31.3333333, 0, 31, 48};
    game->pnj[1].rect = (sfIntRect){31.6666667, 48, 31, 48};
    game->pnj[2].rect = (sfIntRect){48.3333333, 0, 48, 48};
    game->pnj[3].rect = (sfIntRect){0, 108, 34, 54};
    game->pnj[4].rect = (sfIntRect){0, 97, 34, 54};
    game->pnj[5].rect = (sfIntRect){5, 100, 34, 54};
    for (int i = 0; i != 6; i++)
        sfSprite_setTextureRect(game->pnj[i].sprite, game->pnj[i].rect);
    return (0);
}

int rect_pnj(sfVector2f *position, game_t *game, sfSprite *sprite, char *path)
{
    char *buffer = my_file_in_str(path);
    char **script = my_str_to_word_array(buffer, ' ');
    static int i = 0;

    if (game->pnj->seconds >= 0.1) {
        // printf("%f\n", position->x);
        // printf("%f\n", position->y);
        if (position->y != my_getnbr(script[i + 1]) || position->x !=
        my_getnbr(script[i])) {
            if (position->x < my_getnbr(script[i])) {
                move_rect(&game->pnj[4].rect, 34, 136, 108);
                position->x += 7;
            } else if (position->x != my_getnbr(script[i])) {
                move_rect(&game->pnj[4].rect, 34, 136, 54);
                position->x -= 7;
            }
            if (position->y > my_getnbr(script[i + 1])) {
                move_rect(&game->pnj[4].rect, 34, 136, 162);
                position->y -= 7;
            } else if (position->y != my_getnbr(script[i + 1])) {
                move_rect(&game->pnj[4].rect, 34, 136, 0);
                position->y += 7;
            }
            sfSprite_setPosition(sprite, *position);
            sfSprite_setTextureRect(sprite, game->pnj[4].rect);
            sfClock_restart(game->pnj->clock);
            return (0);
        }
        if (script[i + 2] == NULL)
            i = 0;
        else
            i += 2;
    }
    return (0);
}
