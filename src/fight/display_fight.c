/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** display_fight
*/

#include "my.h"
#include "rpg.h"

int display_elem_fight(game_t *game)
{
    sfRenderWindow_drawSprite
    (game->window.window, game->arena_fight.sprite, NULL);
    sfRenderWindow_drawSprite
    (game->window.window, game->player_fight.sprite, NULL);
    sfRenderWindow_drawSprite
    (game->window.window, game->monster_fight.sprite, NULL);
    return (0);
}

int display_fight(game_t *game)
{
    if (game->monster_fight.seconds >= 0.05) {
        move_rect_victory(game);
        move_rect_game_over(game);
        sfClock_restart(game->monster_fight.clock);
    }
    display_elem_fight(game);
    for (int i = 0; i < 3; i++)
        sfRenderWindow_drawSprite
        (game->window.window, game->life[i].sprite, NULL);
    if (game->monster_fight.life <= 0)
        sfRenderWindow_drawSprite
        (game->window.window, game->fight_status[0].sprite, NULL);
    else if (game->player_fight.life <= 0)
    sfRenderWindow_drawSprite
    (game->window.window, game->fight_status[1].sprite, NULL);
    sfRenderWindow_display(game->window.window);
    return (0);
}
