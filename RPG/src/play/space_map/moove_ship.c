/*
** EPITECH PROJECT, 2021
** moove_ship.c
** File description:
** moove_ship
*/

#include "../../include/my_rpg.h"

void moove_up_ship(game_t *gm)
{
    if (gm->ev->event.key.code == sfKeyUp &&
    gm->play->v_s_map->i == -1) {
        if (gm->play->s_map->pos_map[2].y + 10 <= 0 &&
        gm->play->v_s_map->dir_ship == 0 &&
        gm->play->s_map->pos_ship.y == 526.5)
            up_moove_map(gm);
        if (gm->play->s_map->pos_map[2].y + 10 > 0 &&
        gm->play->v_s_map->dir_ship == 0 &&
        gm->play->s_map->pos_ship.y <= 526.5 &&
        gm->play->s_map->pos_ship.y > 47)
            gm->play->s_map->pos_ship.y -= 10;
        if (gm->play->s_map->pos_map[0].y - 10 < -1107 &&
        gm->play->v_s_map->dir_ship == 0 &&
        gm->play->s_map->pos_ship.y >= 526.5 &&
        gm->play->s_map->pos_ship.y < 1007)
            gm->play->s_map->pos_ship.y -= 10;
    }
}

void moove_down_ship(game_t *gm)
{
    if (gm->ev->event.key.code == sfKeyDown &&
    gm->play->v_s_map->i == -1) {
        if (gm->play->s_map->pos_map[0].y - 10 >= -1107 &&
        gm->play->v_s_map->dir_ship == 180 &&
        gm->play->s_map->pos_ship.y == 526.5)
            down_moove_map(gm);
        if (gm->play->s_map->pos_map[0].y - 10 < -1107 &&
        gm->play->v_s_map->dir_ship == 180 &&
        gm->play->s_map->pos_ship.y >= 526.5 &&
        gm->play->s_map->pos_ship.y < 1006)
            gm->play->s_map->pos_ship.y += 10;
        if (gm->play->s_map->pos_map[2].y + 10 > 0 &&
        gm->play->v_s_map->dir_ship == 180 &&
        gm->play->s_map->pos_ship.y <= 526.5 &&
        gm->play->s_map->pos_ship.y > 46)
            gm->play->s_map->pos_ship.y += 10;
    }
}

void moove_right_ship(game_t *gm)
{
    if (gm->ev->event.key.code == sfKeyRight &&
    gm->play->v_s_map->i == -1) {
        if (gm->play->s_map->pos_map[0].x - 10 >= -1920 &&
        gm->play->v_s_map->dir_ship == 90 &&
        gm->play->s_map->pos_ship.x == 960)
            right_moove_map(gm);
        if (gm->play->s_map->pos_map[0].x - 10 < -1920 &&
        gm->play->v_s_map->dir_ship == 90 &&
        gm->play->s_map->pos_ship.x >= 960 &&
        gm->play->s_map->pos_ship.x < 1880)
            gm->play->s_map->pos_ship.x += 10;
        if (gm->play->s_map->pos_map[1].x + 10 > 0 &&
        gm->play->v_s_map->dir_ship == 90 &&
        gm->play->s_map->pos_ship.x <= 960 &&
        gm->play->s_map->pos_ship.x >= 40)
            gm->play->s_map->pos_ship.x += 10;
    }
}

void moove_left_ship(game_t *gm)
{
    if (gm->ev->event.key.code == sfKeyLeft &&
    gm->play->v_s_map->i == -1) {
        if (gm->play->s_map->pos_map[1].x + 10 <= 0 &&
        gm->play->v_s_map->dir_ship == 270 &&
        gm->play->s_map->pos_ship.x == 960)
            left_moove_map(gm);
        if (gm->play->s_map->pos_map[1].x + 10 > 0 &&
        gm->play->v_s_map->dir_ship == 270 &&
        gm->play->s_map->pos_ship.x <= 960 &&
        gm->play->s_map->pos_ship.x > 40)
            gm->play->s_map->pos_ship.x -= 10;
        if (gm->play->s_map->pos_map[0].x - 10 < -1920 &&
        gm->play->v_s_map->dir_ship == 270 &&
        gm->play->s_map->pos_ship.x >= 960 &&
        gm->play->s_map->pos_ship.x <= 1880)
            gm->play->s_map->pos_ship.x -= 10;
    }
}