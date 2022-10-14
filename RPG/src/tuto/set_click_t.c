/*
** EPITECH PROJECT, 2021
** set
** File description:
** set
*/

#include "../include/my_rpg.h"

void set_click_tuto(game_t *gm)
{
    if (gm->win->mouse_pos.x >= 10
    && gm->win->mouse_pos.x <= 157
    && gm->win->mouse_pos.y >= 10
    && gm->win->mouse_pos.y <= 157) {
        gm->scene = 0;
        sfSound_play(gm->sound->sfx);
        scene(gm);
    }
}

void set_mous_y(game_t *gm)
{
    if (gm->win->mouse_pos.x >= 10
    && gm->win->mouse_pos.x <= 157
    && gm->win->mouse_pos.y >= 10
    && gm->win->mouse_pos.y <= 157) {
        sfSprite_setTexture(gm->tuto_text->b_exit, gm->arrow->t_arrow_y,
    sfTrue);
    } else
        sfSprite_setTexture(gm->tuto_text->b_exit, gm->arrow->t_arrow_rturn,
    sfTrue);
}