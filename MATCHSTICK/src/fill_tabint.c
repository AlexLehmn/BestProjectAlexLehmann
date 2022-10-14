/*
** EPITECH PROJECT, 2021
** fill_tabint.c
** File description:
** fiil_tabint
*/

#include "../include/my.h"

int alloc_tabint(board_t *board)
{
    board->check_board = malloc(sizeof(int *) * board->bloc_size);
        if (board->check_board == NULL)
            return (84);
    for (int i = 0; i != board->bloc_size; i++) {
        board->check_board[i] = malloc(sizeof(int) * 1);
        if (board->check_board[i] == NULL)
            return (84);
    }
    return (0);
}

void fill_tabint(board_t *board)
{
    int count = 0;
    int x = 0;

    for (int i = 1; i != board->bloc_size + 1 ; i++){
        for (int j = 0; board->board[i][j] != '\0'; j++) {
            if (board->board[i][j] == '|')
                count++;
        }
        board->check_board[x][0] = count;
        x++;
        count = 0;
    }
}