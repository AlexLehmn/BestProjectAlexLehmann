/*
** EPITECH PROJECT, 2020
** my_strncpy.c
** File description:
** task02
*/

#include <stdlib.h>

char *my_strncpy(char *dest , char  const *src , int n)
{
    int i = 0;
    dest = malloc(sizeof(char) * (n + 2));
    if (dest == NULL)
        return (NULL);

    while (i < n){
        dest[i] = src [i];
        i = i + 1;
    }
    dest[i] = '\0';
    return (dest);
}
