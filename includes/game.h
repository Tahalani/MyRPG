/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** game
*/

#ifndef GAME_H_
    #define GAME_H_

    #include <SFML/Graphics/RenderWindow.h>
    #include <SFML/Graphics/Transform.h>
    #include <SFML/System/Vector2.h>
    #include <SFML/Graphics/Types.h>
    #include <SFML/Graphics/Rect.h>
    #include <SFML/Window/Mouse.h>
    #include <SFML/Graphics.h>
    #include <SFML/Window.h>
    #include <SFML/Audio.h>
    #include "player.h"
    #include "map.h"

typedef struct window_s {
    sfRenderWindow *window;
    int width;
    int height;
} window_t;

typedef struct event {
    sfEvent event;
} event_t;

typedef struct element_s {
    sfTexture *texture;
    sfSprite *sprite;
    sfIntRect rect;
    sfVector2f scale;
    sfVector2f pos;
    int max_value;
} element_t;

typedef struct music_s {
    sfMusic *game;
    sfMusic *menu;
    sfMusic *page_menu;
} music_t;

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

typedef struct game_s {
    element_t background;
    player_t player;
    window_t window;
    event_t event;
    map_t map[2];
    sfClock *clock;
    music_t sound;
    pnj_t pnj[6];
    float second_clock;
    int status;
} game_t;

#endif/* !GAME_H_ */
