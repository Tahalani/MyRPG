/*
** EPITECH PROJECT, 2021
** projet.h
** File description:
** the .h of project
*/

#ifndef PROJET_H_
    #define PROJET_H_

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

typedef struct window_s {
    sfRenderWindow *window;
    int width;
    int height;
} window_t;

typedef struct event {
    sfEvent event;
} event_t;

typedef struct game_s {
    window_t window;
    event_t event;
} game_t;

// WINDOW.C //
sfRenderWindow *initialize_window(int width, int height, int bitsPerPixel);

// EVENT.C //
int analyse_events(game_t *game);

// MY_RPG.C //
int initialize_value(game_t *game);
int my_rpg(game_t *game);

// DISPLAY.C //
int function_to_display(game_t *game);

#endif/* !PROJET_H_ */
