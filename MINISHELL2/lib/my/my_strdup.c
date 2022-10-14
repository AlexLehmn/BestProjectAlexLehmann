/*
** EPITECH PROJECT, 2021
** my_strdup.c
** File description:
** my_strdup
*/

#include <stdio.h>
#include <stdlib.h>

void my_putchar(char c);

int my_strlen(char const *str);

char *my_strdup(char *str)
{
    int i = 0;
    char *dest = malloc(sizeof(char) * (my_strlen(str) + 1));

    if (dest == NULL)
        return (NULL);
    for (; str[i] != '\0'; i++)
        dest[i] = str[i];
    dest[i] = '\0';
    return (dest);
}