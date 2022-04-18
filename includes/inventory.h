/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** inventory
*/

#ifndef INVENTORY_H_
    #define INVENTORY_H_

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

typedef struct story_object_s {
    sfTexture *texture;
    sfSprite *sprite;
    sfIntRect rect;
    sfVector2f scale;
    sfVector2f pos;
} story_object_t;

typedef struct inventory_s {
    story_object_t object[5];
} inventory_t;

#endif/* !INVENTORY_H_ */
