/*
** EPITECH PROJECT, 2021
** initialisation_play.c
** File description:
** initialisation_play
*/

#include "../include/my_rpg.h"

void init_inventory(game_t *gm)
{
    sfSprite_setTexture(gm->play->inv->inv, gm->play->inv->t_inv, sfTrue);
    sfSprite_setPosition(gm->play->inv->inv, gm->play->inv->p_inv);
}

void init_play(game_t *gm)
{
    init_inventory(gm);
    init_space_map(gm);
    init_collision(gm);
    init_load(gm);
}