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
    game->background.sprite =
    init_sprite("ressources/map.png", game->background.texture, 2.3, 2.3);
    position_sprite
    (game->background.sprite, &game->background.pos, -1000, -400);
    game->status = 0;
    return (0);
}
