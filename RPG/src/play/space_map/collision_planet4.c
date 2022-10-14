/*
** EPITECH PROJECT, 2021
** collision_planet4.c
** File description:
** collision_planet4
*/

#include "../../include/my_rpg.h"

void collision_left2(game_t *gm, int i)
{
    if ((gm->ev->event.type == sfEvtMouseButtonPressed ||
        gm->ev->event.type == sfEvtMouseButtonReleased) &&
        gm->ev->event.mouseButton.button == sfMouseLeft &&
        gm->win->mouse_pos.x >= gm->play->s_map->pos_planet[i].x + 130 &&
        gm->win->mouse_pos.x <= gm->play->s_map->pos_planet[i].x + 181.2 &&
        gm->win->mouse_pos.y >= gm->play->s_map->pos_planet[i].y + 40 &&
        gm->win->mouse_pos.y <= gm->play->s_map->pos_planet[i].y + 58.2)
            right_direction_ship(gm);
    if (gm->ev->event.type == sfEvtMouseButtonPressed &&
        gm->ev->event.mouseButton.button == sfMouseLeft &&
        gm->win->mouse_pos.x >= gm->play->s_map->pos_planet[i].x + 25 &&
        gm->win->mouse_pos.x <= gm->play->s_map->pos_planet[i].x + 76.2 &&
        gm->win->mouse_pos.y >= gm->play->s_map->pos_planet[i].y + 40 &&
        gm->win->mouse_pos.y <= gm->play->s_map->pos_planet[i].y + 58.2 &&
        i == 6)
            gm->scene = 14;
}

void collision_left(game_t *gm, int i)
{
    if (gm->play->v_s_map->p == 3) {
        collision_left2(gm, i);
        if (gm->play->v_s_map->dir_ship == 90) {
            gm->play->v_s_map->p = -1;
            gm->play->v_s_map->v_m_ship = 0;
        }
        if (i == 6)
            print_text_planet(gm, i);
        else
            print_text_planet_w(gm, i);
    }
}

void collision_right2(game_t *gm, int i)
{
    if ((gm->ev->event.type == sfEvtMouseButtonPressed ||
        gm->ev->event.type == sfEvtMouseButtonReleased) &&
        gm->ev->event.mouseButton.button == sfMouseLeft &&
        gm->win->mouse_pos.x >= gm->play->s_map->pos_planet[i].x + 130 &&
        gm->win->mouse_pos.x <= gm->play->s_map->pos_planet[i].x + 181.2 &&
        gm->win->mouse_pos.y >= gm->play->s_map->pos_planet[i].y + 40 &&
        gm->win->mouse_pos.y <= gm->play->s_map->pos_planet[i].y + 58.2)
            left_direction_ship(gm);
    if (gm->ev->event.type == sfEvtMouseButtonPressed &&
        gm->ev->event.mouseButton.button == sfMouseLeft &&
        gm->win->mouse_pos.x >= gm->play->s_map->pos_planet[i].x + 25 &&
        gm->win->mouse_pos.x <= gm->play->s_map->pos_planet[i].x + 76.2 &&
        gm->win->mouse_pos.y >= gm->play->s_map->pos_planet[i].y + 40 &&
        gm->win->mouse_pos.y <= gm->play->s_map->pos_planet[i].y + 58.2 &&
        i == 6)
            gm->scene = 14;
}

void collision_right(game_t *gm, int i)
{
    if (gm->play->v_s_map->p == 1) {
        collision_right2(gm, i);
        if (gm->play->v_s_map->dir_ship == 270) {
            gm->play->v_s_map->p = -1;
            gm->play->v_s_map->v_m_ship = 0;
        }
        if (i == 6)
            print_text_planet(gm, i);
        else
            print_text_planet_w(gm, i);
    }
}
