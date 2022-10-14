/*
** EPITECH PROJECT, 2021
** pipe_bin_exe.c
** File description:
** pipe_bin_exe
*/

#include "../include/my.h"

void print_list(list_t *head)
{
    list_t *tmp = head;

    for (; tmp != NULL; tmp = tmp->next) {
        my_putstr(tmp->var_env);
        my_putstr("\n");
    }
    exit(0);
}

int exec_bin_pipe(char **command, list_t *head)
{
    char *buff = NULL;
    char **path = NULL;
    char *bin_path = get_path(head);

    if (bin_path == NULL) {
        my_putstr(command[0]);
        write(2, ": Command not found.\n", 21);
        exit(84);
    }
    path  = str_to_wordarray(bin_path, ":");
    for (int i = 0; path[i] != NULL; i++) {
        buff = my_strdup(path[i]);
        buff = my_strcat(buff, "/");
        buff = my_strcat(buff, command[0]);
        execve(buff, command, head->env);
    }
    return (0);
}

void print_cmd(char **command)
{
    my_putstr(command[0]);
    my_putstr(": Command not found.\n");
}

void check_exec_pipe(char **command, list_t *head)
{
    int count = 0;

    for (; command[0][count] == ' ' || command[0][count] == '\t'; count++);
    if (my_strncmp(&command[0][count], "env", 3) == 1 
    || my_strncmp(&command[0][count], "setenv", 6) == 1)
        print_list(head);
    else if (my_strncmp(command[0], "./", 2) == 1 ||
    my_strncmp(command[0], "/", 1) == 1 ||
    my_strncmp(command[0], "../", 3) == 1)
        execve(command[0], command, head->env);
    else
        exec_bin_pipe(command, head);
    print_cmd(command);
    exit(84);
}

int binary_exe_pipe(char *tab_pipe, list_t *head, int *new_fd, int *old_fd)
{
    int pid;
    int redir = find_redir(tab_pipe);
    char **cmd_redir = str_to_wordarray(tab_pipe, ">");

    pid = fork();
    if (pid == 0) {
        if (redir != 0)
            choice_redir(str_to_wordarray(cmd_redir[1], " \t"), redir);
        pipe_in_exec(new_fd, old_fd);
        if (check_builtin_pipe(tab_pipe) == 1 || tab_pipe[0] == '\n')
            exit(0);
        check_exec_pipe(str_to_wordarray(tab_pipe, " \t"), head);
        exit(0);
    }
    final_pipe(old_fd);
    return (pid);
}