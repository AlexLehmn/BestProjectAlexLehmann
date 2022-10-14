/*
** EPITECH PROJECT, 2021
** condition_anime_special_planet.c
** File description:
** condition_anime_special_planet
*/

#include "../../include/my_rpg.h"

void new_position_blue_planet(game_t *gm, int i)
{
    float count = 0;

    if (i < 49) {
        count = (gm->play->v_s_map->spe_pos[1][i] * 1.7) -
        (gm->play->v_s_map->spe_pos[1][i + 1] * 1.7);
        gm->play->s_map->pos_planet[9].x += count;
    } if (i == 0)
        gm->play->s_map->pos_planet[9].x =
        gm->play->v_s_map->last_pos_planet[1];
    sfSprite_setPosition(gm->play->s_map->planet[9],
    gm->play->s_map->pos_planet[9]);
}

void new_position_marron_planet(game_t *gm, int i)
{
    float count = 0;

    if (i < 49) {
        count = (gm->play->v_s_map->spe_pos[0][i] * 1.7) -
        (gm->play->v_s_map->spe_pos[0][i + 1] * 1.7);
        gm->play->s_map->pos_planet[8].x += count;
    } if (i == 0)
        gm->play->s_map->pos_planet[8].x =
        gm->play->v_s_map->last_pos_planet[0];
    sfSprite_setPosition(gm->play->s_map->planet[8],
    gm->play->s_map->pos_planet[8]);
}

void new_position_stars_planet(game_t *gm, int i)
{
    float count = 0;

    if (i < 49) {
        count = (gm->play->v_s_map->spe_pos[2][i] * 1.7) -
        (gm->play->v_s_map->spe_pos[2][i + 1] * 1.7);
        gm->play->s_map->pos_planet[10].x += count;
    } if (i == 0)
        gm->play->s_map->pos_planet[10].x =
        gm->play->v_s_map->last_pos_planet[2];
    sfSprite_setPosition(gm->play->s_map->planet[10],
    gm->play->s_map->pos_planet[10]);
}

void new_position_yellow_planet(game_t *gm, int i)
{
    float count = 0;

    if (i < 49) {
        count = (gm->play->v_s_map->spe_pos[3][i] * 1.7) -
        (gm->play->v_s_map->spe_pos[3][i + 1] * 1.7);
        gm->play->s_map->pos_planet[11].x += count;
    } if (i == 0)
        gm->play->s_map->pos_planet[11].x =
        gm->play->v_s_map->last_pos_planet[3];
    sfSprite_setPosition(gm->play->s_map->planet[11],
    gm->play->s_map->pos_planet[11]);
}