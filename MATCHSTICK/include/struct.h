/*
** EPITECH PROJECT, 2021
** struct.h
** File description:
** struct
*/

#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct loop_s
{
    char *input;
    size_t size;
    int info_lines;
    int info_matches;
    int play;
}loop_t;


typedef struct board_s
{
    char **board;
    int nb_space;
    int nb_pipe;
    int bloc_size;
    int first_star;
    int i;
    int j;
    int nb_matche;
    int ia_lines;
    int ia_matches;
    int **check_board;
    int turn;
}board_t;

#endif /* !STRUCT_H_ */