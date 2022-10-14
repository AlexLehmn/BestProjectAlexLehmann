/*
** EPITECH PROJECT, 2020
** bsq.c
** File description:
** bsq
*/

#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include "include/my.h"

int error(open_t *ope)
{
    int l = 0;
    int nb = my_atoi(ope->str2[0]);

    for (int i = 0; ope->str[i] != '\0'; i++) {
        if (ope->str[i] == '\n')
            l++;
    }
    if ( l != nb) {
        write(2, "Error of map in file", 21);
                return (84);
    }
    return (0);
}

int main(int ac, char **av)
{
    int i;
    struct stat *s = malloc(sizeof(struct stat));
    open_t *ope;

    ope = struct_open();
    if (ac != 2) {
        write(2, "Error Number Of Argurment\n", 25);
        return (84);
    }
    else {
        open_file(av, ope, s);
        i = errorfile(ope);
        if (i == 84)
            return (84);
        ope->str2 = pointeur_todouble(ope);
        i = error(ope);
        if (i == 84)
            return (84);
        ope->str2cp = doublecopy(ope);
        ope->str2cp = algosquare(ope);
        ope->str2 = squarefind(ope);
        for (int j = 1; ope->str2[j] != NULL; j++) {
            my_putstr(ope->str2[j]);
            my_putchar('\n');
        }
    }
    return (0);
}