/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** path_sprite
*/

#include "my.h"
#include "rpg.h"

int set_path_menu(menu_t *menu)
{
    menu->play_btn.sprite =
    init_sprite("ressources/menu/play_btn.png", menu->play_btn.texture, 1, 1);
    menu->stop_btn.sprite =
    init_sprite("ressources/menu/stop_btn.png", menu->stop_btn.texture, 1, 1);
    return (0);
}

int set_path_sprite(game_t *game)
{
    game->background.sprite =
    init_sprite("ressources/menu/bg.jpg", game->background.texture, 1, 1);
    if (game->player.check_player == 0)
        game->player.sprite =
        init_sprite("ressources/player.png", game->player.texture, 2, 2);
    if (game->player.check_player == 1)
        game->player.sprite =
        init_sprite("ressources/player_2.png", game->player.texture, 2, 2);
    if (game->player.check_player == 2)
        game->player.sprite =
        init_sprite("ressources/player_3.png", game->player.texture, 2, 2);
    return (0);
}
