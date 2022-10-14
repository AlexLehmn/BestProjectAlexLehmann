/*
** EPITECH PROJECT, 2021
** initialisation.c
** File description:
** initialisation
*/

#include "../include/my.h"

int cmp_char_str(char car, char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (car == str[i])
            return (1);
    return (0);
}

int count_separator(char *str, char *separator)
{
    int count = 0;

    if (str != NULL)
        for (int i = 0; str[i] != '\0'; i++)
            if (cmp_char_str(str[i], separator) == 0
            && cmp_char_str(str[i + 1], separator) == 1)
                count++;
    return (count);
}

char **str_to_wordarray(char *str, char *separator)
{
    int i = 0;
    int size = count_separator(str, separator);
    char **tab = malloc(sizeof(char *) * (size + 2));
    if (!tab)
        return (NULL);

    tab[i] = strtok(str, separator);
    do {
        i++;
        tab[i] = strtok(NULL, separator);
    } while (tab[i] != NULL);
    return (tab);
}