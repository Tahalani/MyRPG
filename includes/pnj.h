/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** pnj
*/

#ifndef PNJ_H_
    #define PNJ_H_

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
