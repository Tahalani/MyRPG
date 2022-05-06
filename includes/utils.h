/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** utils
*/

#ifndef UTILS_H_
    #define UTILS_H_

typedef struct element_s {
    sfTexture *texture;
    sfSprite *sprite;
    sfIntRect rect;
    sfVector2f scale;
    sfVector2f pos;
    int max_value;
} element_t;

typedef struct text_s {
    sfText *text;
    int count;
    char *str;
} text_t;

typedef struct shape_s {
    sfRectangleShape *shape;
    sfTexture *texture;
    sfVector2f size;
    sfVector2f pos;
} shape_t;

#endif/* !UTILS_H_ */
