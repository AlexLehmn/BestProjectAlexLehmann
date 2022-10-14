/*
** EPITECH PROJECT, 2021
** utils.c
** File description:
** utils
*/

#include "../include/my.h"

int check_cmd(char *cmd)
{
    if (cmd != NULL) {
        for (int i = 0; cmd[i] != '\0'; i++)
            if (cmd[i] != ' ' && cmd[i] != '\t'
            && cmd[i] != '\n')
                return (1);
    }
    return (0);
}

char *remove_backn(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == '\n')
            str[i] = '\0';
    return (str);
}

char *get_old_pwd(list_t *head)
{
    list_t *tmp = head;
    char *oldpwd = NULL;

    if (tmp->var_env != NULL)
        for (; tmp->next != NULL; tmp = tmp->next) {
            if (my_strcmp("OLDPWD=", tmp->var_env) == 1) {
                oldpwd = my_strdup(&tmp->var_env[7]);
            }
        }
    return (oldpwd);
}

char *get_home(list_t *head)
{
    list_t *tmp = head;
    char *home = NULL;

    if (tmp->var_env != NULL)
        for (; tmp->next != NULL; tmp = tmp->next) {
            if (my_strcmp("HOME=", tmp->var_env) == 1)
                home = my_strdup(&tmp->var_env[5]);
        }
    return (home);
}