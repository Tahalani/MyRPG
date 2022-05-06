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
    sfMusic *pika;
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
    element_t side_map[3];
    element_t background[5];
    fight_t player_fight;
    fight_t monster_fight;
    fight_t arena_fight;
    fight_t life[3];
    fight_t fight_status[2];
    inventory_t inventory[6];
    lamp_t lamp[6];
    player_t player;
    pnj_t pnj[12];
    speech_t speech[8];
    coin_anim_t anime[20];
    mini_map_t mini_map;
    window_t window;
    text_t coins;
    text_t timer;
    text_t exp_player;
    event_t event;
    map_t map[4];
    sfClock *clock;
    sfClock *clock_load;
    move_t key;
    music_t sound;
    int status;
    int story_steps;
    int level_player;
    int check_load;
    float second_loading;
} game_t;

#endif/* !GAME_H_ */
