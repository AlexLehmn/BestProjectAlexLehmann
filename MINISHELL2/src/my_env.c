/*
** EPITECH PROJECT, 2021
** my_env.c
** File description:
** my_env
*/

#include "../include/my.h"

void my_env(list_t *head, char **cmd)
{
    list_t *tmp = head;

    if (cmd[1] != NULL)
        if (my_strncmp(cmd[1], "-i", 2) == 1) {
            for (; tmp != NULL; tmp = tmp->next)
                tmp->var_env = NULL;
        }
    if (cmd[1] == NULL && tmp->var_env != NULL)
        for (; tmp != NULL; tmp = tmp->next) {
            my_putstr(tmp->var_env);
            my_putstr("\n");
        }
}
