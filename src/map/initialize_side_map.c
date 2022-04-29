/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** initialize_side_map
*/

#include "my.h"
#include "rpg.h"

int create_side_map(game_t *game)
{
    game->side_map[0].sprite = init_sprite("ressources/map/left_main_map.png",
    game->side_map[0].texture, 3, 3);
    game->side_map[1].sprite = init_sprite("ressources/map/top_main_map.png",
    game->side_map[1].texture, 3, 3);
    game->side_map[2].sprite = init_sprite("ressources/map/right_main_map.png",
    game->side_map[2].texture, 3, 3);
    position_sprite
    (game->side_map[0].sprite, &game->side_map[0].pos, -928, -3490);
    position_sprite
    (game->side_map[1].sprite, &game->side_map[1].pos, -4210, -372);
    position_sprite
    (game->side_map[2].sprite, &game->side_map[2].pos, -940, 1650);
    return 0;
}
