/*
** EPITECH PROJECT, 2022
** destroy
** File description:
** destroy
*/

#include "my.h"
#include "rpg.h"
#include "menu.h"

int destroy_sprite_menu(menu_t *menu)
{
    for (int i = 0; i != 4; i++)
        sfSprite_destroy(menu->bg_skin[i].sprite);
    for (int i = 0; i != 3; i++)
        sfSprite_destroy(menu->bg_square[i].sprite);
    sfSprite_destroy(menu->cursor.sprite);
    sfSprite_destroy(menu->red_skin.sprite);
    sfSprite_destroy(menu->brown_skin.sprite);
    sfSprite_destroy(menu->blue_skin.sprite);
    sfSprite_destroy(menu->sign_settings.sprite);
    sfSprite_destroy(menu->sign_skin.sprite);
    sfSprite_destroy(menu->map1.sprite);
    sfSprite_destroy(menu->map2.sprite);
    sfSprite_destroy(menu->rules.sprite);
    return (0);
}

int destroy_texture_menu(menu_t *menu)
{
    for (int i = 0; i != 21; i++)
        sfTexture_destroy(menu->shape_btn[i].texture);
    for (int i = 0; i != 4; i++)
        sfTexture_destroy(menu->bg_skin[i].texture);
    for (int i = 0; i != 3; i++)
        sfTexture_destroy(menu->bg_square[i].texture);
    sfTexture_destroy(menu->cursor.texture);
    sfTexture_destroy(menu->red_skin.texture);
    sfTexture_destroy(menu->brown_skin.texture);
    sfTexture_destroy(menu->blue_skin.texture);
    sfTexture_destroy(menu->sign_settings.texture);
    sfTexture_destroy(menu->sign_skin.texture);
    sfTexture_destroy(menu->map1.texture);
    sfTexture_destroy(menu->map2.texture);
    sfTexture_destroy(menu->rules.texture);
    return (0);
}

int destroy_other_menu(menu_t *menu)
{
    sfText_destroy(menu->volum.text);
    sfClock_destroy(menu->clock);
    return (0);
}

int destroy_all_menu(menu_t *menu)
{
    destroy_sprite_menu(menu);
    destroy_texture_menu(menu);
    destroy_other_menu(menu);
    return (0);
}
