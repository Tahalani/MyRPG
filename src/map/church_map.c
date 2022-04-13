/*
** EPITECH PROJECT, 2022
** original_rpg
** File description:
** church_map
*/

#include "map.h"
#include "rpg.h"

int initialize_map_church(game_t *game)
{
    game->background.sprite =
    init_sprite("ressources/menu/bg.jpg", game->background.texture, 1, 1);
    game->map[1].main_map = map_create("ressources/map/main_map.txt");
    game->map[1].x_player = 14;
    game->map[1].y_player = 29;
    game->map[1].view_size = (sfVector2f){1745, 981};
    position_sprite(game->background.sprite, &game->background.pos, 0, 0);
    return (0);
}

int acces_to_church_map(game_t *game)
{
    if (game->map[1].x_player == 22 && game->map[1].y_player == 4) {
        
    }

}