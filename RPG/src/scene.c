/*
** EPITECH PROJECT, 2021
** scene.c
** File description:
** scene
*/

#include "include/my_rpg.h"

void scene(game_t *gm)
{
    gm->win->mouse_pos.x = sfMouse_getPositionRenderWindow(gm->win->win).x;
    gm->win->mouse_pos.y = sfMouse_getPositionRenderWindow(gm->win->win).y;
    if (gm->scene == 0)
        menu(gm);
    if (gm->scene == 1)
        play(gm);
    if (gm->scene == 2)
        option(gm);
    if (gm->scene == 4)
        story(gm);
    if (gm->scene == 6)
        tuto(gm);
    if (gm->scene == 3)
        custom(gm);
    if (gm->scene == 14)
        loading_planet(gm);
    if (gm->scene == 15)
        loading_planet2(gm);
    if (gm->scene == 16)
        final_boss(gm);
    if (gm->scene == 11)
        win_page(gm);
    if (gm->scene == 12)
        lose_page(gm);
}