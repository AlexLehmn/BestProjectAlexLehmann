/*
** EPITECH PROJECT, 2021
** anime_special_planet2.c
** File description:
** anime_special_planet
*/

#include "../../include/my_rpg.h"

void anime_stars_planet2(game_t *gm, int j, int i)
{
    if (j != 49) {
        gm->play->s_map->r_planet[10].left +=
        gm->play->v_s_map->spe_p[2][j];
        gm->play->s_map->r_planet[10].width =
        gm->play->v_s_map->spe_p[2][j + 1];
        gm->play->v_s_map->k[2]++;
        i = 1;
    } if (j == 49 && i == 0) {
        gm->play->s_map->r_planet[10].left = 0;
        gm->play->s_map->r_planet[10].width = 111;
        gm->play->v_s_map->k[2] = 0;
    }
}

void anime_stars_planet(game_t *gm)
{
    int i = 0;
    int j = gm->play->v_s_map->k[2];

    gm->play->s_map->time_p[10] = sfClock_getElapsedTime(
    gm->play->s_map->clock_p[10]);
    gm->play->v_s_map->second_p[10] = gm->play->s_map->time_p[10].microseconds /
    1000000.0;
    if (gm->play->v_s_map->second_p[10] > 0.11) {
        new_position_stars_planet(gm, j);
        anime_stars_planet2(gm, j, i);
        sfClock_restart(gm->play->s_map->clock_p[10]);
    }
}

void anime_yellow_planet2(game_t *gm, int j, int i)
{
    if (j != 49 && j != 36) {
        gm->play->s_map->r_planet[11].left +=
        gm->play->v_s_map->spe_p[3][j];
        gm->play->s_map->r_planet[11].width =
        gm->play->v_s_map->spe_p[3][j + 1];
        gm->play->v_s_map->k[3]++;
        i = 1;
    } if (j == 36 && i == 0) {
        gm->play->s_map->r_planet[11].top = 187;
        gm->play->s_map->r_planet[11].left = 0;
        gm->play->s_map->r_planet[11].width = 214;
        gm->play->v_s_map->k[3]++;
    } if (j == 49 && i == 0) {
        gm->play->s_map->r_planet[11].top = 0;
        gm->play->s_map->r_planet[11].left = 0;
        gm->play->s_map->r_planet[11].width = 217;
        gm->play->v_s_map->k[3] = 0;
    }
}

void anime_yellow_planet(game_t *gm)
{
    int i = 0;
    int j = gm->play->v_s_map->k[3];

    gm->play->s_map->time_p[11] = sfClock_getElapsedTime(
    gm->play->s_map->clock_p[11]);
    gm->play->v_s_map->second_p[11] = gm->play->s_map->time_p[11].microseconds /
    1000000.0;
    if (gm->play->v_s_map->second_p[11] > 0.11) {
        new_position_yellow_planet(gm, j);
        anime_yellow_planet2(gm, j, i);
        sfClock_restart(gm->play->s_map->clock_p[11]);
    }
}