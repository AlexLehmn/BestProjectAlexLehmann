/*
** EPITECH PROJECT, 2021
** algofindsquare.c
** File description:
** algofindsquare.c
*/

#include "include/my.h"

char **complete_square(open_t *ope, int o, int pos_l, int pos_c)
{
    for (int i = pos_l; i > pos_l - o; i--) {
        for (int j = pos_c; j > pos_c - o; j--) {
            ope->str2[i][j] = 'x';
        }
    }
    return (ope->str2);
}

char **squarefind(open_t *ope)
{
    int o = ope->str2cp[1][0];
    int pos_l;
    int pos_c;

    for (int i = 1; ope->str2[i] != NULL && i < my_atoi(ope->str2[0]); i++) {
        for (int j = 1; ope->str2[i][j] != '\0'; j++) {
            if (ope->str2cp[i][j] > o) {
                o = ope->str2cp[i][j];
                pos_l = i;
                pos_c = j;
            }
        }
    }
    ope->str2 = complete_square(ope, o, pos_l + 1, pos_c);
    return (ope->str2);
}

int **operation(open_t *ope, int i, int j)
{
    if (ope->str2cp[i - 1][j - 1] < ope->str2cp[i - 1][j] &&
    ope->str2cp[i - 1][j - 1] < ope->str2cp[i][j - 1])
        ope->str2cp[i][j] += ope->str2cp[i - 1][j - 1];
    else if (ope->str2cp[i - 1][j] < ope->str2cp[i][j - 1])
        ope->str2cp[i][j] += ope->str2cp[i - 1][j];
    else
        ope->str2cp[i][j] += ope->str2cp[i][j - 1];
    return (ope->str2cp);
}

int **algosquare(open_t *ope)
{
    for (int i = 1; ope->str2[i] != NULL && i != my_atoi(ope->str2[0]); i++) {
        for (int j = 1; ope->str2[i][j] != '\0'; j++) {
            if (ope->str2cp[i][j] != 0)
                ope->str2cp = operation(ope, i, j);
        }
    }
    return (ope->str2cp);
}