/*
** EPITECH PROJECT, 2021
** check_setenv.c
** File description:
** check_setenv
*/

#include "../include/my.h"

int check_first_char(char **str)
{
    int good_car;

    if ((str[1][0] >= 65 && str[1][0] <= 90)
    || (str[1][0] >= 97 && str[1][0] <= 122))
        good_car = 0;
    else
        good_car = 1;
    return (good_car);
}

int check_good_syntaxe(char **str)
{
    int good_syntaxe;

    for (int i = 0; str[1][i] != '\0'; i++) {
        if ((str[1][i] >= 48 && str[1][i] <= 57)
        || (str[1][i] >= 65 && str[1][i] <= 90)
        || (str[1][i] >= 97 && str[1][i] <= 122)
        || str[1][i] == 46 || str[1][i] == 95) {
            good_syntaxe = 0;
        } else {
            good_syntaxe = 1;
            return (1);
        }
    }
    return (good_syntaxe);
}

int check_errorsetenv(char **command_built)
{
    int count = 0;

    for (count = 0; command_built[count] != NULL; count++);
    if (count > 3) {
        write(2, "setenv: Too many arguments.\n", 28);
        return (1);
    } if (check_good_syntaxe(command_built) == 1) {
        write(2, "setenv: Variable name must ", 27);
        write(2, "contain alphanumeric characters.\n", 33);
        return (1);
    }if (check_first_char(command_built) == 1) {
        write(2, "setenv: Variable name must begin with a letter.\n", 48);
        return (1);
    }
    return (0);
}

int set_envnomatch(list_t *head, char **command_built, char *name)
{
    list_t *tmp = head;
    char *new_setenv;

    new_setenv = my_strcat(name, "=");
    if (command_built[2] != NULL)
        new_setenv = my_strcat(new_setenv, command_built[2]);
    for (; tmp->next != NULL; tmp = tmp->next);
    tmp->next = malloc(sizeof(list_t));
    tmp->next->var_env = my_strdup(new_setenv);
    tmp->next->next = NULL;
    free(new_setenv);
    return (0);
}

char *set_envmatch(char *env_list, char **cmd_built)
{
    char *var = NULL;
    int size_var_env = 0;

    for (; env_list[size_var_env] != '='; size_var_env++);
    var = my_strncpy(var, env_list, size_var_env + 1);
    if (cmd_built[2] != NULL)
        var = my_strcat(var, cmd_built[2]);
    return (var);
}