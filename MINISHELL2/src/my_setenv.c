/*
** EPITECH PROJECT, 2021
** my_setenv.c
** File description:
** my_setenv
*/

#include "../include/my.h"

int check_env_real_setenv(char *env_list, char *str)
{
    int check_real = 0;
    int cmd_good = 0;
    int check_str = my_strlen(str);

    if (env_list != NULL) {
        for (; env_list[check_real] != '='; check_real++);
        if (check_real != check_str)
            return (0);
        for (int i = 0; i <= check_real - 1; i++)
            if (env_list[i] != str[i]) {
                cmd_good = 0;
            } else
                cmd_good = 1;
    }
    return (cmd_good);
}

void find_env(list_t *head, char *name, char **command_built)
{
    list_t *tmp = head;
    int i = 0;
    int count = 0;
    char *new_var = NULL;

    while (tmp != NULL) {
        if (check_env_real_setenv(tmp->var_env, name) == 1) {
            new_var = set_envmatch(tmp->var_env, command_built);
            for (; new_var[count] != '\0'; count++);
            free(tmp->var_env);
            tmp->var_env = my_strncpy(tmp->var_env, new_var, count);
            i = 1;
            break;
        }
        if (check_env_real_setenv(tmp->var_env, name) == 0)
            tmp = tmp->next;
    }
    if (i == 0)
        set_envnomatch(head, command_built, name);
    free(new_var);
}

int set_env(list_t *head, char **command_built)
{
    char *name = NULL;

    if (command_built[1] == NULL) {
        my_env(head, command_built);
        free(name);
        return (0);
    }
    name = my_strdup(command_built[1]);
    if (check_errorsetenv(command_built) == 1)
        return (0);
    find_env(head, name, command_built);
    free(name);
    return (0);
}