/*
** EPITECH PROJECT, 2021
** my_unsetenv.c
** File description:
** my_unsetenv
*/

#include "../include/my.h"

int check_env_real(char *env_list , char *str)
{
    int check_real = 0;
    int check_str = my_strlen(str);
    int good_env = 0;

    if (env_list != NULL) {
        for (; env_list[check_real] != '='; check_real++);
        if (check_real != check_str)
            return (0);
        for (int i = 0; i <= check_real - 1; i++)
            if (env_list[i] != str[i]) {
                good_env = 0;
            } else
                good_env = 1;
    }
    return (good_env);
}

int check_good_syntaxe_unsetenv(char *str)
{
    int good_syntaxe;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 61) {
            good_syntaxe = 0;
        } else {
            good_syntaxe = 1;
        }
    }
    return (good_syntaxe);
}

int rm_from_env(list_t *head, char *unenv)
{
    list_t *tmp = head;
    list_t *tmp2;

    while (tmp != NULL) {
        if (check_env_real(tmp->var_env, unenv) == 0) {
            tmp2 = tmp;
            tmp = tmp->next;
        }
        if (check_env_real(tmp->var_env, unenv) == 1) {
            tmp2->next = tmp->next;
            break;
        }
        if (tmp->next == NULL && check_env_real(tmp->var_env, unenv) == 0)
            return (0);
    }
    return (0);
}

int my_unsetenv(list_t *head, char **unenv)
{
    int i = 1;

    if (unenv[i] == NULL) {
        my_putstr("unsetenv: Too few arguments.\n");
        return (0);
    }
    for (; unenv[i] != NULL; i++)
        if (check_good_syntaxe_unsetenv(unenv[i]) == 1)
            rm_from_env(head, unenv[i]);
        else
            return (0);
    return (0);
}