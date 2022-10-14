/*
** EPITECH PROJECT, 2021
** anime_special_planet.c
** File description:
** anime_special_planet
*/

#include "../../include/my_rpg.h"

void anime_blue_planet2(game_t *gm, int j, int i)
{
    if (j != 49 && j != 36) {
        gm->play->s_map->r_planet[9].left +=
        gm->play->v_s_map->spe_p[1][j];
        gm->play->s_map->r_planet[9].width =
        gm->play->v_s_map->spe_p[1][j + 1];
        gm->play->v_s_map->k[1]++;
        i = 1;
    } if (j == 36 && i == 0) {
        gm->play->s_map->r_planet[9].top = 187;
        gm->play->s_map->r_planet[9].left = 0;
        gm->play->s_map->r_planet[9].width = 216;
        gm->play->v_s_map->k[1]++;
    } if (j == 49 && i == 0) {
        gm->play->s_map->r_planet[9].top = 0;
        gm->play->s_map->r_planet[9].left = 0;
        gm->play->s_map->r_planet[9].width = 216;
        gm->play->v_s_map->k[1] = 0;
    }
}

void anime_blue_planet(game_t *gm)
{
    int i = 0;
    int j = gm->play->v_s_map->k[1];

    gm->play->s_map->time_p[9] = sfClock_getElapsedTime(
    gm->play->s_map->clock_p[9]);
    gm->play->v_s_map->second_p[9] = gm->play->s_map->time_p[9].microseconds /
    1000000.0;
    if (gm->play->v_s_map->second_p[9] > 0.11) {
        new_position_blue_planet(gm, j);
        anime_blue_planet2(gm, j, i);
        sfClock_restart(gm->play->s_map->clock_p[9]);
    }
}

void anime_marron_planet2(game_t *gm, int j, int i)
{
    if (j != 49 && j != 37) {
        gm->play->s_map->r_planet[8].left +=
        gm->play->v_s_map->spe_p[0][j];
        gm->play->s_map->r_planet[8].width =
        gm->play->v_s_map->spe_p[0][j + 1];
        gm->play->v_s_map->k[0]++;
        i = 1;
    } if (j == 37 && i == 0) {
        gm->play->s_map->r_planet[8].top = 185;
        gm->play->s_map->r_planet[8].left = 0;
        gm->play->s_map->r_planet[8].width = 208;
        gm->play->v_s_map->k[0]++;
    } if (j == 49 && i == 0) {
        gm->play->s_map->r_planet[8].top = 0;
        gm->play->s_map->r_planet[8].left = 0;
        gm->play->s_map->r_planet[8].width = 216;
        gm->play->v_s_map->k[0] = 0;
    }
}

void anime_marron_planet(game_t *gm)
{
    int i = 0;
    int j = gm->play->v_s_map->k[0];

    gm->play->s_map->time_p[8] = sfClock_getElapsedTime(
    gm->play->s_map->clock_p[8]);
    gm->play->v_s_map->second_p[8] = gm->play->s_map->time_p[8].microseconds /
    1000000.0;
    if (gm->play->v_s_map->second_p[8] > 0.11) {
        new_position_marron_planet(gm, j);
        anime_marron_planet2(gm, j, i);
        sfClock_restart(gm->play->s_map->clock_p[8]);
    }
}