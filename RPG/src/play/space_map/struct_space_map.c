/*
** EPITECH PROJECT, 2021
** struct_space_map.c
** File description:
** struct_space_map
*/

#include "../../include/my_rpg.h"

space_map_t *struct_fill_space_map3(space_map_t *s_map)
{
    s_map->r_planet[8].height = 185;
    s_map->r_planet[8].width = 216;
    s_map->r_planet[8].left = 0;
    s_map->r_planet[8].top = 0;
    s_map->r_planet[9].height = 187;
    s_map->r_planet[9].width = 216;
    s_map->r_planet[9].left = 0;
    s_map->r_planet[9].top = 0;
    s_map->r_planet[10].height = 138;
    s_map->r_planet[10].width = 111;
    s_map->r_planet[10].left = 0;
    s_map->r_planet[10].top = 0;
    s_map->r_planet[11].height = 187;
    s_map->r_planet[11].width = 217;
    s_map->r_planet[11].left = 0;
    s_map->r_planet[11].top = 0;
    return (s_map);
}

space_map_t *struct_fill_space_map2(space_map_t *s_map)
{
    s_map->c_planet[0] = sfTexture_createFromFile("image/White.png", NULL);
    s_map->c_planet[1] = sfTexture_createFromFile("image/Lava.png", NULL);
    s_map->c_planet[2] = sfTexture_createFromFile("image/Island.png", NULL);
    s_map->c_planet[3] = sfTexture_createFromFile("image/Violet.png", NULL);
    s_map->c_planet[4] = sfTexture_createFromFile("image/Lune.png", NULL);
    s_map->c_planet[5] = sfTexture_createFromFile("image/Cookie.png", NULL);
    s_map->c_planet[6] = sfTexture_createFromFile("image/Terre.png", NULL);
    s_map->c_planet[7] = sfTexture_createFromFile("image/Mars.png", NULL);
    s_map->c_planet[8] = sfTexture_createFromFile("image/Marron.png", NULL);
    s_map->c_planet[9] = sfTexture_createFromFile("image/Blue.png", NULL);
    s_map->c_planet[10] = sfTexture_createFromFile("image/Etoile.png", NULL);
    s_map->c_planet[11] = sfTexture_createFromFile("image/Jaune.png", NULL);
    s_map->c_planet[12] = sfTexture_createFromFile("image/Station.png", NULL);
    s_map->t_map = sfTexture_createFromFile("image/Space_map.png", NULL);
    s_map->t_ship[0] = sfTexture_createFromFile("image/USS.png", NULL);
    s_map->t_ship[1] = sfTexture_createFromFile("image/X-wing.png", NULL);
    s_map = struct_fill_space_map3(s_map);
    return (s_map);
}

space_map_t *struct_fill_space_map(void)
{
    space_map_t *s_map = malloc(sizeof(space_map_t));

    for (int i = 0; i < 13; i++) {
        s_map->planet[i] = sfSprite_create();
        if (i < 8) {
            s_map->r_planet[i].height = 100;
            s_map->r_planet[i].width = 100;
            s_map->r_planet[i].left = 0;
            s_map->r_planet[i].top = 0;
        } if (i < 4)
            s_map->map[i] = sfSprite_create();
    }
    s_map->ship = sfSprite_create();
    s_map->clock = sfClock_create();
    for (int i = 0; i < 12; i++)
        s_map->clock_p[i] = sfClock_create();
    s_map = struct_fill_space_map2(s_map);
    return (s_map);
}