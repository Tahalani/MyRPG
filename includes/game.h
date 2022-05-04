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
    #include "inventory.h"
    #include "fight.h"
    #include "pnj.h"
    #include "utils.h"

typedef struct window_s {
    sfRenderWindow *window;
    int width;
    int height;
} window_t;

typedef struct event {
    sfEvent event;
} event_t;

typedef struct music_s {
    sfMusic *game;
    sfMusic *menu;
    sfMusic *page_menu;
    sfMusic *dialogue;
    sfMusic *fight;
    int status;
    int status_fight;
} music_t;

typedef struct move_s {
    sfKeyCode up;
    sfKeyCode down;
    sfKeyCode left;
    sfKeyCode right;
} move_t;

typedef struct game_s {
    element_t transition;
    element_t map_utils[2];
    mini_map_t mini_map;
    element_t side_map[3];
    element_t background[5];
    player_t player;
    window_t window;
    event_t event;
    map_t map[4];
    inventory_t inventory[4];
    sfClock *clock;
    move_t key;
    music_t sound;
    pnj_t pnj[11];
    speech_t speech[8];
    text_t coins;
    fight_t player_fight;
    fight_t monster_fight;
    fight_t arena_fight;
    fight_t life[3];
    lamp_t lamp[6];
    int status;
    int story_steps;
    int level_player;
    float second_loading;
    sfClock *clock_load;
    int check_load;
} game_t;

#endif/* !GAME_H_ */
