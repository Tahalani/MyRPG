/*
** EPITECH PROJECT, 2022
** music
** File description:
** music
*/

#include "my.h"
#include "rpg.h"

sfMusic *music(char *path, int loop)
{
    sfMusic *mus;

    mus = sfMusic_createFromFile(path);
    if (loop == 1)
        sfMusic_setLoop(mus, sfTrue);
    sfMusic_play(mus);
    return (mus);
}
