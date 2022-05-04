/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** destroy_inventory
*/

#include "my.h"
#include "rpg.h"
#include "menu.h"

int destroy_sprite_inventory(inventory_t *inventory)
{
    for (int i = 0; i != 4; i++)
        sfSprite_destroy(inventory[i].sprite);
    return (0);
}

int destroy_texture_inventory(inventory_t *inventory)
{
    for (int i = 0; i != 4; i++)
        sfTexture_destroy(inventory[i].texture);
    return (0);
}

int destroy_all_inventory(inventory_t *inventory)
{
    destroy_texture_inventory(inventory);
    destroy_sprite_inventory(inventory);
    return (0);
}
