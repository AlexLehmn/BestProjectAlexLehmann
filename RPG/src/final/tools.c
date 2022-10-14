/*
** EPITECH PROJECT, 2021
** event.c
** File description:
** event
*/

#include "../include/my_rpg.h"

int my_nblen(int nb)
{
    int lenght;

    for (lenght = 1; nb > 9; lenght++)
        nb /= 10;
    return (lenght);
}

char *my_itoa(int nb)
{
    int ln = my_nblen(nb);
    char *str = malloc(sizeof(char) * (ln + 1));

    for (int i = ln - 1; i >= 0; i--) {
        str[i] = (nb % 10) + '0';
        nb = nb / 10;
    }
    str[ln] = '\0';
    return (str);
}