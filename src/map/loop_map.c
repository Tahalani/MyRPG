/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** loop
*/

#include "my.h"
#include "rpg.h"

int check_for_the_good_view(game_t *game)
{
    int i = 0;

    if (game->map[3].check == 1)
        i = 3;
    if (game->map[2].check == 1)
        i = 2;
    if (game->map[1].check == 1)
        i = 1;
    if (game->map[0].check == 1)
        i = 0;
    return i;
}

int mini_map_utils(game_t *game)
{
    game->map_utils->pos.x = game->player.position.x - 100;
    game->map_utils->pos.y = game->player.position.y - 260;
    sfSprite_setPosition(game->map_utils[0].sprite, game->map_utils[0].pos);
    return 0;
}

int map_loop(game_t *game)
{
    int i = check_for_the_good_view(game);

    game->map[i].view = sfView_create();
    sfView_setSize(game->map[i].view, game->map[i].view_size);
    if (game->status == 0)
        sfView_setCenter(game->map[i].view, game->player.position);
    if (game->status == 4)
        sfView_setCenter(game->map[i].view, (sfVector2f){950, 490});
    if (game->status == 5)
        sfView_setCenter(game->map[i].view, (sfVector2f){325, 350});
    if (game->map[0].check == 1)
        sfRenderWindow_drawSprite
        (game->window.window, game->background[0].sprite, NULL);
    if (game->map[1].check == 1)
        sfRenderWindow_drawSprite
        (game->window.window, game->background[1].sprite, NULL);
    sfRenderWindow_setView(game->window.window, game->map[i].view);
    mini_map_utils(game);
    return (0);
}
