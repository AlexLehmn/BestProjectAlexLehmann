/*
** EPITECH PROJECT, 2021
** exe_bin.c
** File description:
** exe_bin
*/

#include "../include/my.h"

int exec_bin(char **command, list_t *head, char **env)
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
        execve(buff, command, env);
    }
    return (0);
}

void check_exec(char **command, char **env, list_t *head)
{
    if (my_strncmp(command[0], "./", 2) == 1 ||
    my_strncmp(command[0], "/", 1) == 1 ||
    my_strncmp(command[0], "../", 3) == 1)
        execve(command[0], command, env);
    else
        exec_bin(command, head, env);
    my_putstr(command[0]);
    write(2, ": Command not found.\n", 21);
    exit(84);
}

int binary_exe2(char *input, char **command, char **env, list_t *head)
{
    if (check_builtin(input) == 1 || input[0] == '\n')
        return (0);
    check_exec(command, env, head);
    return (0);
}

int binary_exe(char *input, char **env, list_t *head)
{
    int status;
    int pid;
    int redir = find_redir(input);
    char **cmd_redir = str_to_wordarray(input, ">");
    char *tmp_com = my_strdup(remove_backn(input));

    pid = fork();
    if (pid == 0) {
        if (redir != 0)
            choice_redir(str_to_wordarray(cmd_redir[1], " \t"), redir);
        binary_exe2(input, str_to_wordarray(tmp_com, " \t"), env, head);
    } else if (pid > 0) {
        while (1) {
            waitpid(pid, &status, WUNTRACED);
            if (WIFEXITED(status))
                break;
        }
    } else
        exit (84);
    return (0);
}