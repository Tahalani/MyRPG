/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** init_pnj
*/

#include "my.h"
#include "rpg.h"

int init_pnj(game_t *game, int i, char *path, int offset)
{
    game->pnj[i].path = malloc(sizeof(char) * (my_strlen(path) + 1));
    game->pnj[i].path = path;
    game->pnj[i].offset = offset;
    return (0);
}

int init_script(game_t *game, int i, int max_value)
{
    game->pnj[i].max_value = max_value;
    game->pnj[i].count = 0;
    return (0);
}

int initialize_pnj(game_t *game)
{
    speech_create(game);
    pnj_create(game);
    set_position_pnj(game);
    init_pnj(game, 3, "ressources/pnj/path_pnj_four.txt", 34);
    init_script(game, 3, 136);
    init_pnj(game, 4, "ressources/pnj/path_pnj_five.txt", 31);
    init_script(game, 4, 93);
    init_pnj(game, 5, "ressources/pnj/path_pnj_six.txt", 31);
    init_script(game, 5, 93);
    init_pnj(game, 6, "ressources/pnj/path_pnj_seven.txt", 32);
    init_script(game, 6, 96);
    game->pnj->seconds = 0;
    game->pnj->clock = sfClock_create();
    return (0);
}

int pnj_create(game_t *game)
{
    game->pnj[0].sprite = init_sprite
    ("ressources/pnj/pnj_one.png", game->pnj[0].texture, 2.3, 2.3);
    game->pnj[1].sprite = init_sprite
    ("ressources/pnj/pnj_two.png", game->pnj[1].texture, 2.2, 2.2);
    game->pnj[2].sprite = init_sprite
    ("ressources/pnj/pnj_three.png", game->pnj[2].texture, 2.2, 2.2);
    game->pnj[3].sprite = init_sprite
    ("ressources/pnj/pnj_four.png", game->pnj[3].texture, 2.2, 2.2);
    game->pnj[4].sprite = init_sprite
    ("ressources/pnj/pnj_five.png", game->pnj[4].texture, 2.2, 2.2);
    game->pnj[5].sprite = init_sprite
    ("ressources/pnj/pnj_six.png", game->pnj[5].texture, 2.2, 2.2);
    game->pnj[6].sprite = init_sprite
    ("ressources/pnj/pnj_seven.png", game->pnj[6].texture, 2.2, 2.2);
    return 0;
}

int speech_create(game_t *game)
{
    game->speech[0].sprite = init_sprite
    ("ressources/speech/Flora_speech_one.png", game->speech[0].texture, 1, 1);
    game->speech[1].sprite = init_sprite
    ("ressources/speech/bilal_speech.png", game->speech[1].texture, 1, 1);
    game->speech[2].sprite = init_sprite
    ("ressources/speech/emeric_speech.png", game->speech[2].texture, 1, 1);
    return (0);
}
