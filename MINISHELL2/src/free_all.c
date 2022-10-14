/*
** EPITECH PROJECT, 2021
** free_all.c
** File description:
** free_all
*/

#include "../include/my.h"

void free_all(shell_t *shell, list_t *head)
{
    list_t *tmp = head;

    free(shell->input);
    free(shell);
    for (; tmp->next != NULL; tmp = tmp->next)
        free(tmp->var_env);
    free(tmp);
    free(head);
}

void free_exe_bin(char *buff, char *bin_path, char **path)
{
    free(buff);
    free(bin_path);
    for (int i = 0; path[i] != NULL; i++)
        free(path[i]);
    free(path);
}