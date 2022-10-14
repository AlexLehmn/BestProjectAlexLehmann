/*
** EPITECH PROJECT, 2021
** refresh_board.c
** File description:
** refresh_board
*/

#include "../include/my.h"

int find_pip(board_t *board, loop_t *loop)
{
    int find_pip = 1;

    for (int i = board->first_star; board->board[loop->info_lines][i] != '|';
    i--) {
        if (board->board[loop->info_lines][i] == ' ')
            find_pip++;
    }

    return (board->first_star - find_pip);
}

void refresh_board(board_t *board, loop_t *loop)
{
    int pip = find_pip(board, loop);

    for (int i = 0; i != loop->info_matches; i++) {
        board->board[loop->info_lines][pip - i] = ' ';
    }
    my_putstr("Player removed ");
    my_put_nbr(loop->info_matches);
    my_putstr(" match(es) from line ");
    my_put_nbr(loop->info_lines);
    my_putchar('\n');
    board->i = 5;
}