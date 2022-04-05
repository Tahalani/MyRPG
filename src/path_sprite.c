/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** path_sprite
*/

#include "my.h"
#include "rpg.h"

int set_path_sprite(game_t *game)
{
    game->map.sprite =
    init_sprite("ressources/map.png", game->map.texture, 2.6, 2.6);
    game->player.sprite =
    init_sprite("ressources/player.png", game->player.texture, 2, 2);
    return (0);
}
