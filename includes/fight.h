/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** fight
*/

#ifndef FIGHT_H_
    #define FIGHT_H_

    #include <SFML/Graphics/RenderWindow.h>
    #include <SFML/Graphics/Transform.h>
    #include <SFML/System/Vector2.h>
    #include <SFML/Graphics/Types.h>
    #include <SFML/Graphics/Rect.h>
    #include <SFML/Window/Mouse.h>
    #include <SFML/Graphics.h>
    #include <SFML/Window.h>
    #include <SFML/Audio.h>
    #include <stdbool.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <stdio.h>

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
} fight_t;

#endif/* !FIGHT_H_ */
