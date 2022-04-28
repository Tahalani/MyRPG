/*
** EPITECH PROJECT, 2022
** destroy
** File description:
** destroy
*/

#include "my.h"
#include "rpg.h"
#include "menu.h"

void destroy_all_sprite(menu_t *menu, game_t *game)
{
    sfSprite_destroy(menu->map1.sprite);
    sfSprite_destroy(menu->map2.sprite);
    sfSprite_destroy(menu->red_skin.sprite);
    sfSprite_destroy(menu->brown_skin.sprite);
    sfSprite_destroy(menu->sign_settings.sprite);
    sfSprite_destroy(menu->blue_skin.sprite);
    sfSprite_destroy(menu->sign_skin.sprite);
    sfMusic_destroy(menu->sound.game);
    sfMusic_destroy(menu->sound.menu);
    sfSprite_destroy(game->player.sprite);
    sfMusic_destroy(game->sound.dialogue);
    sfRenderWindow_destroy(game->window.window);
}

void destroy_all_sprite_two(btn_t *btn)
{
    sfSprite_destroy(btn->play_btn.sprite);
    sfSprite_destroy(btn->stop_btn.sprite);
    sfSprite_destroy(btn->up_btn.sprite);
    sfSprite_destroy(btn->prev_btn.sprite);
    sfSprite_destroy(btn->next_btn.sprite);
    sfSprite_destroy(btn->about_btn.sprite);
    sfSprite_destroy(btn->down_btn.sprite);
    sfSprite_destroy(btn->music_btn.sprite);
    sfSprite_destroy(btn->wood_btn[0].sprite);
    sfSprite_destroy(btn->wood_btn[1].sprite);
    sfSprite_destroy(btn->wood_btn[2].sprite);
    sfSprite_destroy(btn->wood_btn[3].sprite);
    sfSprite_destroy(btn->wood_btn[4].sprite);
}

void destroy_all_texture(menu_t *menu, game_t *game)
{
    sfTexture_destroy(menu->map1.texture);
    sfTexture_destroy(menu->map2.texture);
    sfTexture_destroy(menu->red_skin.texture);
    sfTexture_destroy(menu->brown_skin.texture);
    sfTexture_destroy(menu->sign_settings.texture);
    sfTexture_destroy(menu->blue_skin.texture);
    sfTexture_destroy(menu->sign_skin.texture);
    sfTexture_destroy(game->player.texture);
}

void destroy_all_texture_two(btn_t *btn)
{
    sfTexture_destroy(btn->play_btn.texture);
    sfTexture_destroy(btn->stop_btn.texture);
    sfTexture_destroy(btn->up_btn.texture);
    sfTexture_destroy(btn->prev_btn.texture);
    sfTexture_destroy(btn->next_btn.texture);
    sfTexture_destroy(btn->about_btn.texture);
    sfTexture_destroy(btn->down_btn.texture);
    sfTexture_destroy(btn->music_btn.texture);
    sfTexture_destroy(btn->wood_btn[0].texture);
    sfTexture_destroy(btn->wood_btn[1].texture);
    sfTexture_destroy(btn->wood_btn[2].texture);
    sfTexture_destroy(btn->wood_btn[3].texture);
    sfTexture_destroy(btn->wood_btn[4].texture);
}

void destroy_all(menu_t *menu, btn_t *btn, game_t *game)
{
    destroy_all_sprite(menu, game);
    destroy_all_sprite_two(btn);
    loop_for_destroy(game, menu);
}
