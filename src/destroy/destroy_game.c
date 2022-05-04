/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** destroy_element
*/

#include "my.h"
#include "rpg.h"
#include "menu.h"

int destroy_sprite_game(game_t *game)
{
    sfSprite_destroy(game->player.sprite);
    sfSprite_destroy(game->player_fight.sprite);
    sfSprite_destroy(game->monster_fight.sprite);
    sfSprite_destroy(game->arena_fight.sprite);
    for (int i = 0; i != 3; i++)
        sfSprite_destroy(game->side_map[i].sprite);
    for (int i = 0; i != 5; i++)
        sfSprite_destroy(game->background[i].sprite);
    for (int i = 0; i != 3; i++)
        sfSprite_destroy(game->life[i].sprite);
    for (int i = 0; i != 6; i++)
        sfSprite_destroy(game->lamp[i].sprite);
    return (0);
}

int destroy_texture_game(game_t *game)
{
    sfTexture_destroy(game->player.texture);
    sfTexture_destroy(game->player_fight.texture);
    sfTexture_destroy(game->monster_fight.texture);
    sfTexture_destroy(game->arena_fight.texture);
    for (int i = 0; i != 3; i++)
        sfTexture_destroy(game->side_map[i].texture);
    for (int i = 0; i != 5; i++)
        sfTexture_destroy(game->background[i].texture);
    for (int i = 0; i != 3; i++)
        sfTexture_destroy(game->life[i].texture);
    for (int i = 0; i != 6; i++)
        sfTexture_destroy(game->lamp[i].texture);
    return (0);
}

int destroy_other_game(game_t *game)
{
    for (int i = 0; i != 4; i++)
        sfView_destroy(game->map[i].view);
    sfClock_destroy(game->arena_fight.clock);
    sfText_destroy(game->coins.text);
    return (0);
}

int destroy_music(game_t *game, menu_t *menu)
{
    sfMusic_destroy(game->sound.page_menu);
    sfMusic_destroy(menu->sound.page_menu);
    sfMusic_destroy(game->sound.dialogue);
    sfMusic_destroy(game->sound.fight);
    sfMusic_destroy(menu->sound.menu);
    sfMusic_destroy(game->sound.game);
    sfMusic_destroy(game->sound.pika);
    return (0);
}

int destroy_all_game(game_t *game)
{
    for (int i = 0; i != 4; i++)
        my_free_array(game->map[i].main_map);
    destroy_texture_game(game);
    destroy_sprite_game(game);
    destroy_other_game(game);
    return (0);
}
