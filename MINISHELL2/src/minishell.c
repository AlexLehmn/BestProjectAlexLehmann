/*
** EPITECH PROJECT, 2021
** minishell.c
** File description:
** minishell
*/

#include "../include/my.h"

int check_space_input(char *str)
{
    char *new_str = my_strdup(remove_backn(str));

    for (int i = 0; new_str[i] != '\0'; i++)
        if (new_str[i] != ' ' && new_str[i] != '\t')
            return (1);
    free(new_str);
    return (0);
}

void separ_shell(char **tab, char **env, list_t *head, shell_t *shell)
{
    for (int i = 0; tab[i] != NULL; i++) {
            ft_pipe(str_to_wordarray(tab[i], "|"), env, head, shell);
    }
}

int loop_shell(shell_t *shell, char **env, list_t *head)
{
    while (1) {
        write(1, "[minishell@] $ ", 15);
        if (getline(&shell->input, &shell->size, stdin) == -1) {
            write(2, "exit\n", 5);
            free_all(shell, head);
            exit (0);
        }
        if (shell->input != NULL && check_space_input(shell->input) == 1) {
            separ_shell(str_to_wordarray(shell->input, ";"), env, head, shell);
        }
    }
    return (0);
}