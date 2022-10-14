/*
** EPITECH PROJECT, 2021
** get_path.c
** File description:
** get_path
*/

#include "../include/my.h"

char *get_path(list_t *head)
{
    list_t *tmp = head;
    char *path_bin = NULL;

    if (tmp->var_env != NULL)
        for (; tmp != NULL; tmp = tmp->next) {
            if (my_strcmp("PATH=", tmp->var_env) == 1)
                path_bin = my_strdup(&tmp->var_env[5]);
        }
    return (path_bin);
}

void push_list(list_t *head, char *str)
{
    list_t *tmp = head;

    for (; tmp->next != NULL; tmp = tmp->next);
    tmp->next = malloc(sizeof(list_t));
    tmp->next->next = NULL;
    tmp->next->var_env = my_strdup(str);
}

int free_list(list_t *head)
{
    if (head->next != NULL)
        return (free_list(head->next));
    free(head->var_env);
    free(head);
    return 0;
}