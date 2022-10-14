/*
** EPITECH PROJECT, 2021
** pointeur_todouble.c
** File description:
** pointeur_todouble.c
*/

#include "include/my.h"

char **pointeur_todouble3(open_t *ope)
{
    int l = 0;

    for (int i = 0; ope->str[i] != '\0'; i++) {
        if (ope->str[i] == '\n')
            l++;
    }
    ope->str2 = malloc(sizeof(char *)*(l+2));

    return (ope->str2);
}

char **pointeur_todouble2(open_t *ope, int x, int k)
{
    pointeur_todouble3(ope);
    for (int i = 0; ope->str[i] != '\0'; i++) {
        if (ope->str[i] == '\n') {
            ope->str2[x] = malloc(sizeof(char)*(k + 1));
            x++;
            k = -1;
        }
        if (ope->str[i + 1] == '\0') {
            k++;
            ope->str2[x] = malloc(sizeof(char)*(k + 1));
            x++;
            k = -1;
        }
        k++;
    }
    return (ope->str2);
}

char **pointeur_todouble(open_t *ope)
{
    int k = 0;
    int x = 0;

    ope->str2 = pointeur_todouble2(ope, x, k);
    k = 0;
    x = 0;
    for (int j = 0; ope->str[j] != '\0'; j++) {
        if (ope->str[j] == '\n') {
            ope->str2[k][x] = '\0';
            k++;
            j++;
            x = 0;
        }
        ope->str2[k][x] = ope->str[j];
        x++;
    }
    ope->str2[k][x] = '\0';
    ope->str2[k + 1] = NULL;
    return (ope->str2);
}