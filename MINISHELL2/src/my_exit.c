/*
** EPITECH PROJECT, 2021
** my_exit.c
** File description:
** my_exit
*/

#include "../include/my.h"

int my_exit(char **cmd_built, shell_t *shell, list_t *head)
{
    int count = 0;
    int exit_nb = 0;

    for (;cmd_built[count] != NULL; count++);
    if (count <= 2) {
        my_putstr("exit\n");
        free_all(shell, head);
        if (cmd_built[1] != NULL)
            exit_nb = my_getnbr(cmd_built[1]);
        exit (exit_nb);
    }
    else {
        my_putstr("exit: Expression Syntax.\n");
        return (0);
    }
}