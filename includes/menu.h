/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** menu
*/

#ifndef menu_H_
    #define menu_H_

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
    #include "game.h"

typedef struct btn_s {
    sfTexture *texture;
    sfSprite *sprite;
    sfIntRect rect;
    sfVector2f scale;
    sfVector2f pos;
    int status;
} btn_t;

typedef struct menu_s {
    btn_t play_btn;
    btn_t stop_btn;
    btn_t music_btn;
    btn_t about_btn;
} menu_t;

#endif/* !menu_H_ */