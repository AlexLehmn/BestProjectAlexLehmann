/*
** EPITECH PROJECT, 2020
** my_strcat.c
** File description:
** task1
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    char *str = malloc(sizeof(char) * (my_strlen(dest) + my_strlen(src) + 1));
    if (str == NULL)
        return (NULL);
    int i = 0;

    for (; dest[i] != '\0'; i++)
        str[i] = dest[i];
    for (int j = 0; src[j] != '\0'; j++, i++)
        str[i] = src[j];
    str[i] = '\0';
    return (str);
}
