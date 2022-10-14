/*
** EPITECH PROJECT, 2021
** echap
** File description:
** echap
*/

#include "../../include/my_rpg.h"

void print_sprite_echap(game_t *gm)
{
    sfRenderWindow_drawRectangleShape(gm->win->win, gm->echap->noir, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->echap->b_resume, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->echap->b_quit, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->echap->b_menu, NULL);
    sfRenderWindow_drawText(gm->win->win, gm->echap->pause_echap, NULL);
    sfRenderWindow_drawText(gm->win->win, gm->echap->resume_echap, NULL);
    sfRenderWindow_drawText(gm->win->win, gm->echap->rturn_menu, NULL);
    sfRenderWindow_drawText(gm->win->win, gm->echap->quit_echap, NULL);
}

void init_echap(game_t *gm)
{
    init_e(gm);
    init_e2(gm);
}

void print_all_echap(game_t *gm)
{
    gm->win->mouse_pos.x = sfMouse_getPositionRenderWindow(gm->win->win).x;
    gm->win->mouse_pos.y = sfMouse_getPositionRenderWindow(gm->win->win).y;
    print_sprite_echap(gm);
    mous_resume(gm);
    mous_menu(gm);
    mous_quit(gm);
}

void echap_p(game_t *gm)
{
    print_all_echap(gm);
}