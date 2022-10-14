/*
** EPITECH PROJECT, 2021
** init_game.c
** File description:
** init_game
*/

#include "../include/my.h"

int initialisation(board_t *board, char **av, loop_t *loop)
{
    board->bloc_size = my_atoi(av[1]);
    board->nb_matche = my_atoi(av[2]);
    board->nb_space = board->bloc_size - 1;
    board->nb_pipe = 1;
    board->first_star = board->bloc_size * 2;
    loop->play = 1;
    alloc_tabint(board);
    return (0);
}

void print_text(board_t *board)
{
    print_game_board(board);
    my_putchar('\n');
    my_putstr("Your turn:\n");
    my_putstr("Line: ");
    board->i = 1;
}