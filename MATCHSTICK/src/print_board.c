/*
** EPITECH PROJECT, 2021
** print_board.c
** File description:
** print_board
*/

#include "../include/my.h"
#include "../include/struct.h"

void fill_board3(board_t *board, int dif, int i, int x)
{
    board->nb_pipe = 0;
    for (x = 1; x != board->bloc_size + 1; x++) {
        for (int j = board->first_star/2 + 1; j != board->first_star + 1; j++) {
            if (board->nb_pipe != dif) {
                board->board[x][j] = '|';
                dif++;
            } else
                board->board[x][j] = ' ';
        }
        dif = 0;
        board->board[x][board->first_star] = '*';
        board->board[x][board->first_star + 1] = '\0';
        board->nb_pipe += 1;
    }
    for (i = 0; i != board->first_star + 1; i++)
        board->board[x][i] = '*';
    board->board[x][i] = '\0';
    board->board[x + 1] = NULL;
}

void fill_board2(board_t *board, int i)
{
    for (i = 0; i != board->first_star + 1; i++)
        board->board[0][i] = '*';
    board->board[0][i] = '\0';
}

void fill_board(board_t *board)
{
    int i = 0;
    int x = 0;
    int dif = 0;

    fill_board2(board, i);
    for (x = 1; x != board->bloc_size + 1; x++) {
        for (int j = board->first_star/2; j != 0; j--) {
            if (board->nb_pipe != dif) {
                board->board[x][j] = '|';
                dif++;
            } else
                board->board[x][j] = ' ';
        }
        dif = 0;
        board->board[x][0] = '*';
        board->nb_pipe += 1;
    }
    fill_board3(board, dif, i, x);
}

int creat_board(board_t *board)
{
    board->board = malloc(sizeof(char *)*(board->bloc_size + 3));
    if (board->board == NULL)
        return (84);
    for (int i = 0; i != board->bloc_size + 2; i++) {
        board->board[i] = malloc(sizeof(char)*(board->first_star + 2));
        if (board->board == NULL)
            return (84);
    }
    return (0);
}

void print_game_board(board_t *board)
{
    creat_board(board);
    fill_board(board);
    fill_tabint(board);
    for (int i = 0; board->board[i] != NULL; i++) {
        my_putstr(board->board[i]);
        my_putchar('\n');
    }
}