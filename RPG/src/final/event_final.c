/*
** EPITECH PROJECT, 2021
** event.c
** File description:
** event
*/

#include "../include/my_rpg.h"

void down_cursor(game_t *gm)
{
    if (gm->ev->event.key.code == sfKeyDown) {
        if (gm->final->cadre->mimine->index <= 2) {
            sfSound_play(gm->sound->sfx);
            gm->final->cadre->mimine->index++;
        }
    }
}

void up_cursor(game_t *gm)
{
    if (gm->ev->event.key.code == sfKeyUp) {
        sfSound_play(gm->sound->sfx);
        if (gm->final->cadre->mimine->index >= 1) {
            gm->final->cadre->mimine->index--;
        }
    }
}

void mana_pos_mimine(game_t *gm)
{
    if (gm->ev->event.type == sfEvtKeyPressed) {
        down_cursor(gm);
        up_cursor(gm);
        if (gm->ev->event.key.code == sfKeySpace &&
            gm->final->cadre->mimine->i == 0) {
            gm->final->cadre->mimine->i = 1;
            press_attack(gm);
            press_def(gm);
            press_objet(gm);
            press_soin(gm);
        }
    }
}

void pollevent_final(game_t *gm)
{
    while (sfRenderWindow_pollEvent(gm->win->win, &gm->ev->event)) {
        if (gm->ev->event.type == sfEvtClosed)
            sfRenderWindow_close(gm->win->win);
        if (gm->ev->event.type == sfEvtMouseButtonPressed &&
            gm->ev->event.mouseButton.button == sfMouseLeft) {
            if (final_button_hover_q(gm))
                gm->scene = 0;
        }
        mana_pos_mimine(gm);
        move_pointer(gm);
        final_button_hover(gm);
    }
}