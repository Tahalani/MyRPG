/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** my_rpg
*/

#include "my.h"
#include "rpg.h"
#include "game.h"
#include "menu.h"

int before_loop(game_t *game, menu_t *menu, btn_t *btn)
{
    initialize_value(game);
    initialize_map(game);
    initialize_menu(menu, btn);
    initialize_pnj(game);
    initialize_fight(game);
    initialize_story_object(game);
    return (0);
}

int in_loop(game_t *game)
{
    if (game->status == 5) {
        analyse_events_pause(game);
        inventory_loop(game);
    }
    if (game->status == 0) {
        game->second_clock =
        sfTime_asSeconds(sfClock_getElapsedTime(game->clock));
        player_loop(&game->player);
        acces_to_church_map(game);
        acces_to_top_map(game);
        acces_to_castle_map(game);
        pnj_loop(game);
        analyse_events(game);
        map_loop(game);
        acces_fight(game);
        function_to_display(game);
    }
    if (game->status == 6) {
        analyse_events_pause(game);
        fight_loop(game);
    }
    sfRenderWindow_drawSprite
    (game->window.window, game->arena_fight.sprite, NULL);
    return (0);
}

int initialize_value(game_t *game)
{
    game->second_clock = 0.00;
    game->clock = sfClock_create();
    game->status = 2;
    game->story_steps = 0;
    game->window.width = 1920;
    game->window.height = 1080;
    game->coins.count = 0;
    game->player.sprite =
    init_sprite("ressources/player/player.png", game->player.texture, 2, 2);
    game->sound.game = music("ressources/music/back_music.ogg", 1);
    game->sound.dialogue = music("ressources/music/sound_dialogue.ogg", 0);
    sfMusic_pause(game->sound.dialogue);
    sfMusic_pause(game->sound.game);
    for (int i = 0; i <= 3; i++)
        game->map[i].check = 0;
    game->map[0].check = 1;
    game->background[4].sprite =
    init_sprite("ressources/menu/bg.jpg", game->background[4].texture, 1, 1);
    position_sprite
    (game->background[4].sprite, &game->background[4].pos, 0, 0);
    return (0);
}

int my_rpg(game_t *game, menu_t *menu, btn_t *btn)
{
    before_loop(game, menu, btn);
    game->window.window =
    initialize_window(game->window.width, game->window.height, 30);
    while (sfRenderWindow_isOpen(game->window.window)) {
        if (game->status == 0 || game->status == 5 || game->status == 6)
            in_loop(game);
        else if (game->status != 0)
            loop_menu(menu, game, btn);
    }
    destroy_all(menu, btn, game);
    return (0);
}
