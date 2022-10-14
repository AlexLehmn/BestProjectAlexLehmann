/*
** EPITECH PROJECT, 2021
** pipe2.c
** File description:
** pipe2
*/

#include "../include/my.h"

void pipe_in_exec(int *new_fd, int *old_fd)
{
    if (new_fd != NULL) {
        dup2(new_fd[1], 1);
        close(new_fd[0]);
        close(new_fd[1]);
    }
    if (old_fd != NULL) {
        dup2(old_fd[0], 0);
        close(old_fd[0]);
        close(old_fd[1]);
    }
}

void final_pipe(int *new_fd)
{
    if (new_fd != NULL) {
        close(new_fd[1]);
        close(new_fd[0]);
    }
}