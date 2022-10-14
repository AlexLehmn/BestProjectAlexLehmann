/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>

typedef struct open_s
{
    char *str;
    int fd;
    int fd_read;
    char **str2;
    int size_str;
    int **str2cp;
}open_t;

int errorfile(open_t *ope);

int my_put_nbr(int nb);

char **squarefind(open_t *ope);

int **operation(open_t *ope, int i, int j);

char **complete_square(open_t *ope, int o, int pos_l, int pos_c);

int my_atoi(char *str);

int **algosquare(open_t *ope);

int **doublecopy(open_t *ope);

open_t *struct_open(void);

char **pointeur_todouble(open_t *ope);

void open_file(char **av, open_t *ope, struct stat *s);

int my_putstr(char const *str);

void my_putchar(char c);

int my_strlen(char const *str);

int errorfile(open_t *ope);

#endif /* MY_H_*/
