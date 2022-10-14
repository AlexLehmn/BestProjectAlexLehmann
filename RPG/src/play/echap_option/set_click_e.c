/*
** EPITECH PROJECT, 2021
** click
** File description:
** clcik
*/

#include "../../include/my_rpg.h"

void click_resume(game_t *gm)
{
    if (gm->win->mouse_pos.x >= 790
    && gm->win->mouse_pos.x <= 1100
    && gm->win->mouse_pos.y >= 440
    && gm->win->mouse_pos.y <= 540
    && gm->echap->i == 1) {
        gm->echap->i = 0;
    }

}

void click_e_menu(game_t *gm)
{
    if (gm->win->mouse_pos.x >= 790
    && gm->win->mouse_pos.x <= 1100
    && gm->win->mouse_pos.y >= 550
    && gm->win->mouse_pos.y <= 650
    && gm->echap->i == 1) {
        gm->scene = 0;
        gm->echap->i = 0;
        sfMusic_stop(gm->sound->music_play);
        sfMusic_play(gm->sound->music);
    }
}

void mous_resume(game_t *gm)
{
    if (gm->win->mouse_pos.x >= 790
    && gm->win->mouse_pos.x <= 1100
    && gm->win->mouse_pos.y >= 440
    && gm->win->mouse_pos.y <= 540) {
        sfSprite_setPosition(gm->echap->b_resume, (sfVector2f){773, 435});
        sfSprite_setScale(gm->echap->b_resume, (sfVector2f){1.1, 1.1});
    } else {
        sfSprite_setScale(gm->echap->b_resume, (sfVector2f){1, 1});
        sfSprite_setPosition(gm->echap->b_resume, (sfVector2f){790, 440});
    }
}

void mous_menu(game_t *gm)
{
    if (gm->win->mouse_pos.x >= 790
    && gm->win->mouse_pos.x <= 1100
    && gm->win->mouse_pos.y >= 560
    && gm->win->mouse_pos.y <= 660) {
        sfSprite_setScale(gm->echap->b_menu, (sfVector2f){1.1, 1.1});
        sfSprite_setPosition(gm->echap->b_menu, (sfVector2f){773, 555});
    } else {
        sfSprite_setScale(gm->echap->b_menu, (sfVector2f){1, 1});
        sfSprite_setPosition(gm->echap->b_menu, (sfVector2f){790, 560});
    }
}