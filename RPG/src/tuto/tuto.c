/*
** EPITECH PROJECT, 2021
** tuto
** File description:
** tuto
*/

#include "../include/my_rpg.h"

void poll_event_tuto(game_t *gm)
{
    while (sfRenderWindow_pollEvent(gm->win->win, &gm->ev->event)) {
        if (gm->ev->event.type == sfEvtClosed)
            sfRenderWindow_close(gm->win->win);
        if (gm->ev->event.type == sfEvtMouseButtonPressed
        && gm->ev->event.mouseButton.button == sfMouseLeft) {
            set_click_tuto(gm);
        }
    }
}

void print_sprite_tu(game_t *gm)
{
    sfRenderWindow_drawSprite(gm->win->win, gm->tuto->bg_tu, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->tuto->fond, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->tuto->separator, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->tuto->touche, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->tuto->ship, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->tuto->perso, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->tuto->touche2, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->tuto->touche3, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->tuto->espace, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->tuto->boss, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->tuto_text->b_exit, NULL);
}

void print_text_tu(game_t *gm)
{
    sfRenderWindow_drawText(gm->win->win, gm->tuto_text->custom, NULL);
    sfRenderWindow_drawText(gm->win->win, gm->tuto_text->space, NULL);
    sfRenderWindow_drawText(gm->win->win, gm->tuto_text->planete, NULL);
    sfRenderWindow_drawText(gm->win->win, gm->tuto_text->boss, NULL);
}

void print_all_tuto(game_t *gm)
{
    gm->win->mouse_pos.x = sfMouse_getPositionRenderWindow(gm->win->win).x;
    gm->win->mouse_pos.y = sfMouse_getPositionRenderWindow(gm->win->win).y;
    poll_event_tuto(gm);
    print_sprite_tu(gm);
    print_text_tu(gm);
    set_mous_y(gm);
    print_lang_tuto(gm);
}

void tuto(game_t *gm)
{
    sfRenderWindow_clear(gm->win->win, sfBlack);
    print_all_tuto(gm);
}