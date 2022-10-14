/*
** EPITECH PROJECT, 2021
** struct_space_map3.c
** File description:
** struct_space_map3
*/

#include "../../include/my_rpg.h"

v_space_map_t *struct_fill_v_space_map13(v_space_map_t *v_s_map)
{
    v_s_map->v_m_ship = 0;
    v_s_map->p = -1;
    return (v_s_map);
}

v_space_map_t *struct_fill_v_space_map12(v_space_map_t *v_s_map, int i)
{
    if (i == 0 || i == 2 || i == 20 || i == 30 || i == 31 || i == 38 || i == 39
    || i == 40 || i == 42 || i == 49)
        v_s_map->spe_pos[3][i] = 59;
    if (i == 1 || i == 19 || i == 43 || i == 44)
        v_s_map->spe_pos[3][i] = 60;
    if (i == 3 || i == 4 || i == 5 || i == 9 || i == 10 || i == 18 || i == 29
    || i == 32 || i == 45)
        v_s_map->spe_pos[3][i] = 58;
    if (i == 6 || i == 7 || i == 16 || i == 21 || i == 24 || i == 25 || i == 33
    || i == 37 || i == 41 || i == 48)
        v_s_map->spe_pos[3][i] = 57;
    if (i == 8 || i == 11 || i == 12 || i == 15 || i == 17 || i == 26 ||
    i == 27 || i == 36 || i == 47)
        v_s_map->spe_pos[3][i] = 56;
    if (i == 13 || i == 14 || i == 22 || i == 23 || i == 28 || i == 34 ||
    i == 35 || i == 46)
        v_s_map->spe_pos[3][i] = 55;
    v_s_map = struct_fill_v_space_map13(v_s_map);
    return (v_s_map);
}

v_space_map_t *struct_fill_v_space_map11(v_space_map_t *v_s_map, int i)
{
    if (i == 0 || i == 13 || i == 14 || i == 28 || i == 36)
        v_s_map->spe_pos[2][i] = 6;
    if (i == 2 || i == 4 || i == 15 || i == 37 || i == 45)
        v_s_map->spe_pos[2][i] = 5;
    if (i == 5 || i == 32 || i == 33 || i == 39 || i == 46 || i == 47)
        v_s_map->spe_pos[2][i] = 4;
    if (i == 6 || i == 31 || i == 34)
        v_s_map->spe_pos[2][i] = 3;
    if (i == 7 || i == 16 || i == 17 || i == 42)
        v_s_map->spe_pos[2][i] = 8;
    if (i == 10 || i == 23 || i == 25)
        v_s_map->spe_pos[2][i] = 17;
    if (i == 11 || i == 26 || i == 27)
        v_s_map->spe_pos[2][i] = 18;
    if (i == 12 || i == 30 || i == 35)
        v_s_map->spe_pos[2][i] = 7;
    if (i == 19 || i == 20 || i == 38 || i == 40 || i == 44)
        v_s_map->spe_pos[2][i] = 9;
    v_s_map = struct_fill_v_space_map12(v_s_map, i);
    return (v_s_map);
}

v_space_map_t *struct_fill_v_space_map10(v_space_map_t *v_s_map, int i)
{
    if (i == 0 || i == 2 || i == 7 || i == 9 || i == 12 || i == 27 || i == 28
    || i == 29 || i == 41 || i == 46 || i == 47)
        v_s_map->spe_pos[1][i] = 57;
    if (i == 1 || i == 10 || i == 39)
        v_s_map->spe_pos[1][i] = 55;
    if (i == 3 || i == 5 || i == 21 || i == 23 || i == 25 || i == 30 || i == 32
    || i == 35 || i == 36 || i == 37 || i == 43 || i == 45)
        v_s_map->spe_pos[1][i] = 60;
    if (i == 4 || i == 22 || i == 31 || i == 44)
        v_s_map->spe_pos[1][i] = 61;
    if (i == 6 || i == 8 || i == 13 || i == 16 || i == 33 || i == 38 || i == 42
    || i == 48 || i == 49)
        v_s_map->spe_pos[1][i] = 58;
    if (i == 14 || i == 15 || i == 17 || i == 18 || i == 19 || i == 20 ||
    i == 24 || i == 26 || i == 34)
        v_s_map->spe_pos[1][i] = 59;
    v_s_map = struct_fill_v_space_map11(v_s_map, i);
    return (v_s_map);
}

v_space_map_t *struct_fill_v_space_map9(v_space_map_t *v_s_map, int i)
{
    if (i == 0 || i == 1 || i == 16 || i == 28 || i == 30 || i == 31 || i == 34
    || i == 35 || i == 47)
        v_s_map->spe_pos[0][i] = 57;
    if (i == 2 || i == 3 || i == 4 || i == 5 || i == 10 || i == 11 || i == 17
    || i == 19 || i == 39 || i == 40 || i == 41 || i == 42 || i == 45)
        v_s_map->spe_pos[0][i] = 55;
    if (i == 6 || i == 12 || i == 18 || i == 37 || i == 43 || i == 44 ||
    i == 46)
        v_s_map->spe_pos[0][i] = 54;
    if (i == 7 || i == 8 || i == 9 || i == 13 || i == 20 || i == 32 || i == 33
    || i == 36)
        v_s_map->spe_pos[0][i] = 56;
    if (i == 14 || i == 15 || i == 21 || i == 22 || i == 23 || i == 24 ||
    i == 25 || i == 26 || i == 27 || i == 29 || i == 48 || i == 49)
        v_s_map->spe_pos[0][i] = 58;
    v_s_map->spe_pos[0][38] = 53;
    v_s_map = struct_fill_v_space_map10(v_s_map, i);
    return (v_s_map);
}