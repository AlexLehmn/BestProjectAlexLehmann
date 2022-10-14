/*
** EPITECH PROJECT, 2021
** who_exe.c
** File description:
** who_exe
*/

#include "../include/my.h"

int who_exe2(char *input, char **env, list_t *head, shell_t *shell)
{
    int pid;

    if (check_builtin(input) == 1) {
        exec_built(input, head, shell);
        pid = 0;
    } else
        pid = binary_exe(input, env, head);
    return (pid);
}

int who_exe(char *input, char **env, list_t *head, shell_t *shell)
{
    if (check_cmd(input) == 0)
        return (0);
    else {
        if (check_builtin(input) == 1)
            exec_built(input, head, shell);
        else
            binary_exe(input, env, head);
    }
    return (0);
}