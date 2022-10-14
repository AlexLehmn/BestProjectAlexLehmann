/*
** EPITECH PROJECT, 2021
** struct_space_map_2.c
** File description:
** struct_space_map_2
*/

#include "../../include/my_rpg.h"

v_space_map_t *struct_fill_v_space_map8(v_space_map_t *v_s_map, int i)
{
    if (i == 5 || i == 18 || i == 45)
        v_s_map->spe_p[3][i] = 219;
    if (i == 8 || i == 10 || i == 36 || i == 47)
        v_s_map->spe_p[3][i] = 213;
    if (i == 9 || i == 11 || i == 21 || i == 23 || i == 34 || i == 35 ||
    i == 37 || i == 39)
        v_s_map->spe_p[3][i] = 214;
    return (v_s_map);
}

v_space_map_t *struct_fill_v_space_map7(v_space_map_t *v_s_map, int i)
{
    if (i == 15 || i == 20 || i == 30 || i == 40)
        v_s_map->spe_p[2][i] = 117;
    if (i == 39 || i == 42 || i == 43)
        v_s_map->spe_p[2][i] = 114;
    if (i == 0 || i == 6 || i == 24 || i == 27 || i == 29 ||
    i == 32)
        v_s_map->spe_p[3][i] = 217;
    if (i == 1 || i == 4 || i == 30 || i == 31 || i == 43)
        v_s_map->spe_p[3][i] = 218;
    if (i == 2 || i == 12 || i == 17 || i == 20 || i == 25 || i == 26 ||
    i == 40 || i == 42 || i == 49)
        v_s_map->spe_p[3][i] = 216;
    if (i == 3 || i == 7 || i == 13 || i == 14 || i == 15 || i == 16 ||
    i == 28 || i == 33 || i == 38 || i == 41 || i == 46)
        v_s_map->spe_p[3][i] = 215;
    v_s_map = struct_fill_v_space_map8(v_s_map, i);
    return (v_s_map);
}

v_space_map_t *struct_fill_v_space_map6(v_space_map_t *v_s_map, int i)
{
    if (i == 0 || i == 36 || i == 45 || i == 46 || i == 47)
        v_s_map->spe_p[2][i] = 111;
    if (i == 1 || i == 2 || i == 12 || i == 14 || i == 17 || i == 19)
        v_s_map->spe_p[2][i] = 113;
    if (i == 4 || i == 38 || i == 49)
        v_s_map->spe_p[2][i] = 115;
    if (i == 5 || i == 18 || i == 34 || i == 44)
        v_s_map->spe_p[2][i] = 119;
    if (i == 7 || i == 13 || i == 28)
        v_s_map->spe_p[2][i] = 110;
    if (i == 8 || i == 22 || i == 33 || i == 41)
        v_s_map->spe_p[2][i] = 121;
    if (i == 10 || i == 25 || i == 32)
        v_s_map->spe_p[2][i] = 122;
    if (i == 11 || i == 24 || i == 26)
        v_s_map->spe_p[2][i] = 126;
    v_s_map = struct_fill_v_space_map7(v_s_map, i);
    return (v_s_map);
}

v_space_map_t *struct_fill_v_space_map5(v_space_map_t *v_s_map, int i)
{
    if (i == 0 || i == 7 || i == 9 || i == 23 || i == 24 || i == 29 || i ==
    32 || i == 37 || i == 47)
        v_s_map->spe_p[1][i] = 216;
    if (i == 2 || i == 39 || i == 41)
        v_s_map->spe_p[1][i] = 213;
    if (i == 3 || i == 8 || i == 11 || i == 12 || i == 16 || i == 21 ||
    i == 33 || i == 34 || i == 35 || i == 36 || i == 42 || i == 46)
        v_s_map->spe_p[1][i] = 215;
    if (i == 4 || i == 31 || i == 44)
        v_s_map->spe_p[1][i] = 219;
    if (i == 6 || i == 18 || i == 19 || i == 45 || i == 48)
        v_s_map->spe_p[1][i] = 218;
    if (i == 10 || i == 13 || i == 14 || i == 15 || i == 26 || i == 28 ||
    i == 38 || i == 40)
        v_s_map->spe_p[1][i] = 214;
    if (i == 17 || i == 20 || i == 22 || i == 25 || i == 43 || i == 49)
        v_s_map->spe_p[1][i] = 217;
    v_s_map = struct_fill_v_space_map6(v_s_map, i);
    return (v_s_map);
}

v_space_map_t *struct_fill_v_space_map4(v_space_map_t *v_s_map, int i)
{
    if (i == 0 || i == 1 || i == 25 || i == 26 || i == 47)
        v_s_map->spe_p[0][i] = 216;
    if (i == 2 || i == 4 || i == 5 || i == 8 || i == 10 || i == 16 ||
    i == 28 || i == 29 || i == 30 || i == 31 || i == 33 || i == 35 ||
    i == 36 || i == 39 || i == 41)
            v_s_map->spe_p[0][i] = 213;
    if (i == 3 || i == 9 || i == 14 || i == 15 || i == 21 || i == 27 ||
    i == 34 || i == 40)
            v_s_map->spe_p[0][i] = 214;
    if (i == 6 || i == 7 || i == 17 || i == 32 || i == 42 || i == 46)
        v_s_map->spe_p[0][i] = 212;
    if (i == 11 || i == 13 || i == 19 || i == 20 || i == 45)
        v_s_map->spe_p[0][i] = 211;
    if (i == 18 || i == 43 || i == 44)
        v_s_map->spe_p[0][i] = 209;
    if (i == 22 || i == 23 || i == 24 || i == 48)
        v_s_map->spe_p[0][i] = 217;
    v_s_map = struct_fill_v_space_map5(v_s_map, i);
    return (v_s_map);
}