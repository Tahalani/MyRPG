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
    for (int i = 0; i != 3; i++)
        sfSprite_destroy(menu->bg_skin[i].sprite);
    for (int i = 0; i != 2; i++)
        sfSprite_destroy(menu->bg_square[i].sprite);
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
    for (int i = 0; i != 18; i++)
        sfRectangleShape_destroy(menu->shape_btn[i].shape);
    for (int i = 19; i != 21; i++)
        sfRectangleShape_destroy(menu->shape_btn[i].shape);
    destroy_texture_menu(menu);
    destroy_sprite_menu(menu);
    destroy_other_menu(menu);
    return (0);
}
