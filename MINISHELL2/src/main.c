/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "../include/my.h"

int main(int ac, char **av, char **env)
{
    shell_t *shell = struct_shell();
    list_t *head = create_list(env);

    if (ac != 1) {
        write(2, "Error in nb of Argument\n", 25);
    } else {
        loop_shell(shell, env, head);
    }
    return (0);
}