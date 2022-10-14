/*
** EPITECH PROJECT, 2021
** pipe.c
** File description:
** pipe
*/

#include "../include/my.h"

int init_pip3(char **tab_pipe, shell_t *shell, list_t *head)
{
    int pid;
    int status;

    shell->old_fd[0] = shell->new_fd[0];
    shell->old_fd[1] = shell->new_fd[1];
    if (check_cmd(tab_pipe[shell->final_pipe]) == 0)
        return (0);
    if (check_builtin_pipe(tab_pipe[shell->final_pipe]) == 1)
        exec_built_pipe(tab_pipe[shell->final_pipe], head, shell);
    else {
        pid = binary_exe_pipe(tab_pipe[shell->final_pipe],
        head, NULL, shell->old_fd);
    }
    if (waitpid(pid, &status, 0) == -1)
        perror("Error of Waiting\n");
    return (0);
}

int init_pip2(char **tab_pipe, shell_t *shell, list_t *head)
{
    for (shell->final_pipe = 1;
    tab_pipe[shell->final_pipe + 1] != NULL; shell->final_pipe++) {
        shell->old_fd[0] = shell->new_fd[0];
        shell->old_fd[1] = shell->new_fd[1];
        if (check_cmd(tab_pipe[shell->final_pipe]) == 0)
            return (0);
        if (check_builtin_pipe(tab_pipe[shell->final_pipe]) == 1)
            exec_built_pipe(tab_pipe[shell->final_pipe], head, shell);
        else {
            pipe(shell->new_fd);
            binary_exe_pipe(tab_pipe[shell->final_pipe],
            head, shell->new_fd, shell->old_fd);
        }
    }
    init_pip3(tab_pipe, shell, head);
    return (0);
}

int init_pip(char **tab_pipe, shell_t *shell, list_t *head)
{
    if (check_cmd(tab_pipe[0]) == 0)
        return (0);
    if (check_builtin_pipe(tab_pipe[0]) == 1)
        exec_built_pipe(tab_pipe[0], head, shell);
    else {
        pipe(shell->new_fd);
        binary_exe_pipe(tab_pipe[0], head, shell->new_fd, NULL);
    }
    init_pip2(tab_pipe, shell, head);
    return (0);
}

int ft_pipe(char **tab_pipe, char **env, list_t *head, shell_t *shell)
{
    int count = 0;

    for (; tab_pipe[count] != NULL; count++);
    if (count <= 1) {
        who_exe(tab_pipe[0], env, head, shell);
    } else {
        init_pip(tab_pipe, shell, head);
    }
    return (0);
}