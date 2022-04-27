/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** rect_fight
*/

#include "my.h"
#include "rpg.h"

int set_rect_fight(game_t *game)
{
    game->player_fight.rect = (sfIntRect){0, 0, 344, 332};
    game->monster_fight.rect = (sfIntRect){0, 0, 1055, 949};
    game->arena_fight.rect = (sfIntRect){0, 0, 398, 240};
    sfSprite_setTextureRect(game->player_fight.sprite, game->player_fight.rect);
    sfSprite_setTextureRect(game->monster_fight.sprite, game->monster_fight.rect);
    sfSprite_setTextureRect(game->arena_fight.sprite, game->player_fight.rect);
    return (0);
}
