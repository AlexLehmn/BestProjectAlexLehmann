/*
** EPITECH PROJECT, 2021
** get_info_line.c
** File description:
** get_info_line
*/

#include "../include/my.h"

void get_info_line(board_t *board, loop_t *loop)
{
    for (int i = 0; loop->input[i] != '\n'; i++) {
        if (loop->input[i] < '0' || loop->input[i] > '9')
            board->j = 1;
    }
    if ((my_getnbr(loop->input) > board->bloc_size ||
    my_getnbr(loop->input) <= 0) && board->j == 0)
        board->j = 2;
    if (board->j == 0) {
        loop->info_lines = my_getnbr(loop->input);
        board->i = 2;
    }
    check_error_line(board);
}