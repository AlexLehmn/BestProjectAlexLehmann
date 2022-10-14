/*
** EPITECH PROJECT, 2021
** create_doublecopy.c
** File description:
** create_doublecopy.c
*/

#include "include/my.h"

int **doublecopy2(open_t *ope, int k, int x)
{
    for (int i = 1; ope->str2[i] != NULL; i++) {
        for (int j = 0; ope->str2[i][j] != '\0'; j++)
            k++;
        ope->str2cp[x] = malloc(sizeof(int)*(k));
        x++;
        k = 0;
    }
    return (ope->str2cp);
}

int **doublecopy(open_t *ope)
{
    int k = 0;
    int x = 0;
    int l = 0;

    for (int i = 1; ope->str2[i] != NULL; i++)
            l++;
    ope->str2cp = malloc(sizeof(int *)*(l));
    ope->str2cp = doublecopy2(ope, k, x);
    x = 0;
    for (int i = 1; ope->str2[i] != NULL; i++) {
        for (int j = 0; ope->str2[i][j] != '\0'; j++) {
            if (ope->str2[i][j] == '.')
                ope->str2cp[x][j] = 1;
            if (ope->str2[i][j] == 'o')
                ope->str2cp[x][j] = 0;
        }
        x++;
    }
    return (ope->str2cp);
}