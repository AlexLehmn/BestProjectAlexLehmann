/*
** EPITECH PROJECT, 2021
** errorfile.c
** File description:
** errorfile.c
*/

#include "include/my.h"

int errorfile(open_t *ope)
{
    int x = 0;

    for (; ope->str[x] != '\n'; x++);
    for (x++; ope->str[x] != '\0'; x++) {
        if (ope->str[x] != '.' && ope->str[x] != 'o' && ope->str[x] != '\n') {
            write(2, "Error of map in file\n", 22);
            return (84);
        }
    }
    return (0);
}