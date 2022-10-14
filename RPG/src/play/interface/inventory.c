/*
** EPITECH PROJECT, 2021
** inventory.c
** File description:
** inventory
*/

#include "../../include/my_rpg.h"

void draw_sprite(game_t *gm)
{
    sfRenderWindow_drawSprite(gm->win->win, gm->play->inv->inv, NULL);
}

void position(game_t *gm)
{
    sfSprite_setPosition(gm->play->inv->inv, gm->play->inv->p_inv);
}

void inventory(game_t *gm)
{
    position(gm);
    draw_sprite(gm);
}