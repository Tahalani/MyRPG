/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** gameplay
*/

#include "my.h"
#include "rpg.h"

int turn_player_fight(game_t *game)
{
    if (sfKeyboard_isKeyPressed(sfKeyA)) {
        game->player_fight.position.x = 210;
        sfSprite_setPosition
        (game->player_fight.sprite, game->player_fight.position);
        move_rect(&game->life[1].rect, 196, 2549, 0);
        move_rect(&game->life[1].rect, 196, 2549, 0);
        sfSprite_setTextureRect(game->life[1].sprite, game->life[1].rect);
        game->monster_fight.life -= 20;
        game->arena_fight.turn++;
    }
    if (sfKeyboard_isKeyPressed(sfKeyS))
        game->arena_fight.turn++;
    return (0);
}

int turn_monster_fight(game_t *game)
{
    sfText_setString(game->timer.text,
    int_to_char(game->player_fight.seconds));
    if (game->player_fight.seconds >= 3) {
        game->monster_fight.position.x = 1190;
        sfSprite_setPosition
        (game->monster_fight.sprite, game->monster_fight.position);
        move_rect(&game->life[0].rect, 196, 2549, 0);
        sfSprite_setTextureRect(game->life[0].sprite, game->life[0].rect);
        game->player_fight.life -= 10;
        game->arena_fight.turn++;
        sfClock_restart(game->player_fight.clock);
    }
    return (0);
}

int gameplay_fight(game_t *game)
{
    if (game->monster_fight.life > 0 && game->player_fight.life > 0) {
        if (game->arena_fight.turn % 2 == 0) {
            game->monster_fight.position = (sfVector2f){1200, -2500};
            sfSprite_setPosition
            (game->monster_fight.sprite, game->monster_fight.position);
            turn_player_fight(game);
            return (0);
        }
        if (game->arena_fight.turn % 2 != 0) {
            game->player_fight.position = (sfVector2f){200, -2800};
            sfSprite_setPosition
            (game->player_fight.sprite, game->player_fight.position);
            turn_monster_fight(game);
            return (0);
        }
    }
    game->arena_fight.life = 1;
    return (0);
}
