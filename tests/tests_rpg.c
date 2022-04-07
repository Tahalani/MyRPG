/*
** EPITECH PROJECT, 2021
** test
** File description:
** test units
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"
#include "rpg.h"

Test(initialize_value, test_initialize)
{
    game_t *game = malloc(sizeof(game_t));

    game->window.window = initialize_window(1920, 1080, 32);
    cr_assert_eq(initialize_value(game), 0);
}

Test(move_rect, test_rect_one)
{
    game_t *game = malloc(sizeof(game_t));

    game->window.window = initialize_window(1920, 1080, 32);
    cr_assert_eq(move_rect(&game->player.rect, 64, 256, 128), 0);
}

Test(move_rect, test_rect_two)
{
    game_t *game = malloc(sizeof(game_t));

    game->window.window = initialize_window(1920, 1080, 32);
    cr_assert_eq(move_rect(&game->player.rect, 256, 256, 128), 0);
}

Test(my_rpg, test_rpg)
{
    game_t *game = malloc(sizeof(game_t));
    menu_t *menu = malloc(sizeof(menu_t));

    game->window.window = initialize_window(1920, 1080, 32);
    cr_assert_eq(my_rpg(game, menu), 0);
}
