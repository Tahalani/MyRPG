/*
** EPITECH PROJECT, 2021
** include
** File description:
** include
*/

#ifndef MY_H_
    #define MY_H_

    #define ATOD(x) (x - '0')
    #define DTOA(x) (x + '0')

char **my_str_to_word_array(char *str, char separator);

char *my_file_in_str(char *filepath);

int my_strcmp(char const *s1, char const *s2);

int my_putstr(char const *str);

int my_strlen(char const *str);

int my_getnbr(char const *str);

void my_putchar(char c);

void my_put_error(char const *str);

void my_free_array(char **array);

#endif/* MY_H_ */
