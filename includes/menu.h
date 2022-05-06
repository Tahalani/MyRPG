/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** menu
*/

#ifndef menu_H_
    #define menu_H_

typedef struct param_s {
    sfTexture *texture;
    sfSprite *sprite;
    sfIntRect rect;
    sfVector2f scale;
    sfVector2f pos;
    int status;
} param_t;

typedef struct btn_s {
    param_t play_btn;
    param_t stop_btn;
    param_t music_btn;
    param_t about_btn;
    param_t next_btn;
    param_t prev_btn;
    param_t down_btn;
    param_t up_btn;
    param_t wood_btn[7];
} btn_t;

typedef struct menu_s {
    param_t cursor;
    param_t red_skin;
    param_t brown_skin;
    param_t blue_skin;
    param_t sign_settings;
    param_t sign_skin;
    param_t map1;
    param_t map2;
    param_t rules;
    param_t bg_skin[4];
    param_t bg_square[3];
    music_t sound;
    text_t volum;
    shape_t shape_btn[21];
    sfColor opacity[2];
    sfClock *clock;
    float seconds;
} menu_t;

#endif/* !menu_H_ */
