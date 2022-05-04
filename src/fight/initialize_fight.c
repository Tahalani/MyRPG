/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** initialize_fight
*/

#include "my.h"
#include "rpg.h"

int initialize_path_fight(game_t *game)
{
    game->arena_fight.sprite = init_sprite
    ("ressources/fight/arena.jpg", game->arena_fight.texture, 1, 1);
    game->player_fight.sprite = init_sprite
    ("ressources/fight/player_fight.png",
    game->player_fight.texture, 2.4, 2.4);
    game->monster_fight.sprite = init_sprite
    ("ressources/fight/monster_fight.png",
    game->monster_fight.texture, 0.4, 0.4);
    game->life[0].sprite = init_sprite
    ("ressources/fight/life_bar.png", game->life[0].texture, 4, 2);
    game->life[1].sprite = init_sprite
    ("ressources/fight/life_bar.png", game->life[1].texture, -4, -2);
    game->life[2].sprite = init_sprite
    ("ressources/fight/pokeball.png", game->life[2].texture, 0.5, 0.5);
    game->fight_status[0].sprite = init_sprite
    ("ressources/fight/victory.png", game->fight_status[0].texture, 4.1, 4.2);
    return (0);
}

int initialize_fight(game_t *game)
{
    game->sound.status_fight = 0;
    game->arena_fight.clock = sfClock_create();
    game->arena_fight.seconds = 0;
    game->sound.fight = music("ressources/music/ost_fight.ogg", 1);
    sfMusic_pause(game->sound.fight);
    initialize_path_fight(game);
    set_position_fight(game);
    set_rect_fight(game);
    return (0);
}
