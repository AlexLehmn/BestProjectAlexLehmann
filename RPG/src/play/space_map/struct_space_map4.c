/*
** EPITECH PROJECT, 2021
** struct_space_map4.c
** File description:
** struct_space_map4
*/

#include "../../include/my_rpg.h"

v_space_map_t *struct_fill_v_space_map3(v_space_map_t *v_s_map)
{
    for (int i = 0; i < 50; i++) {
        v_s_map = struct_fill_v_space_map4(v_s_map, i);
        v_s_map = struct_fill_v_space_map9(v_s_map, i);
    }
    v_s_map->spe_pos[1][11] = 56;
    v_s_map->spe_pos[1][40] = 56;
    v_s_map->spe_pos[2][1] = 1;
    v_s_map->spe_pos[2][3] = 2;
    v_s_map->spe_pos[2][29] = 2;
    v_s_map->spe_pos[2][8] = 14;
    v_s_map->spe_pos[2][9] = 15;
    v_s_map->spe_pos[2][24] = 15;
    v_s_map->spe_pos[2][18] = 12;
    v_s_map->spe_pos[2][21] = 13;
    v_s_map->spe_pos[2][22] = 12;
    v_s_map->spe_pos[2][41] = 13;
    v_s_map->spe_pos[2][43] = 10;
    v_s_map->spe_pos[2][48] = 11;
    v_s_map->spe_pos[2][49] = 10;
    return (v_s_map);
}

v_space_map_t *struct_fill_v_space_map2(v_space_map_t *v_s_map)
{
    v_s_map->spe_p[0][12] = 207;
    v_s_map->spe_p[0][37] = 210;
    v_s_map->spe_p[0][38] = 208;
    v_s_map->spe_p[0][49] = 218;
    v_s_map->spe_p[1][5] = 220;
    v_s_map->spe_p[1][30] = 220;
    v_s_map->spe_p[1][1] = 212;
    v_s_map->spe_p[1][27] = 212;
    v_s_map->spe_p[2][3] = 109;
    v_s_map->spe_p[2][37] = 109;
    v_s_map->spe_p[2][6] = 112;
    v_s_map->spe_p[2][9] = 120;
    v_s_map->spe_p[2][16] = 116;
    v_s_map->spe_p[2][21] = 123;
    v_s_map->spe_p[2][48] = 123;
    v_s_map->spe_p[2][23] = 134;
    v_s_map->spe_p[2][27] = 125;
    v_s_map->spe_p[2][35] = 125;
    v_s_map = struct_fill_v_space_map3(v_s_map);
    return (v_s_map);
}

v_space_map_t *struct_fill_v_space_map(void)
{
    v_space_map_t *v_s_map = malloc(sizeof(v_space_map_t));

    v_s_map->ship_val = 1;
    v_s_map->dir_ship = 0;
    v_s_map->i = -1;
    v_s_map->v_planet = 0;
    for (int i = 0; i < 4; i++)
        v_s_map->k[i] = 0;
    v_s_map->last_pos_planet[0] = -2647;
    v_s_map->last_pos_planet[1] = 440;
    v_s_map->last_pos_planet[2] = 2674;
    v_s_map->last_pos_planet[3] = 4212;
    v_s_map->spe_p[2][29] = 108;
    v_s_map->spe_p[2][31] = 118;
    v_s_map->spe_p[3][19] = 220;
    v_s_map->spe_p[3][22] = 212;
    v_s_map->spe_p[3][44] = 220;
    v_s_map->spe_p[3][48] = 212;
    v_s_map = struct_fill_v_space_map2(v_s_map);
    return (v_s_map);
}