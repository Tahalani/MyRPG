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
    #include <stdbool.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <stdio.h>

typedef struct map_s {
    char **main_map;
    int x_player;
    int y_player;
    sfView *view;
    sfVector2f view_size;
} map_t;

#endif/* !MAP_H_ */
