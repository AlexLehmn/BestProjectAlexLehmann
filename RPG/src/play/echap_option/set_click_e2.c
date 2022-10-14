/*
** EPITECH PROJECT, 2021
** set
** File description:
** set
*/

#include "../../include/my_rpg.h"

void mous_quit(game_t *gm)
{
    if (gm->win->mouse_pos.x >= 790
    && gm->win->mouse_pos.x <= 1100
    && gm->win->mouse_pos.y >= 680
    && gm->win->mouse_pos.y <= 780) {
        sfSprite_setScale(gm->echap->b_quit, (sfVector2f){1.1, 1.1});
        sfSprite_setPosition(gm->echap->b_quit, (sfVector2f){773, 675});
    } else {
        sfSprite_setScale(gm->echap->b_quit, (sfVector2f){1, 1});
        sfSprite_setPosition(gm->echap->b_quit, (sfVector2f){790, 680});
    }
}

void click_quit(game_t *gm)
{
    if (gm->win->mouse_pos.x >= 790
    && gm->win->mouse_pos.x <= 1100
    && gm->win->mouse_pos.y >= 680
    && gm->win->mouse_pos.y <= 780
    && gm->echap->i == 1) {
        sfRenderWindow_close(gm->win->win);
    }
}