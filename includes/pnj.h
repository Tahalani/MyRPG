/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** pnj
*/

#ifndef PNJ_H_
    #define PNJ_H_

typedef struct speech_s {
    sfTexture *texture;
    sfSprite *sprite;
    sfIntRect rect;
    sfVector2f scale;
    sfVector2f pos;
} speech_t;

typedef struct pnj_s {
    sfTexture *texture;
    sfSprite *sprite;
    sfIntRect rect;
    sfVector2f scale;
    sfVector2f position;
    sfClock *clock;
    float seconds;
    int offset;
    int max_value;
    char *path;
    int count;
} pnj_t;

#endif/* !PNJ_H_ */
