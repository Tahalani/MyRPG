/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** move_rect
*/

#include "my.h"
#include "rpg.h"

int rect_skin(param_t *player, int top)
{
    player->rect.top = top;
    player->rect.left += 64;
    if (player->rect.left == 256)
        player->rect.left = 0;
    sfSprite_setTextureRect(player->sprite, player->rect);
    return (0);
}

int move_rect(sfIntRect *rect, int offset, int max_value, int top)
{
    rect->top = top;
    rect->left += offset;
    if (rect->left == max_value)
        rect->left = 0;
    return (0);
}
