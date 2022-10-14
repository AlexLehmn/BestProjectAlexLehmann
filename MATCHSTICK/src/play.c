/*
** EPITECH PROJECT, 2021
** play.c
** File description:
** play
*/

#include "../include/my.h"

void play(board_t *board, loop_t *loop)
{
    loop->play = 0;
    for (int i = 0; i != board->bloc_size; i++)
        if (board->check_board[i][0] != 0)
            loop->play = 1;
}

int winner(board_t *board)
{
    if (board->turn == 0) {
        my_putstr("You lost, too bad...\n");
        return (2);
    }
    if (board->turn == 1) {
        for (int i = 0; board->board[i] != NULL; i++) {
            my_putstr(board->board[i]);
            my_putchar('\n');
        }
        my_putstr("I lost... snif... but I'll get you next time!!\n");
        return (1);
    }
    return (0);
}