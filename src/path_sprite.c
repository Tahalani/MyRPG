/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** path_sprite
*/

#include "my.h"
#include "rpg.h"

sfSprite *init_sprite(char *path, sfTexture* texture, float x, float y)
{
    sfSprite* sprite;
    sfVector2f scale = {x, y};

    texture = sfTexture_createFromFile(path, NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfFalse);
    sfSprite_setPosition(sprite, (sfVector2f){0, 0});
    sfSprite_setScale(sprite, scale);
    return (sprite);
}

int set_path_sprite(game_t *game)
{
    game->map.sprite =
    init_sprite("ressources/map.png", game->map.texture, 1.8028169, 1.40625);
    game->player.sprite =
    init_sprite("ressources/player.png", game->player.texture, 1, 1);
    return (0);
}
