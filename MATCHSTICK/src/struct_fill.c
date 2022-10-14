/*
** EPITECH PROJECT, 2021
** struct_fill.c
** File description:
** struct_fill
*/

#include "../include/my.h"
#include "../include/struct.h"

board_t *struct_fill_board(void)
{
    board_t *board = malloc(sizeof(board_t));
    if (board == NULL)
        return (NULL);
    board->bloc_size = 0;
    board->first_star = 0;
    board->nb_pipe = 0;
    board->nb_space = 0;
    board->board = NULL;
    board->i = 0;
    board->j = 0;
    board->nb_matche = 0;
    board->ia_lines = 0;
    board->ia_matches = 0;
    board->check_board = 0;
    board->turn = 0;
    return (board);
}

loop_t *struct_fill_loop(void)
{
    loop_t *loop = malloc(sizeof(loop_t));
    if (loop == NULL)
        return (NULL);
    loop->input = NULL;
    loop->size = 0;
    loop->info_lines = 0;
    loop->info_matches = 0;
    loop->play = 0;
    return (loop);
}