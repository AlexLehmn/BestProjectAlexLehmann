/*
** EPITECH PROJECT, 2021
** event.c
** File description:
** event
*/

#include "../include/my_rpg.h"

void draw_lose_page(game_t *game)
{
    sfRenderWindow_drawSprite(game->win->win, game->final->lose_page->background, NULL);
    sfRenderWindow_drawSprite(game->win->win ,game->final->lose_page->button, NULL);
}

void draw_lose(game_t *game)
{
    if (game->final->win == 2) {
        game->scene = 12;
        game->final->win = 0;
    }
}

void pollevent_lose_page(game_t *gm)
{
    while (sfRenderWindow_pollEvent(gm->win->win, &gm->ev->event)) {
        if (gm->ev->event.type == sfEvtClosed)
            sfRenderWindow_close(gm->win->win);
    }
}

void lose_page(game_t *gm)
{
    sfRenderWindow_clear(gm->win->win, sfBlack);
    pollevent_lose_page(gm);
    draw_lose_page(gm);
}