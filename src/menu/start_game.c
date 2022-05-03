/*
** EPITECH PROJECT, 2022
** analyse_menu
** File description:
** analyse_menu
*/

#include "rpg.h"

int put_key(game_t *game, btn_t *btn)
{
    if (btn->wood_btn[3].status == 1) {
        game->key.down = sfKeyS;
        game->key.up = sfKeyZ;
        game->key.left = sfKeyQ;
        game->key.right = sfKeyD;
        return (0);
    } else if (btn->wood_btn[4].status == 1) {
        game->key.down = sfKeyDown;
        game->key.up = sfKeyUp;
        game->key.left = sfKeyLeft;
        game->key.right = sfKeyRight;
        return (0);
    }
    return (0);
}

int start_game(game_t *game, menu_t *menu, btn_t *btn)
{
    put_key(game, btn);
    initialize_player(menu, &game->player);
    sfMusic_stop(menu->sound.menu);
    sfMusic_play(game->sound.game);
    initialize_player(menu, &game->player);
    sfMusic_stop(menu->sound.menu);
    sfMusic_play(game->sound.game);
    if (menu->map1.status == 1) {
        sfSprite_destroy(game->background[0].sprite);
        game->background[0].sprite = init_sprite
        ("ressources/map/map.png", &game->background[0].texture, 2.3, 2.3);
    }
    if (menu->map2.status == 1) {
        sfSprite_destroy(game->background[0].sprite);
        game->background[0].sprite = init_sprite
        ("ressources/map/map_night.png",
        &game->background[0].texture, 2.3, 2.3);
    }
    position_sprite
    (game->background[0].sprite, &game->background[0].pos, -1000, -400);
    game->status = 0;
    return (0);
}
