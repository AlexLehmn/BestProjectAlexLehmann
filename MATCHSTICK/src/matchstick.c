/*
** EPITECH PROJECT, 2021
** matchstick.c
** File description:
** matchstick
*/

#include "../include/my.h"
#include "../include/struct.h"

int turn_usr(board_t *board, loop_t *loop)
{
    if (board->i == 4) {
        for (int i = 0; board->board[i] != NULL; i++) {
            my_putstr(board->board[i]);
            my_putchar('\n');
        }
        my_putchar('\n');
        my_putstr("Your turn:\n");
        my_putstr("Line: ");
        board->i = 1;
    }
    if (board->i == 0)
        print_text(board);
    if (board->i != 0) {
        fill_tabint(board);
        play(board, loop);
    }
    if (board->i == 2) {
        my_putstr("Matches: ");
        board->i = 3;
    } if (getline(&loop->input, &loop->size, stdin) == -1) {
        my_putchar('\n');
        return (7);
    }
    if (board->i == 1)
        get_info_line(board, loop);
    if (board->i == 3)
        get_info_matches(board, loop);
    return (0);
}

int loop_game(board_t *board, loop_t *loop)
{
    int i = 0;

    while (1) {
        srand(time(NULL));
        if (board->turn == 0 && loop->play == 1)
            i = turn_usr(board, loop);
        if (i == 7)
            return (0);
        if (board->turn == 1 && loop->play == 1)
            ia_turn(board, loop);
        if (loop->play == 0) {
            i = winner(board);
            return (i);
        }
    }
    return (0);
}

void free_everything(board_t *board, loop_t *loop)
{
    for (int i = 0; board->board[i] != NULL; i++)
        free(board->board[i]);
    free(board->board);
    for (int i = 0; i != board->bloc_size; i++)
        free(board->check_board[i]);
    free(board->check_board);
    free(loop->input);
    free(loop);
    free(board);
}

int main (int ac, char **av)
{
    board_t *board;
    loop_t *loop;
    int i = 0;

    if (ac != 3 || my_getnbr(av[2]) <= 0 || my_getnbr(av[1]) <= 0) {
        write(2, "Error in Argument\n", 18);
        return (84);
    } else {
        if (my_getnbr(av[1]) <= 1 || my_getnbr(av[1]) >= 100) {
            write(2, "You can t have more than 99 or less than 1\n", 43);
            return (84);
        }
        loop = struct_fill_loop();
        board = struct_fill_board();
        initialisation(board, av, loop);
        i = loop_game(board, loop);
        free_everything(board, loop);
    }
    return (i);
}