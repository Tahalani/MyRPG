/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** fight
*/

#ifndef FIGHT_H_
    #define FIGHT_H_

typedef struct fight_s {
    sfTexture *texture;
    sfSprite *sprite;
    sfIntRect rect;
    sfVector2f scale;
    sfVector2f position;
    int life;
    sfView *view;
    sfClock *clock;
    float seconds;
    int turn;
} fight_t;

#endif/* !FIGHT_H_ */
