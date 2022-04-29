/*
** EPITECH PROJECT, 2022
** music
** File description:
** music
*/

#include "my.h"
#include "rpg.h"

int set_music_value(game_t *game)
{
    game->sound.game = music("ressources/music/back_music.ogg", 1);
    game->sound.dialogue = music("ressources/music/sound_dialogue.ogg", 0);
    sfMusic_pause(game->sound.dialogue);
    sfMusic_pause(game->sound.game);
    return (0);
}

sfMusic *music(char *path, int loop)
{
    sfMusic *mus;

    mus = sfMusic_createFromFile(path);
    if (loop == 1)
        sfMusic_setLoop(mus, sfTrue);
    sfMusic_play(mus);
    return (mus);
}
