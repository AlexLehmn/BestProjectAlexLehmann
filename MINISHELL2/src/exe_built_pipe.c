/*
** EPITECH PROJECT, 2021
** exe_built_pipe.c
** File description:
** exe_built_pipe
*/

#include "../include/my.h"

int check_builtin_pipe(char *input)
{
    int count = 0;

    for (; input[count] == ' ' || input[count] == '\t'; count++);
    if (my_strncmp(&input[count], "unsetenv", 9) == 1)
        return (1);
    if (my_strncmp(&input[count], "exit", 4) == 1)
        return (1);
    if (my_strncmp(&input[count], "cd", 2) == 1)
        return (1);
    return (0);
}

int exec_built3_pipe(char *input, list_t *head, int count, char **cmd_built)
{
    if (my_strncmp(&input[count], "cd", 2) == 1) {
        if (my_strcmp(cmd_built[0], "cd") == 0
        || my_strlen(cmd_built[0]) != 2) {
            my_putstr(cmd_built[0]);
            my_putstr(": Command not found.\n");
            return (0);
        }
        my_cd(cmd_built, head);
    }
    return (0);
}

int exec_built2_pipe(char *input, list_t *head, int count, char **cmd_built)
{
    if (my_strncmp(&input[count], "unsetenv", 8) == 1) {
        if (my_strcmp(cmd_built[0], "unsetenv") == 0) {
            my_putstr(cmd_built[0]);
            my_putstr(": Command not found.\n");
            return (0);
        }
        my_unsetenv(head, cmd_built);
    }
    return (0);
}

int exec_built_pipe(char *input, list_t *head, shell_t *shell)
{
    int count = 0;
    char *tmp_cmd_built = my_strdup(remove_backn(input));
    char **cmd_built = str_to_wordarray(tmp_cmd_built, " \t");

    for (; input[count] == ' ' || input[count] == '\t'; count++);
    if (my_strncmp(&input[count], "exit", 4) == 1) {
        if (my_strcmp(cmd_built[0], "exit") == 0
        || my_strlen(cmd_built[0]) != 4) {
            my_putstr(cmd_built[0]);
            my_putstr(": Command not found.\n");
            return (0);
        }
        my_exit(cmd_built, shell, head);
    }
    exec_built2_pipe(input, head, count, cmd_built);
    exec_built3_pipe(input, head, count, cmd_built);
    return (0);
}