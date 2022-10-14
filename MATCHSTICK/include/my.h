/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "struct.h"
#include <sys/types.h>
#include <sys/wait.h>
#include <time.h>

void my_putchar(char c);
int my_putstr(char const *str);
int my_atoi(char *str);
void  print_game_board(board_t *board);
int my_getnbr(char *str);
void check_error_line(board_t *board);
int creat_board(board_t *board);
int initialisation(board_t *board, char **av, loop_t *loop);
int my_put_nbr(int nb);
void check_error_matche(board_t *board);
void get_info_matches(board_t *board, loop_t *loop);
void get_info_line(board_t *board, loop_t *loop);
void print_text(board_t *board);
void refresh_board(board_t *board, loop_t *loop);
void fill_tabint(board_t *board);
int alloc_tabint(board_t *board);
void fill_board(board_t *board);
void ia_turn(board_t *board, loop_t *loop);
void refresh_board_ia(board_t *board);
void play(board_t *board, loop_t *loop);
int winner(board_t *board);

board_t *struct_fill_board(void);
loop_t *struct_fill_loop(void);

#endif /* !MY_H_ */
