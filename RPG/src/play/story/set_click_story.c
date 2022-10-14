/*
** EPITECH PROJECT, 2021
** click
** File description:
** click
*/

#include "../../include/my_rpg.h"

void set_click_retrn_c(game_t *gm)
{
    if (gm->win->mouse_pos.x >= 10
    && gm->win->mouse_pos.x <= 157
    && gm->win->mouse_pos.y >= 10
    && gm->win->mouse_pos.y <= 157) {
        gm->scene = 3;
        sfSound_play(gm->sound->sfx);
    }
}

void set_click_skip(game_t *gm)
{
    if (gm->win->mouse_pos.x >= 1540
    && gm->win->mouse_pos.x <= 1850
    && gm->win->mouse_pos.y >= 945
    && gm->win->mouse_pos.y <= 1045) {
        gm->scene = 1;
        sfSound_play(gm->sound->sfx);
        sfMusic_stop(gm->sound->music);
        sfMusic_setLoop(gm->sound->music_play, sfTrue);
        sfMusic_play(gm->sound->music_play);
    }
}

void gestion_click_story(game_t *gm)
{
    set_click_retrn_c(gm);
    set_click_skip(gm);
}