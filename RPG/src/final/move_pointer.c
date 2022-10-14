/*
** EPITECH PROJECT, 2021
** event.c
** File description:
** event
*/

#include "../include/my_rpg.h"

void move_pointer(game_t *gm)
{
    move_pointer_attack(gm);
    move_pointer_def(gm);
    move_pointer_item(gm);
    move_pointer_soin(gm);
}

void move_pointer_attack(game_t *gm)
{
    if (gm->final->cadre->mimine->index == 0)
        sfSprite_setPosition(gm->final->cadre->mimine->s_mimine,
                        (sfVector2f){780, 65});
}

void move_pointer_def(game_t *gm)
{
    if (gm->final->cadre->mimine->index == 1)
        sfSprite_setPosition(gm->final->cadre->mimine->s_mimine,
                        (sfVector2f){780, 160});
}

void move_pointer_item(game_t *gm)
{
    if (gm->final->cadre->mimine->index == 2)
        sfSprite_setPosition(gm->final->cadre->mimine->s_mimine,
                        (sfVector2f){780, 265});
}

void move_pointer_soin(game_t *gm)
{
    if (gm->final->cadre->mimine->index == 3)
        sfSprite_setPosition(gm->final->cadre->mimine->s_mimine,
                        (sfVector2f){780, 365});
}