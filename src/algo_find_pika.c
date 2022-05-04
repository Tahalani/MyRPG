/*
** EPITECH PROJECT, 2022
** pika pika
** File description:
** pika pika
*/

#include "my.h"
#include "rpg.h"
#include "game.h"
#include "menu.h"

int check_pos_sound(game_t *game)
{
    if (game->player.position.y <= 1400 && game->player.position.y >= 1000)
        sfMusic_setVolume(game->sound.pika, 40.0);
    if (game->player.position.y <= 1000 && game->player.position.y >= 480)
        sfMusic_setVolume(game->sound.pika, 75.0);
    if (game->player.position.y <= 400 && game->player.position.y >= 30)
        sfMusic_setVolume(game->sound.pika, 100.0);
    if (game->player.position.y <= 30 && game->player.position.y >= -100)
        sfMusic_setVolume(game->sound.pika, 50.0);
    if (game->player.position.y <= -100)
        sfMusic_setVolume(game->sound.pika, 15.0);
    if (game->player.position.y > 1400)
        sfMusic_setVolume(game->sound.pika, 15.0);
    return (0);
}

int check_pos_pika(game_t *game)
{
    if (game->player.position.x >= 1419 && game->player.position.x <= 1475
    && game->player.position.y <= 425 && game->player.position.y >= 256 &&
    game->story_steps == 6) {
        game->story_steps = 7;
    }
    return (0);
}

int find_pika(game_t *game)
{
    if (game->story_steps == 6) {
        check_pos_sound(game);
    }
    check_pos_pika(game);
    return (0);
}
