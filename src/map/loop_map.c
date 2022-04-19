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

    if (game->map[2].check == 1)
        i = 2;
    if (game->map[1].check == 1)
        i = 1;
    if (game->map[0].check == 1)
        i = 0;
    return i;
}

int map_loop(game_t *game)
{
    int i = check_for_the_good_view(game);

    game->map[i].view = sfView_create();
    sfView_setSize(game->map[i].view, game->map[i].view_size);
    sfView_setCenter(game->map[i].view, game->player.position);
    sfRenderWindow_setView (game->window.window, game->map[i].view);
    if (game->map[0].check == 1) {
        sfRenderWindow_drawSprite
        (game->window.window, game->background[0].sprite, NULL);
        display_pnj(game);
    }
    if (game->map[1].check == 1) {
        sfRenderWindow_drawSprite
        (game->window.window, game->background[1].sprite, NULL);
    }
    return (0);
}
