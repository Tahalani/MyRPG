/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** destroy_btn
*/

#include "my.h"
#include "rpg.h"
#include "menu.h"

int destroy_sprite_btn(btn_t *btn)
{
    for (int i = 0; i != 7; i++)
        sfSprite_destroy(btn->wood_btn[i].sprite);
    sfSprite_destroy(btn->play_btn.sprite);
    sfSprite_destroy(btn->stop_btn.sprite);
    sfSprite_destroy(btn->music_btn.sprite);
    sfSprite_destroy(btn->about_btn.sprite);
    sfSprite_destroy(btn->next_btn.sprite);
    sfSprite_destroy(btn->prev_btn.sprite);
    sfSprite_destroy(btn->down_btn.sprite);
    sfSprite_destroy(btn->up_btn.sprite);
    return (0);
}

int destroy_texture_btn(btn_t *btn)
{
    for (int i = 0; i != 7; i++)
        sfTexture_destroy(btn->wood_btn[i].texture);
    sfTexture_destroy(btn->play_btn.texture);
    sfTexture_destroy(btn->stop_btn.texture);
    sfTexture_destroy(btn->music_btn.texture);
    sfTexture_destroy(btn->about_btn.texture);
    sfTexture_destroy(btn->next_btn.texture);
    sfTexture_destroy(btn->prev_btn.texture);
    sfTexture_destroy(btn->down_btn.texture);
    sfTexture_destroy(btn->up_btn.texture);
    return (0);
}

int destroy_all_btn(btn_t *btn)
{
    destroy_sprite_btn(btn);
    destroy_texture_btn(btn);
    return (0);
}
