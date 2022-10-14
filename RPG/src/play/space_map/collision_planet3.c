/*
** EPITECH PROJECT, 2021
** collision_planet3.c
** File description:
** collision_planet3
*/

#include "../../include/my_rpg.h"

void collision_bottom2(game_t *gm, int i)
{
    if ((gm->ev->event.type == sfEvtMouseButtonPressed ||
        gm->ev->event.type == sfEvtMouseButtonReleased) &&
        gm->ev->event.mouseButton.button == sfMouseLeft &&
        gm->win->mouse_pos.x >= gm->play->s_map->pos_planet[i].x + 130 &&
        gm->win->mouse_pos.x <= gm->play->s_map->pos_planet[i].x + 181.2 &&
        gm->win->mouse_pos.y >= gm->play->s_map->pos_planet[i].y + 40 &&
        gm->win->mouse_pos.y <= gm->play->s_map->pos_planet[i].y + 58.2)
            down_direction_ship(gm);
    if (gm->ev->event.type == sfEvtMouseButtonPressed &&
        gm->ev->event.mouseButton.button == sfMouseLeft &&
        gm->win->mouse_pos.x >= gm->play->s_map->pos_planet[i].x + 25 &&
        gm->win->mouse_pos.x <= gm->play->s_map->pos_planet[i].x + 76.2 &&
        gm->win->mouse_pos.y >= gm->play->s_map->pos_planet[i].y + 40 &&
        gm->win->mouse_pos.y <= gm->play->s_map->pos_planet[i].y + 58.2 &&
            i == 6)
            gm->scene = 14;
}

void collision_bottom(game_t *gm, int i)
{
    if (gm->play->v_s_map->p == 0) {
        collision_bottom2(gm, i);
        if (gm->play->v_s_map->dir_ship == 180) {
            gm->play->v_s_map->p = -1;
            gm->play->v_s_map->v_m_ship = 0;
        }
        if (i == 6)
            print_text_planet(gm, i);
        else
            print_text_planet_w(gm, i);
    }
}

void scaling_ship(game_t *gm)
{
    float i = 1;

    while (i > 0.5) {
        gm->play->s_map->pos_ship.y += 100;
        sfRenderWindow_drawSprite(gm->win->win, gm->play->s_map->ship, NULL);
        i -= 0.1;
    }
    gm->scene = 14;
}

void collision_top2(game_t *gm, int i)
{
    if ((gm->ev->event.type == sfEvtMouseButtonPressed ||
        gm->ev->event.type == sfEvtMouseButtonReleased) &&
        gm->ev->event.mouseButton.button == sfMouseLeft &&
        gm->win->mouse_pos.x >= gm->play->s_map->pos_planet[i].x + 130 &&
        gm->win->mouse_pos.x <= gm->play->s_map->pos_planet[i].x + 181.2 &&
        gm->win->mouse_pos.y >= gm->play->s_map->pos_planet[i].y + 40 &&
        gm->win->mouse_pos.y <= gm->play->s_map->pos_planet[i].y + 58.2)
            up_direction_ship(gm);
    if (gm->ev->event.type == sfEvtMouseButtonPressed &&
        gm->ev->event.mouseButton.button == sfMouseLeft &&
        gm->win->mouse_pos.x >= gm->play->s_map->pos_planet[i].x + 25 &&
        gm->win->mouse_pos.x <= gm->play->s_map->pos_planet[i].x + 76.2 &&
        gm->win->mouse_pos.y >= gm->play->s_map->pos_planet[i].y + 40 &&
        gm->win->mouse_pos.y <= gm->play->s_map->pos_planet[i].y + 58.2 &&
            i == 6)
        scaling_ship(gm);
}

void collision_top(game_t *gm, int i)
{
    if (gm->play->v_s_map->p == 2) {
        collision_top2(gm, i);
        if (gm->play->v_s_map->dir_ship == 0) {
            gm->play->v_s_map->p = -1;
            gm->play->v_s_map->v_m_ship = 0;
        }
        if (i == 6)
            print_text_planet(gm, i);
        else
            print_text_planet_w(gm, i);
    }
}
