/*
** EPITECH PROJECT, 2022
** analyse_menu
** File description:
** analyse_menu
*/

#include "rpg.h"

int start_game(game_t *game, menu_t *menu)
{
    sfMusic_stop(menu->sound.menu);
    game->sound.game = music("ressources/music/back_music.ogg", 1);
    game->background[0].sprite =
    init_sprite
    ("ressources/map/map.png", game->background[0].texture, 2.3, 2.3);
    position_sprite
    (game->background[0].sprite, &game->background[0].pos, -1000, -400);
    game->status = 0;
    return (0);
}
