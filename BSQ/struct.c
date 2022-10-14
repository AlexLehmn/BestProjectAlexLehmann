/*
** EPITECH PROJECT, 2021
** struct.c
** File description:
** struct.c
*/

#include "include/my.h"

open_t *struct_open(void)
{
    open_t *ope;

    ope = malloc(sizeof(open_t));
    ope->fd_read = 0;
    ope->fd = 0;
    ope->str = NULL;
    ope->str2 = NULL;
    ope->size_str = 0;
    return (ope);
}