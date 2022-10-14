/*
** EPITECH PROJECT, 2021
** struct.c
** File description:
** struct.c
*/

#include "../include/my.h"

shell_t *struct_shell(void)
{
    shell_t *shell;

    shell = malloc(sizeof(shell_t));
    if (shell == NULL)
        return (NULL);
    shell->size = 0;
    shell->input = NULL;
    shell->pwd = NULL;
    shell->count_pipe = 0;
    shell->final_pipe = 0;
    shell->pid_pipe = 0;
    return (shell);
}

list_t *create_list(char **env)
{
    list_t *head = malloc(sizeof(list_t));
    char *str = NULL;

    if (head == NULL)
        return (NULL);
    head->env = env;
    head->var_env = my_strdup(env[0]);
    head->next = NULL;
    for (int i = 1; env[i] != NULL; i++) {
        str = my_strdup(env[i]);
        push_list(head, str);
        free(str);
    }
    return (head);
}