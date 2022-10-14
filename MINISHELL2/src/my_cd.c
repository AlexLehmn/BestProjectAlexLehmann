/*
** EPITECH PROJECT, 2021
** my_cd.c
** File description:
** my_cd
*/

#include "../include/my.h"

void print_for_cd(char *cmd)
{
    my_putstr(cmd);
    my_putstr(": ");
    my_putstr(strerror(errno));
    my_putstr(".\n");
}

char *set_envmatch_cd(char *env_list, char *new_pwd)
{
    char *var = NULL;
    int size_var_env = 0;

    for (; env_list[size_var_env] != '='; size_var_env++);
    var = my_strncpy(new_pwd, env_list, size_var_env + 1);
    var = my_strcat(var, new_pwd);
    return (var);
}

void find_env_cd(list_t *head, char *name, char *new_pwd)
{
    list_t *tmp = head;
    int count = 0;
    char *new_var = NULL;

    while (tmp != NULL) {
        if (check_env_real_setenv(tmp->var_env, name) == 1) {
            new_var = set_envmatch_cd(tmp->var_env, new_pwd);
            for (; new_var[count] != '\0'; count++);
            tmp->var_env = my_strncpy(tmp->var_env, new_var, count);
            break;
        }
        if (check_env_real_setenv(tmp->var_env, name) == 0)
            tmp = tmp->next;
    }
}

int ft_cd(char *cmd, list_t *head)
{
    errno = 0;
    char *old_pwd;
    char buff[256];

    old_pwd = get_old_pwd(head);
    if (old_pwd != NULL)
        my_strdup(old_pwd);
    if (cmd == NULL) {
        chdir(get_home(head));
        return (0);
    }
    find_env_cd(head, "OLDPWD", getcwd(buff, 256));
    ft_cd2(cmd, old_pwd);
    return (0);
}

int my_cd(char **cmd, list_t *head)
{
    int count = 0;
    char buff[256];

    for (; cmd[count] != NULL; count++);
    if (count <= 2) {
        ft_cd(cmd[1], head);
        find_env_cd(head, "PWD", getcwd(buff, 256));
    } else
        my_putstr("cd: Too many arguments.\n");
    return (0);
}