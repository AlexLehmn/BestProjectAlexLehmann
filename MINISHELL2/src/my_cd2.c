/*
** EPITECH PROJECT, 2021
** my_cd2.c
** File description:
** my_cd2
*/

#include "../include/my.h"

int ft_cd2(char *cmd, char *old_pwd)
{
    if (my_strcmp(cmd, "-") == 1){
        if (old_pwd != NULL)
            chdir(old_pwd);
        return (0);
    }
    else if (opendir(cmd) == NULL && errno != 0) {
        print_for_cd(cmd);
        return (-1);
    }
    else
        chdir(cmd);
    return (0);
}