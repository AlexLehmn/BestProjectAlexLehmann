/*
** EPITECH PROJECT, 2021
** initialisation2.c
** File description:
** initialisation2
*/

#include "../include/my_rpg.h"

void init_pos_c_planet(game_t *gm)
{
    gm->play->s_map->pos_planet[0].x = -1148;
    gm->play->s_map->pos_planet[0].y = -1276;
    gm->play->s_map->pos_planet[1].x = 1716;
    gm->play->s_map->pos_planet[1].y = -884;
    gm->play->s_map->pos_planet[2].x = -2062;
    gm->play->s_map->pos_planet[2].y = -185;
    gm->play->s_map->pos_planet[3].x = 36;
    gm->play->s_map->pos_planet[3].y = -204;
    gm->play->s_map->pos_planet[4].x = 3377;
    gm->play->s_map->pos_planet[4].y = -197;
    gm->play->s_map->pos_planet[5].x = -1420;
    gm->play->s_map->pos_planet[5].y = 908;
    gm->play->s_map->pos_planet[6].x = 2437;
    gm->play->s_map->pos_planet[6].y = 585;
    gm->play->s_map->pos_planet[7].x = 4131;
    gm->play->s_map->pos_planet[7].y = 1128;
}

void init_pos_s_planet(game_t *gm)
{
    gm->play->s_map->pos_planet[8].x = -2647;
    gm->play->s_map->pos_planet[8].y = -2310;
    gm->play->s_map->pos_planet[9].x = 440;
    gm->play->s_map->pos_planet[9].y = -1941;
    gm->play->s_map->pos_planet[10].x = 2674;
    gm->play->s_map->pos_planet[10].y = -1985;
    gm->play->s_map->pos_planet[11].x = 4212;
    gm->play->s_map->pos_planet[11].y = -1727;
    gm->play->s_map->pos_planet[12].x = 728;
    gm->play->s_map->pos_planet[12].y = 628;
}

void init_pos_map(game_t *gm)
{
    gm->play->s_map->pos_map[0].x = 958;
    gm->play->s_map->pos_map[0].y = -394;
    gm->play->s_map->pos_map[1].x = -2882;
    gm->play->s_map->pos_map[1].y = -394;
    gm->play->s_map->pos_map[2].x = 958;
    gm->play->s_map->pos_map[2].y = -2554;
    gm->play->s_map->pos_map[3].x = -2882;
    gm->play->s_map->pos_map[3].y = -2554;
    for (int i = 0; i < 4; i++) {
        sfSprite_setPosition(gm->play->s_map->map[i],
        gm->play->s_map->pos_map[i]);
    }
}

void init_space_map2(game_t *gm)
{
    sfSprite_setTexture(gm->play->s_map->planet[12],
    gm->play->s_map->c_planet[12], sfTrue);
    sfSprite_setPosition(gm->play->s_map->planet[12],
    gm->play->s_map->pos_planet[12]);
    sfSprite_setPosition(gm->play->s_map->ship,
    gm->play->s_map->pos_ship);
}

void init_space_map(game_t *gm)
{
    init_pos_c_planet(gm);
    init_pos_s_planet(gm);
    init_pos_map(gm);
    init_pos_ship(gm);
    init_text_planet(gm);
    init_space_map2(gm);
}