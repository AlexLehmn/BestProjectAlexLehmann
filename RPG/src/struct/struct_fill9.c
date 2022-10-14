/*
** EPITECH PROJECT, 2021
** struct
** File description:
** struct
*/

#include "../include/my_rpg.h"

void struct_fill_last_page_lose(final_t *final)
{
    final->lose_page = malloc(sizeof(last_win_page_t));
    final->lose_page->background = sfSprite_create();
    final->lose_page->t_background = sfTexture_createFromFile
                                ("image/final/last_page/gameover.png", NULL);
    final->lose_page->button = sfSprite_create();
    final->lose_page->t_button = sfTexture_createFromFile
                                ("image/final/quit.png", NULL);
}

void struct_fill_last_page(final_t *final)
{
    final->win_page = malloc(sizeof(last_win_page_t));
    final->win_page->background = sfSprite_create();
    final->win_page->t_background = sfTexture_createFromFile
                                ("image/final/last_page/bg_win.png", NULL);
    final->win_page->button = sfSprite_create();
    final->win_page->t_button = sfTexture_createFromFile
                                ("image/final/quit.png", NULL);
    struct_fill_last_page_lose(final);
}