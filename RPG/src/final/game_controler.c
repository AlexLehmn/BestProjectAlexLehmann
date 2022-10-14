/*
** EPITECH PROJECT, 2021
** event.c
** File description:
** event
*/

#include "../include/my_rpg.h"

void game_controler(game_t *gm)
{
    if (gm->final->character->boss->life <= 0)
        gm->final->win = 1;
    else if (gm->final->character->hero->life <= 0)
        gm->final->win = 2;
}