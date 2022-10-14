/*
** EPITECH PROJECT, 2021
** anime_planet.c
** File description:
** anime_planet
*/

#include "../../include/my_rpg.h"

void check_if_planet_visible(game_t *gm, int i)
{
    float x = gm->play->s_map->r_planet[i].width * 1.7;
    float y = gm->play->s_map->r_planet[i].height * 1.7;

    if (gm->play->s_map->pos_planet[i].x >= 0 &&
    gm->play->s_map->pos_planet[i].x <= 1920 &&
    ((gm->play->s_map->pos_planet[i].y >= 0 &&
    gm->play->s_map->pos_planet[i].y <= 1053) ||
    (gm->play->s_map->pos_planet[i].y + y >= 0 &&
    gm->play->s_map->pos_planet[i].y + y <= 1053)))
        gm->play->v_s_map->v_planet = 1;
    if (gm->play->s_map->pos_planet[i].x + x >= 0 &&
    gm->play->s_map->pos_planet[i].x + x <= 1920 &&
    ((gm->play->s_map->pos_planet[i].y >= 0 &&
    gm->play->s_map->pos_planet[i].y <= 1053) ||
    (gm->play->s_map->pos_planet[i].y + y >= 0 &&
    gm->play->s_map->pos_planet[i].y + y <= 1053)) &&
    gm->play->v_s_map->v_planet == 0)
        gm->play->v_s_map->v_planet = 1;
}

void anime_classic_planet(game_t *gm, int i)
{
    gm->play->s_map->time_p[i] = sfClock_getElapsedTime(
    gm->play->s_map->clock_p[i]);
    gm->play->v_s_map->second_p[i] = gm->play->s_map->time_p[i].microseconds /
    1000000.0;
    if (gm->play->v_s_map->second_p[i] > 0.12) {
        if (gm->play->s_map->r_planet[i].left < 4900)
            gm->play->s_map->r_planet[i].left += 100;
        else
            gm->play->s_map->r_planet[i].left = 0;
        sfClock_restart(gm->play->s_map->clock_p[i]);
    }
}

void anime_special_planet(game_t *gm, int i)
{
    if (i == 8)
        anime_marron_planet(gm);
    if (i == 9)
        anime_blue_planet(gm);
    if (i == 10)
        anime_stars_planet(gm);
    if (i == 11)
        anime_yellow_planet(gm);
}

void anime_planet(game_t *gm)
{
    for (int i = 0; i < 12; i++) {
        gm->play->v_s_map->v_planet = 0;
        check_if_planet_visible(gm, i);
        if (gm->play->v_s_map->v_planet == 1 && i < 8) {
            anime_classic_planet(gm, i);
            sfSprite_setTextureRect(gm->play->s_map->planet[i],
            gm->play->s_map->r_planet[i]);
        } if (gm->play->v_s_map->v_planet == 1 && i > 7) {
            anime_special_planet(gm, i);
            sfSprite_setTextureRect(gm->play->s_map->planet[i],
            gm->play->s_map->r_planet[i]);
        }
    }
}