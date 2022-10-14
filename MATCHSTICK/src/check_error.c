/*
** EPITECH PROJECT, 2021
** check_error.c
** File description:
** check_error
*/

#include "../include/my.h"

void get_info_matches2(board_t *board, loop_t *loop, int count)
{
    if (count < my_getnbr(loop->input) && board->j == 0)
        board->j = 6;
    if (board->j == 0) {
        loop->info_matches = my_getnbr(loop->input);
        refresh_board(board, loop);
        fill_tabint(board);
        play(board, loop);
        if (loop->play == 1) {
            board->turn = 1;
            board->i = 4;
        }
        for (int i = 0; board->board[i] != NULL; i++) {
            my_putstr(board->board[i]);
            my_putchar('\n');
        }
    }
}

void get_info_matches(board_t *board, loop_t *loop)
{
    int count = 0;

    for (int i = 0; board->board[loop->info_lines][i] != '\0'; i++)
        if (board->board[loop->info_lines][i] == '|')
            count++;
    for (int i = 0; loop->input[i] != '\n'; i++) {
        if ((loop->input[i] < '0' || loop->input[i] > '9') && board->j == 0)
            board->j = 3;
        }
    if (my_getnbr(loop->input) > board->nb_matche && board->j == 0)
        board->j = 4;
    if (my_getnbr(loop->input) <= 0 && board->j == 0)
        board->j = 5;
    get_info_matches2(board, loop, count);
    check_error_matche(board);
}

void check_error_line(board_t *board)
{
    if (board->j == 1) {
        my_putstr("Error: invalid input (positive number expected)\n");
        my_putstr("Line: ");
        board->j = 0;
    }
    if (board->j == 2) {
        my_putstr("Error: this line is out of range\n");
        my_putstr("Line: ");
        board->j = 0;
    }
}

void check_error_matches2(board_t *board)
{
    if (board->j == 5) {
        my_putstr("Error: you have to remove at least one match\n");
        my_putstr("Line: ");
        board->j = 0;
    }
    if (board->j == 6) {
        my_putstr("Error: not enough matches on this line\n");
        my_putstr("Line: ");
        board->j = 0;
    }
}

void check_error_matche(board_t *board)
{
    if (board->j != 0)
        board->i = 1;
    if (board->j == 3) {
        my_putstr("Error: invalid input (positive number expected)\n");
        my_putstr("Line: ");
        board->j = 0;
    }
    if (board->j == 4) {
        my_putstr("Error: you cannot remove more than ");
        my_put_nbr(board->nb_matche);
        my_putstr(" matches per turn\n");
        my_putstr("Line: ");
        board->j = 0;
    }
    check_error_matches2(board);
}