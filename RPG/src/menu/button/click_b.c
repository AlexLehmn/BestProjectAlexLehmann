/*
** EPITECH PROJECT, 2021
** menu.c
** File description:
** menu
*/

#include "../../include/my_rpg.h"

void button_click_p(game_t *gm)
{
    if (gm->win->mouse_pos.x >= 800 && gm->win->mouse_pos.x <= 800 + 321 &&
        gm->win->mouse_pos.y >= 400 && gm->win->mouse_pos.y <= 400 + 100) {
        gm->scene = 3;
        sfSound_play(gm->sound->sfx);
        sfSleep(sfSeconds(0.35));
    }
}

void button_click_o(game_t *gm)
{
    if (gm->win->mouse_pos.x >= 800 && gm->win->mouse_pos.x <= 800 + 321 &&
        gm->win->mouse_pos.y >= 550 && gm->win->mouse_pos.y <= 550 + 100) {
        gm->scene = 2;
        sfSound_play(gm->sound->sfx);
        sfSleep(sfSeconds(0.35));
    }
}

void button_click_t(game_t *gm)
{
    if (gm->win->mouse_pos.x >= 800 && gm->win->mouse_pos.x <= 800 + 321 &&
        gm->win->mouse_pos.y >= 700 && gm->win->mouse_pos.y <= 700 + 100) {
        gm->scene = 6;
        sfSound_play(gm->sound->sfx);
        sfSleep(sfSeconds(0.35));
    }
}

void button_click_q(game_t *gm)
{
    if (gm->win->mouse_pos.x >= 800 && gm->win->mouse_pos.x <= 800 + 321 &&
        gm->win->mouse_pos.y >= 850 && gm->win->mouse_pos.y <= 850 + 100) {
        sfSleep(sfSeconds(0.35));
        sfSound_play(gm->sound->sfx);
        sfRenderWindow_close(gm->win->win);
    }
}