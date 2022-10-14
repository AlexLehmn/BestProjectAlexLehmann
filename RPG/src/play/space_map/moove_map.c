/*
** EPITECH PROJECT, 2021
** moove_map.c
** File description:
** moove_map
*/

#include "../../include/my_rpg.h"

void recup_last_pos_planet(game_t *gm, int i)
{
    if (i == 8) {
        gm->play->v_s_map->last_pos_planet[0] =
        gm->play->s_map->pos_planet[8].x;
    } if (i == 9) {
        gm->play->v_s_map->last_pos_planet[1] =
        gm->play->s_map->pos_planet[9].x;
    } if (i == 10) {
        gm->play->v_s_map->last_pos_planet[2] =
        gm->play->s_map->pos_planet[10].x;
    } if (i == 11) {
        gm->play->v_s_map->last_pos_planet[3] =
        gm->play->s_map->pos_planet[11].x;
    }
}

void up_moove_map(game_t *gm)
{
    for (int i = 0; i < 13; i++) {
        gm->play->s_map->pos_planet[i].y += 10;
        if (i < 4) {
            gm->play->s_map->pos_map[i].y += 10;
            sfSprite_setPosition(gm->play->s_map->map[i],
            gm->play->s_map->pos_map[i]);
        }
        sfSprite_setPosition(gm->play->s_map->planet[i],
        gm->play->s_map->pos_planet[i]);
    }
}

void right_moove_map(game_t *gm)
{
    for (int i = 0; i < 13; i++) {
        gm->play->s_map->pos_planet[i].x -= 10;
        if (i < 4) {
            gm->play->s_map->pos_map[i].x -= 10;
            sfSprite_setPosition(gm->play->s_map->map[i],
            gm->play->s_map->pos_map[i]);
        }
        recup_last_pos_planet(gm, i);
        sfSprite_setPosition(gm->play->s_map->planet[i],
        gm->play->s_map->pos_planet[i]);
    }
}

void down_moove_map(game_t *gm)
{
    for (int i = 0; i < 13; i++) {
        gm->play->s_map->pos_planet[i].y -= 10;
        if (i < 4) {
            gm->play->s_map->pos_map[i].y -= 10;
            sfSprite_setPosition(gm->play->s_map->map[i],
            gm->play->s_map->pos_map[i]);
        }
        sfSprite_setPosition(gm->play->s_map->planet[i],
        gm->play->s_map->pos_planet[i]);
    }
}

void left_moove_map(game_t *gm)
{
    for (int i = 0; i < 13; i++) {
        gm->play->s_map->pos_planet[i].x += 10;
        if (i < 4) {
            gm->play->s_map->pos_map[i].x += 10;
            sfSprite_setPosition(gm->play->s_map->map[i],
            gm->play->s_map->pos_map[i]);
        }
        recup_last_pos_planet(gm, i);
        sfSprite_setPosition(gm->play->s_map->planet[i],
        gm->play->s_map->pos_planet[i]);
    }
}