/*
** EPITECH PROJECT, 2021
** exe_built.c
** File description:
** exe_built
*/

#include "../include/my.h"

int check_builtin(char *input)
{
    int count = 0;

    for (; input[count] == ' ' || input[count] == '\t'; count++);
    if (my_strncmp(&input[count], "env", 3) == 1)
        return (1);
    if (my_strncmp(&input[count], "setenv", 6) == 1)
        return (1);
    if (my_strncmp(&input[count], "unsetenv", 9) == 1)
        return (1);
    if (my_strncmp(&input[count], "exit", 4) == 1)
        return (1);
    if (my_strncmp(&input[count], "cd", 2) == 1)
        return (1);
    return (0);
}

void free_ex_built(char *tmp_cmd_built, char ** cmd_built)
{
    for (int i = 0; cmd_built[i] != NULL; i++)
        free(cmd_built[i]);
    free(cmd_built);
    free(tmp_cmd_built);
}

int exec_built3(char *input, list_t *head, int count, char **cmd_built)
{
    if (my_strncmp(&input[count], "env", 3) == 1) {
        if (my_strcmp(cmd_built[0], "env") == 0
        || my_strlen(cmd_built[0]) != 3) {
            my_putstr(cmd_built[0]);
            my_putstr(": Command not found.\n");
            return (0);
        }
        my_env(head, cmd_built);
    }
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

int exec_built2(char *input, list_t *head, int count, char **cmd_built)
{
    if (my_strncmp(&input[count], "setenv", 6) == 1) {
        if (my_strcmp(cmd_built[0], "setenv") == 0
        || my_strlen(cmd_built[0]) != 6) {
            my_putstr(cmd_built[0]);
            my_putstr(": Command not found.\n");
            return (0);
        }
        set_env(head, cmd_built);
    }
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

int exec_built(char *input, list_t *head, shell_t *shell)
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
    exec_built2(input, head, count, cmd_built);
    exec_built3(input, head, count, cmd_built);
    return (0);
    free_ex_built(tmp_cmd_built, cmd_built);
    return (0);
}