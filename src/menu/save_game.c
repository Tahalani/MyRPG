/*
** EPITECH PROJECT, 2022
** save
** File description:
** save
*/

#include "rpg.h"
#include "my.h"
#include <stdio.h>
#include <stdlib.h>

int write_save(char *name, char *path, FILE *fd)
{
    fwrite(name, 1, my_strlen(name), fd);
    fwrite("\n", 1, 1, fd);
    fwrite(path, 1, my_strlen(path), fd);
    fwrite("\n", 1, 1, fd);
    return (0);
}

int save_game(game_t *game, menu_t *menu, btn_t *btn)
{
    FILE *fd = fopen("src/conf/save.txt", "w+");
    if (fd == NULL)
        return (-1);
    write_save("pos.x:", int_to_char(game->player.position.x), fd);
    write_save("pos.y:", int_to_char(game->player.position.y), fd);
    write_save("arrow:", int_to_char(btn->wood_btn[3].status), fd);
    write_save("azerty:", int_to_char(btn->wood_btn[4].status), fd);
    write_save("story_steps:", int_to_char(game->story_steps), fd);
    write_save("coin:", int_to_char(game->coins.count), fd);
    write_save("game_status:", int_to_char(game->status), fd);
    return (0);
}
