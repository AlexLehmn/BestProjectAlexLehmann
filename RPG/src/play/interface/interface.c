/*
** EPITECH PROJECT, 2021
** interface.c
** File description:
** interface
*/

#include "../../include/my_rpg.h"

void interface(game_t *gm)
{
    if (gm->play->inv->press == 1)
        inventory(gm);
}