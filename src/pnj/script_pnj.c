/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** script_pnj
*/

#include "my.h"
#include "rpg.h"

int check_pos(game_t *game, int i, char **script)
{
    if (game->pnj[i].position.x < my_getnbr(script[game->pnj[i].count])) {
        move_rect(&game->pnj[i].rect, game->pnj[i].offset,
        game->pnj[i].max_value, (game->pnj[i].rect.height * 2));
        game->pnj[i].position.x += 7;
    } else if (game->pnj[i].position.x !=
    my_getnbr(script[game->pnj[i].count])) {
        move_rect(&game->pnj[i].rect, game->pnj[i].offset,
        game->pnj[i].max_value, game->pnj[i].rect.height);
        game->pnj[i].position.x -= 7;
    }
    if (game->pnj[i].position.y > my_getnbr(script[game->pnj[i].count + 1])) {
        move_rect(&game->pnj[i].rect, game->pnj[i].offset,
        game->pnj[i].max_value, (game->pnj[i].rect.height * 3));
        game->pnj[i].position.y -= 7;
    } else if (game->pnj[i].position.y != my_getnbr
    (script[game->pnj[i].count + 1])) {
        move_rect(&game->pnj[i].rect, game->pnj[i].offset,
        game->pnj[i].max_value, 0);
        game->pnj[i].position.y += 7;
    }
    return (0);
}

int next_pos(game_t *game, int i, char **script)
{
    if (script[game->pnj[i].count + 2] == NULL)
        game->pnj[i].count = 0;
    else
        game->pnj[i].count += 2;
    return (0);
}

int scipt_pnj(game_t *game, int i)
{
    char *buffer = my_file_in_str(game->pnj[i].path);
    char **script = my_str_to_word_array(buffer, ' ');

    if (game->pnj->seconds >= 0.1) {
        if (game->pnj[i].position.y !=
        my_getnbr(script[game->pnj[i].count + 1]) ||
        game->pnj[i].position.x != my_getnbr(script[game->pnj[i].count])) {
            check_pos(game, i, script);
            sfSprite_setPosition(game->pnj[i].sprite, game->pnj[i].position);
            sfSprite_setTextureRect(game->pnj[i].sprite, game->pnj[i].rect);
            sfClock_restart(game->pnj->clock);
            return (0);
        }
        next_pos(game, i, script);
    }
    return (0);
}
