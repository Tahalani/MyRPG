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
    if (game->pnj[i].path == NULL)
        return (-1);
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
    path_script_pnj(game);
    init_script(game, 3, 136);
    init_script(game, 4, 93);
    init_script(game, 5, 93);
    init_script(game, 6, 96);
    init_script(game, 7, 102);
    init_script(game, 8, 99);
    init_script(game, 9, 96);
    init_script(game, 10, 99);
    init_script(game, 11, 147);
    game->pnj->clock = sfClock_create();
    game->pnj->seconds = 0;
    return (0);
}

int pnj_create(game_t *game)
{
    game->pnj[0].sprite = init_sprite
    ("ressources/pnj/pnj_one.png", &game->pnj[0].texture, 2.3, 2.3);
    game->pnj[1].sprite = init_sprite
    ("ressources/pnj/pnj_two.png", &game->pnj[1].texture, 2.2, 2.2);
    game->pnj[2].sprite = init_sprite
    ("ressources/pnj/pnj_three.png", &game->pnj[2].texture, 2.2, 2.2);
    game->pnj[3].sprite = init_sprite
    ("ressources/pnj/pnj_four.png", &game->pnj[3].texture, 2.2, 2.2);
    game->pnj[4].sprite = init_sprite
    ("ressources/pnj/pnj_five.png", &game->pnj[4].texture, 2.2, 2.2);
    pnj_create_two(game);
    return (0);
}

int speech_create(game_t *game)
{
    game->speech[0].sprite = init_sprite
    ("ressources/speech/Flora_speech_one.png", &game->speech[0].texture, 1, 1);
    game->speech[1].sprite = init_sprite
    ("ressources/speech/bilal_speech.png", &game->speech[1].texture, 1, 1);
    game->speech[2].sprite = init_sprite
    ("ressources/speech/emeric_speech.png", &game->speech[2].texture, 1, 1);
    game->speech[3].sprite = init_sprite
    ("ressources/speech/Flora_speech_two.png", &game->speech[3].texture, 1, 1);
    game->speech[4].sprite = init_sprite
    ("ressources/speech/bilal_speech_two.png", &game->speech[4].texture, 1, 1);
    game->speech[5].sprite = init_sprite
    ("ressources/speech/bilal_speech_three.png",
    &game->speech[5].texture, 1, 1);
    game->speech[6].sprite = init_sprite
    ("ressources/speech/nelly_speech_one.png", &game->speech[6].texture, 1, 1);
    game->speech[7].sprite = init_sprite
    ("ressources/speech/nelly_speech_two.png", &game->speech[7].texture, 1, 1);
    game->speech[8].sprite = init_sprite
    ("ressources/speech/fabio_speech_one.png", &game->speech[8].texture, 1, 1);
    game->speech[9].sprite = init_sprite
    ("ressources/speech/fabio_speech_two.png", &game->speech[9].texture, 1, 1);
    return (0);
}
