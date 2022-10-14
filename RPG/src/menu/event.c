/*
** EPITECH PROJECT, 2021
** event.c
** File description:
** event
*/

#include "../include/my_rpg.h"

void pollevent_menu(game_t *gm)
{
    while (sfRenderWindow_pollEvent(gm->win->win, &gm->ev->event)) {
        if (gm->ev->event.type == sfEvtClosed)
            sfRenderWindow_close(gm->win->win);
        button_hover(gm);
        if (gm->ev->event.type == sfEvtMouseButtonPressed &&
        gm->ev->event.mouseButton.button == sfMouseLeft) {
            gm->menu->b_menu->but_pressed = 1;
        }
        if (gm->ev->event.type == sfEvtMouseButtonReleased &&
        gm->ev->event.mouseButton.button == sfMouseLeft) {
            gm->menu->b_menu->but_pressed = 0;
        }
    }
}