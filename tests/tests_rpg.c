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

Test(function_to_display, test_display)
{
    game_t *game = malloc(sizeof(game_t));

    game->window.window = initialize_window(1920, 1080, 32);
    cr_assert_eq(function_to_display(game), 0);
}

Test(analyse_events, test_event_one)
{
    game_t *game = malloc(sizeof(game_t));

    game->window.window = initialize_window(1920, 1080, 32);
    cr_assert_eq(analyse_events(game), 0);
}

Test(initialize_value, test_initialize)
{
    game_t *game = malloc(sizeof(game_t));

    game->window.window = initialize_window(1920, 1080, 32);
    cr_assert_eq(initialize_value(game), 0);
}
