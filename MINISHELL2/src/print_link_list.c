/*
** EPITECH PROJECT, 2021
** env.c
** File description:
** env
*/

#include "../include/my.h"

void print_list_env(list_t *head)
{
    list_t *tmp = head;

    for (; tmp != NULL; tmp = tmp->next) {
        my_putstr(tmp->var_env);
        my_putstr("\n");
    }
}
