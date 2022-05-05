/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** animation
*/

#include "my.h"
#include "rpg.h"

static int move_rect_animation(game_t *game)
{
    game->transition.rect.left += 800;
    if (game->transition.rect.left == 8000) {
        game->transition.rect.left = 0;
        game->transition.rect.top += 600;
        if (game->transition.rect.top >= 1800)
            game->transition.rect.top = 0;
    }
    sfSprite_setTextureRect
    (game->transition.sprite, game->transition.rect);
    return (0);
}

int initialize_animation(game_t *game)
{
    game->clock_load = sfClock_create();
    game->inventory[0].clock = sfClock_create();
    game->inventory[0].seconds = 0;
    game->second_loading = 0;
    game->check_load = 1;
    game->transition.sprite =
    init_sprite("ressources/map/loading_screen.png",
    &game->transition.texture, 2.4, 2.4);
    position_sprite(game->transition.sprite, &game->transition.pos, 0, 0);
    game->transition.rect = (sfIntRect){800, 600, 800, 600};
    return (0);
}

int display_animation(game_t *game)
{
    if (game->second_loading <= 2.5) {
        sfRenderWindow_drawSprite
        (game->window.window, game->transition.sprite, NULL);
        game->status = 5;
    }
    if (game->second_loading >= 2.5 && game->second_loading <= 3)
        game->status = 0;
    return (0);
}

int loop_animation(game_t *game)
{
    game->transition.pos =
    (sfVector2f){game->player.position.x - 950, game->player.position.y - 760};
    sfSprite_setPosition(game->transition.sprite, game->transition.pos);
    game->second_loading =
    sfTime_asSeconds(sfClock_getElapsedTime(game->clock_load));
    if (game->inventory[0].seconds >= 0.01) {
        move_rect_animation(game);
        sfClock_restart(game->inventory[0].clock);
    }
    return (0);
}
