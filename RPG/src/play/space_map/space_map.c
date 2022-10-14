/*
** EPITECH PROJECT, 2021
** space_map.c
** File description:
** space_map
*/

#include "../../include/my_rpg.h"

void direction_ship_event(game_t *gm)
{
    if (gm->ev->event.key.code == sfKeyUp &&
    gm->play->v_s_map->dir_ship != 0) {
        gm->play->v_s_map->i = 0;
    } if (gm->ev->event.key.code == sfKeyRight &&
    gm->play->v_s_map->dir_ship != 90) {
        gm->play->v_s_map->i = 1;
    } if (gm->ev->event.key.code == sfKeyDown &&
    gm->play->v_s_map->dir_ship != 180) {
        gm->play->v_s_map->i = 2;
    } if (gm->ev->event.key.code == sfKeyLeft &&
    gm->play->v_s_map->dir_ship != 270) {
        gm->play->v_s_map->i = 3;
    }
}

void mooving_on_map(game_t *gm)
{
    if (gm->play->v_s_map->v_m_ship == 0) {
        moove_up_ship(gm);
        moove_down_ship(gm);
        moove_left_ship(gm);
        moove_right_ship(gm);
    }
}

void draw_space_map(game_t *gm)
{
    for (int i = 0; i < 4; i++) {
        sfRenderWindow_drawSprite(gm->win->win, gm->play->s_map->map[i],
        NULL);
    }
    for (int i = 0; i < 13; i++) {
        gm->play->v_s_map->v_planet = 0;
        check_if_planet_visible(gm, i);
        if (gm->play->v_s_map->v_planet == 1) {
            sfRenderWindow_drawSprite(gm->win->win, gm->play->s_map->planet[i],
            NULL);
        }
    } if (gm->play->v_s_map->i == -1) {
        sfRenderWindow_drawSprite(gm->win->win, gm->play->s_map->ship,
        NULL);
    }
}

void space_map(game_t *gm)
{
    sfSprite_setTexture(gm->play->s_map->ship,
    gm->play->s_map->t_ship[gm->play->v_s_map->ship_val], sfTrue);
    draw_space_map(gm);
    anime_planet(gm);
    if (gm->play->v_s_map->v_m_ship == 0)
        set_direction_ship(gm);
    for (int i = 0; i <= 8; i++) {
        collision_right(gm, i);
        collision_left(gm, i);
        collision_top(gm, i);
        collision_bottom(gm, i);
    }
}