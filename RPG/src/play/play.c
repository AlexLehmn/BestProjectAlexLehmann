/*
** EPITECH PROJECT, 2021
** play.c
** File description:
** play
*/

#include "../include/my_rpg.h"

void event_play(game_t *gm)
{
    int i = 0;

    while (sfRenderWindow_pollEvent(gm->win->win, &gm->ev->event)) {
        if (gm->ev->event.type == sfEvtClosed)
            sfRenderWindow_close(gm->win->win);
        if (gm->ev->event.type == sfEvtKeyPressed &&
        gm->ev->event.key.code == sfKeyEscape) {
            if (gm->echap->i == 0) {
                gm->echap->i = 1;
                i = 1;
            } if (gm->echap->i == 1 && i == 0)
                gm->echap->i = 0;
        }
        if (gm->ev->event.type == sfEvtMouseButtonPressed
            && gm->ev->event.mouseButton.button == sfMouseLeft) {
                click_resume(gm);
                click_e_menu(gm);
                click_quit(gm);
            }
        if (gm->ev->event.type == sfEvtKeyPressed &&
        gm->ev->event.key.code == sfKeyP) {
            if (gm->play->inv->press == 0) {
                gm->play->inv->press = 1;
                i = 1;
            } if (gm->play->inv->press == 1 && i == 0)
                gm->play->inv->press = 0;
        }
        if (gm->ev->event.type == sfEvtKeyPressed &&
        gm->echap->i == 0) {
            direction_ship_event(gm);
            for (int i = 0; i <= 8; i++) {
                collision_planet(gm, i);
                collision_planet2(gm, i);
            }
            mooving_on_map(gm);
            sfSprite_setPosition(gm->play->s_map->ship,
            gm->play->s_map->pos_ship);
        }
    }
}

void play(game_t *gm)
{
    event_play(gm);
    if (gm->play->scene_play == 1) {
        interface(gm);
        space_map(gm);
    }
    if (gm->echap->i == 1) {
        echap_p(gm);
    }
}