/*
** EPITECH PROJECT, 2021
** open_file.c
** File description:
** open_file.c
*/

#include "include/my.h"

void open_file(char **av, open_t *ope, struct stat *s)
{
    stat(av[1], s);
    ope->str = malloc(sizeof(char) * (s->st_size));
    ope->fd = open(av[1], O_RDONLY);
    ope->fd_read = read(ope->fd, ope->str, s->st_size);
    ope->str[ope->fd_read - 1] = '\0';
    close(ope->fd);
}