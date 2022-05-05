/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** rect_fight
*/

#include "my.h"
#include "rpg.h"

int move_rect_player_fight(game_t *game)
{
    game->player_fight.rect.left += 344;
    if (game->player_fight.rect.left == 3440) {
        game->player_fight.rect.left = 0;
        game->player_fight.rect.top += 332;
        if (game->player_fight.rect.top >= 1660)
            game->player_fight.rect.top = 0;
    }
    sfSprite_setTextureRect
    (game->player_fight.sprite, game->player_fight.rect);
    return (0);
}

int move_rect_monster_fight(game_t *game)
{
    game->monster_fight.rect.left += 1055;
    if (game->monster_fight.rect.left == 10550) {
        game->monster_fight.rect.left = 0;
        game->monster_fight.rect.top += 949;
        if (game->monster_fight.rect.top >= 5694)
            game->monster_fight.rect.top = 0;
    }
    sfSprite_setTextureRect
    (game->monster_fight.sprite, game->monster_fight.rect);
    return (0);
}

int move_rect_victory(game_t *game)
{
    game->fight_status[0].rect.left += 480;
    if (game->fight_status[0].rect.left == 2400) {
        game->fight_status[0].rect.left = 0;
        game->fight_status[0].rect.top += 268;
        if (game->fight_status[0].rect.top >= 1340)
            game->fight_status[0].rect.top = 0;
    }
    sfSprite_setTextureRect
    (game->fight_status[0].sprite, game->fight_status[0].rect);
    return (0);
}

int move_rect_game_over(game_t *game)
{
    game->fight_status[1].rect.left += 480;
    if (game->fight_status[1].rect.left == 1920) {
        game->fight_status[1].rect.left = 0;
        game->fight_status[1].rect.top += 262;
        if (game->fight_status[1].rect.top >= 1048)
            game->fight_status[1].rect.top = 0;
    }
    sfSprite_setTextureRect
    (game->fight_status[1].sprite, game->fight_status[1].rect);
    return (0);
}

void set_rect_fight(game_t *game)
{
    game->player_fight.rect = (sfIntRect){0, 0, 344, 332};
    game->monster_fight.rect = (sfIntRect){0, 0, 1055, 949};
    game->arena_fight.rect = (sfIntRect){0, 0, 1920, 1080};
    game->fight_status[0].rect = (sfIntRect){0, 0, 480, 268};
    game->fight_status[1].rect = (sfIntRect){0, 0, 480, 268};
    game->life[0].rect = (sfIntRect){0, 0, 196, 98};
    game->life[1].rect = (sfIntRect){0, 0, 196, 98};
    game->life[2].rect = (sfIntRect){0, 0, 256, 256};
    sfSprite_setTextureRect
    (game->player_fight.sprite, game->player_fight.rect);
    sfSprite_setTextureRect
    (game->monster_fight.sprite, game->monster_fight.rect);
    sfSprite_setTextureRect
    (game->arena_fight.sprite, game->arena_fight.rect);
    for (int i = 0; i != 2; ++i)
        sfSprite_setTextureRect(game->fight_status[i].sprite,
    game->fight_status[i].rect);
    sfSprite_setTextureRect(game->life[0].sprite, game->life[0].rect);
    sfSprite_setTextureRect(game->life[1].sprite, game->life[1].rect);
    sfSprite_setTextureRect(game->life[2].sprite, game->life[2].rect);
}
