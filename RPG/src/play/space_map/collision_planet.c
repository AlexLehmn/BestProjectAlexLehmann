/*
** EPITECH PROJECT, 2021
** collision_planet.c
** File description:
** collision_planet
*/

#include "../../include/my_rpg.h"

void collision_planet2(game_t *gm, int i)
{
    if (gm->play->s_map->pos_planet[i].x <= 990 &&
    gm->play->s_map->pos_planet[i].x + 170 >= 990 &&
    gm->play->s_map->pos_planet[i].y + 250 >= 510 &&
    gm->play->v_s_map->dir_ship == 0 &&
    gm->play->s_map->pos_planet[i].y < 390 &&
    gm->play->v_s_map->p == -1) {
        gm->play->v_s_map->v_m_ship = 1;
        gm->play->v_s_map->p = 0;
    }
    if (gm->play->s_map->pos_planet[i].x <= 990 &&
    gm->play->s_map->pos_planet[i].x + 170 >= 990 &&
    gm->play->s_map->pos_planet[i].y - 50 <= 560 &&
    gm->play->v_s_map->dir_ship == 180 &&
    gm->play->s_map->pos_planet[i].y + 250 > 730 &&
    gm->play->v_s_map->p == -1) {
        gm->play->v_s_map->v_m_ship = 1;
        gm->play->v_s_map->p = 2;
    }
}

void collision_planet(game_t *gm, int i)
{
    if (gm->play->s_map->pos_planet[i].x - 50 <= 990 &&
    gm->play->s_map->pos_planet[i].x + 170 > 1060 &&
    gm->play->s_map->pos_planet[i].y <= 560 &&
    gm->play->v_s_map->dir_ship == 90 &&
    gm->play->s_map->pos_planet[i].y + 170 >= 560 &&
    gm->play->v_s_map->p == -1) {
        gm->play->v_s_map->v_m_ship = 1;
        gm->play->v_s_map->p = 1;
    }
    if (gm->play->s_map->pos_planet[i].x + 250 >= 920 &&
    gm->play->s_map->pos_planet[i].x  < 840 &&
    gm->play->s_map->pos_planet[i].y <= 560 &&
    gm->play->v_s_map->dir_ship == 270 &&
    gm->play->s_map->pos_planet[i].y + 170 >= 560 &&
    gm->play->v_s_map->p == -1) {
        gm->play->v_s_map->v_m_ship = 1;
        gm->play->v_s_map->p = 3;
    }
}