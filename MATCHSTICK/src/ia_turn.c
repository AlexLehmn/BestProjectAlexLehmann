/*
** EPITECH PROJECT, 2021
** ia_turn.c
** File description:
** ia_turn
*/

#include "../include/my.h"

void print_text_remove(board_t *board)
{
    my_putstr("AI removed ");
    my_put_nbr(board->ia_matches);
    my_putstr(" match(es) from line ");
    my_put_nbr(board->ia_lines);
    my_putchar('\n');
}

int find_pip_ia(board_t *board)
{
    int find_pip = 1;

    for (int i = board->first_star; board->board[board->ia_lines][i] != '|';
    i--) {
        if (board->board[board->ia_lines][i] == ' ')
            find_pip++;
    }
    return (board->first_star - find_pip);
}

void refresh_board_ia(board_t *board)
{
    int pip = find_pip_ia(board);

    for (int i = 0; i != board->ia_matches; i++) {
        board->board[board->ia_lines][pip - i] = ' ';
    }
}

void ia_turn(board_t *board, loop_t *loop)
{
    my_putchar('\n');
    my_putstr("AI's turn...\n");
    for (int loop = 1; loop == 1;) {
        board->ia_lines = (rand() % board->bloc_size) + 1;
        if (board->check_board[board->ia_lines - 1][0] != 0)
            loop++;
    }
    if (board->check_board[board->ia_lines - 1][0] < board->nb_matche) {
        board->ia_matches = (rand() % board->check_board[board->ia_lines - 1]
        [0]) + 1;
    }
    else
        board->ia_matches = (rand() % board->nb_matche) + 1;
    print_text_remove(board);
    refresh_board_ia(board);
    fill_tabint(board);
    play(board, loop);
    if (loop->play == 1)
        board->turn = 0;
}