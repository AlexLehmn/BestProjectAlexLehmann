/*
** EPITECH PROJECT, 2021
** event.c
** File description:
** event
*/

#include "../include/my_rpg.h"

void draw_win_page(game_t *gm)
{
    sfRenderWindow_drawSprite(gm->win->win, gm->final->win_page->background, NULL);
    sfRenderWindow_drawSprite(gm->win->win ,gm->final->win_page->button, NULL);
}

void pollevent_win_page(game_t *gm)
{
    while (sfRenderWindow_pollEvent(gm->win->win, &gm->ev->event)) {
        if (gm->ev->event.type == sfEvtClosed)
            sfRenderWindow_close(gm->win->win);
    }
}

void win_page(game_t *gm)
{
    sfRenderWindow_clear(gm->win->win, sfBlack);
    pollevent_win_page(gm);
    draw_win_page(gm);
}

void reset_game(game_t *gm)
{
    struct_fill_stats_character(gm->final);
}

void draw_win(game_t *gm)
{
    if (gm->final->win == 1) {
        gm->scene = 11;
        gm->final->win = 0;
    }
}