/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** inventory
*/

#ifndef INVENTORY_H_
    #define INVENTORY_H_

typedef struct inventory_s {
    sfTexture *texture;
    sfSprite *sprite;
    sfIntRect rect;
    sfVector2f scale;
    sfVector2f pos;
    sfClock *clock;
    float seconds;
} inventory_t;

#endif/* !INVENTORY_H_ */
