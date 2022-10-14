/*
** EPITECH PROJECT, 2021
** redire_right.c
** File description:
** redire_right
*/

#include "../include/my.h"

int find_redir(char *str)
{
    int result_redir = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '>' && str[i + 1] != '>')
            return (result_redir = 1);
        if (str[i] == '>' && str[i + 1] == '>')
            return (result_redir = 2);
    }
    return (result_redir);
}

void choice_redir(char **cmd, int redir)
{
    int fd;

    if (redir == 2)
        fd = open(cmd[0], O_CREAT | O_RDWR | O_APPEND, 00664);
    if (redir == 1)
        fd = open(cmd[0], O_CREAT | O_RDWR | O_TRUNC, 00664);
    if (fd != -1) {
        dup2(fd, 1);
        close(fd);
    }
}