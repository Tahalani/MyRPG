/*
** EPITECH PROJECT, 2021
** my_strncmp
** File description:
** my_strncmp
*/

int my_strncmp(char *s1, char *s2, int n)
{
    int i = 0;

    for (; s1[i] == s2[i] && s1[i] && s2[i] && i < n; i++);
    if ((s1[i] == '\0' && s2[i] == '\0') || i == n) {
        return (0);
    } else if (s1[i] > s2[i])
        return (1);
    else
        return (-1);
}
