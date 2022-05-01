/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** destroy_pnj
*/

#include "my.h"
#include "rpg.h"
#include "menu.h"

int destroy_sprite_pnj(pnj_t *pnj, speech_t *speech)
{
    for (int i = 0; i != 11; i++)
        sfSprite_destroy(pnj[i].sprite);
    for (int i = 0; i != 8; i++)
        sfSprite_destroy(speech[i].sprite);
    return (0);
}

int destroy_texture_pnj(pnj_t *pnj, speech_t *speech)
{
    for (int i = 0; i != 11; i++)
        sfTexture_destroy(pnj[i].texture);
    for (int i = 0; i != 8; i++)
        sfTexture_destroy(speech[i].texture);
    return (0);
}

int destroy_other_pnj(pnj_t *pnj)
{
    sfClock_destroy(pnj->clock);
    return (0);
}

int destroy_all_pnj(pnj_t *pnj, speech_t *speech)
{
    destroy_sprite_pnj(pnj, speech);
    // destroy_texture_pnj(pnj, speech);
    destroy_other_pnj(pnj);
    return (0);
}
