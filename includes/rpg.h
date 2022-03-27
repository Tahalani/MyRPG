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

typedef struct element_s {
    sfTexture *texture;
    sfSprite *sprite;
    sfIntRect rect;
    sfVector2f scale;
    sfVector2f pos;
    int max_value;
} element_t;

typedef struct player_s {
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f scale;
    sfVector2f position;
    sfIntRect rect;
} player_t;

typedef struct game_s {
    element_t map;
    player_t player;
    window_t window;
    event_t event;
    sfClock *clock;
} game_t;

// PLAYER //
int move_rect(sfIntRect *rect, int offset, int max_value, int top);
int position_sprite(sfVector2f *position, int x, int y);
int run_player(sfSprite *sprite, sfVector2f *position, char check);
int player_loop(game_t *game);

// WINDOW.C //
sfRenderWindow *initialize_window(int width, int height, int bitsPerPixel);

// EVENT.C //
int analyse_move_player(game_t *game);
int analyse_events(game_t *game);

// MY_RPG.C //
int initialize_value(game_t *game);
int my_rpg(game_t *game);

// PATH_SPRITE.C //
sfSprite *init_sprite(char *path, sfTexture* texture, float x, float y);
int set_path_sprite(game_t *game);

// DISPLAY.C //
int function_to_display(game_t *game);

#endif/* !PROJET_H_ */
