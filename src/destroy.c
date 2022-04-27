/*
** EPITECH PROJECT, 2022
** destroy
** File description:
** destroy
*/

#include "my.h"
#include "rpg.h"
#include "menu.h"

void destroy_all_sprite_one(menu_t *menu, game_t *game)
{
    sfSprite_destroy(menu->sign_skin.sprite);
    sfSprite_destroy(menu->map1.sprite);
    sfSprite_destroy(menu->map2.sprite);
    sfSprite_destroy(menu->red_skin.sprite);
    sfSprite_destroy(menu->brown_skin.sprite);
    sfSprite_destroy(menu->blue_skin.sprite);
    sfSprite_destroy(menu->sign_settings.sprite);
    sfSprite_destroy(menu->blue_skin.sprite);
    sfSprite_destroy(menu->sign_settings.sprite);
    sfSprite_destroy(menu->sign_skin.sprite);
    sfMusic_destroy(menu->sound.game);
    sfMusic_destroy(menu->sound.menu);
    sfSprite_destroy(menu->sign_settings.sprite);
    sfRenderWindow_destroy(game->window.window);
    sfSprite_destroy(game->inventory.object[0].sprite);
    sfMusic_destroy(game->sound.game);
    sfSprite_destroy(game->player.sprite);
    sfMusic_destroy(game->sound.dialogue);
}

void destroy_all_sprite_two(btn_t *btn, player_t *player)
{
    sfSprite_destroy(btn->play_btn.sprite);
    sfSprite_destroy(btn->stop_btn.sprite);
    sfSprite_destroy(btn->up_btn.sprite);
    sfSprite_destroy(btn->prev_btn.sprite);
    sfSprite_destroy(btn->next_btn.sprite);
    sfSprite_destroy(btn->music_btn.sprite);
    sfSprite_destroy(btn->about_btn.sprite);
    sfSprite_destroy(btn->down_btn.sprite);
    sfSprite_destroy(btn->music_btn.sprite);
    sfSprite_destroy(btn->wood_btn[0].sprite);
    sfSprite_destroy(btn->wood_btn[1].sprite);
    sfSprite_destroy(btn->wood_btn[2].sprite);
    sfSprite_destroy(btn->wood_btn[3].sprite);
    sfSprite_destroy(btn->wood_btn[4].sprite);
    sfSprite_destroy(player->sprite);
}

void destroy_all(menu_t *menu, btn_t *btn, game_t *game, player_t *player)
{
    destroy_all_sprite_one(menu, game);
    destroy_all_sprite_two(btn, player);
}

    // sfSprite_destroy(game->inventory.object[i].sprite);
    // sfSprite_destroy(game->speech[i].sprite);
    // sfSprite_destroy(game->pnj[i].sprite);
    // sfSprite_destroy(game->inventory.object[i].sprite);
    // sfSprite_destroy(game->inventory.object[i].sprite);
    // sfSprite_destroy(btn->wood_btn[i].sprite);
    // sfSprite_destroy(menu->bg_skin[i].sprite);
    // sfSprite_destroy(menu->bg_square[i].sprite);
    // sfSprite_destroy(menu->bg_skin[i].sprite);
    // sfSprite_destroy(menu->bg_square[i].sprite);
    // sfSprite_destroy(btn->wood_btn[i].sprite);
    // sfSprite_destroy(game->speech[i].sprite);
    // sfSprite_destroy(game->pnj[i].sprite);
    // sfSprite_destroy(btn->wood_btn[i].sprite);
    // sfSprite_destroy(menu->bg_skin[i].sprite);
    // sfSprite_destroy(menu->bg_square[i].sprite);
    // sfSprite_destroy(game->inventory.object[i].sprite);