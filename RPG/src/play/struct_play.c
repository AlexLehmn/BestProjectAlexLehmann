/*
** EPITECH PROJECT, 2021
** struct_play.c
** File description:
** struct_play
*/

#include "../include/my_rpg.h"

inventory_t *struct_fill_inventory(void)
{
    inventory_t *inv = malloc(sizeof(inventory_t));
    inv->inv = sfSprite_create();
    inv->t_inv = sfTexture_createFromFile("image/inventory.png", NULL);
    inv->press = 0;
    inv->p_inv.x = 1300;
    inv->p_inv.y = 320;
    return (inv);
}

stats_t *struct_fill_stats(void)
{
    stats_t *stats = malloc(sizeof(stats_t));
    stats->charac = sfSprite_create();
    stats->stats = sfSprite_create();
    stats->t_char = sfTexture_createFromFile("image/char.png", NULL);
    stats->t_stats = sfTexture_createFromFile("image/character.png", NULL);
    return (stats);
}