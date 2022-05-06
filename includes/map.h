/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** map
*/

#ifndef MAP_H_
    #define MAP_H_

    #include <SFML/Graphics/RenderWindow.h>
    #include <SFML/Graphics/Transform.h>
    #include <SFML/System/Vector2.h>
    #include <SFML/Graphics/Types.h>
    #include <SFML/Graphics/Rect.h>
    #include <SFML/Window/Mouse.h>
    #include <SFML/Graphics.h>
    #include <SFML/Window.h>
    #include <SFML/Audio.h>

typedef struct coin_anim_s {
    sfTexture *texture;
    sfSprite *sprite;
    sfIntRect rect;
    sfVector2f scale;
    sfVector2f position;
} coin_anim_t;

typedef struct lamp_s {
    sfTexture *texture;
    sfSprite *sprite;
    sfIntRect rect;
    sfVector2f scale;
    sfVector2f position;
} lamp_t;

typedef struct mini_map_s {
    sfFloatRect rect;
    sfView *view;
} mini_map_t;

typedef struct map_s {
    char **main_map;
    int x_player;
    int y_player;
    sfView *view;
    sfVector2f view_size;
    int check;
} map_t;

#endif/* !MAP_H_ */
