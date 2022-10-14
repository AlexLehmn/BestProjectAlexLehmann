/*
** EPITECH PROJECT, 2021
** event.c
** File description:
** event
*/

#include "../include/my_rpg.h"

void action_boss(game_t *gm)
{
    if (gm->final->character->boss->done) {
        gm->final->character->hero->life -= gm->final->character->boss->attak;
        gm->final->character->boss->done = 2;
    }

}

void final_boss(game_t *gm)
{
    sfRenderWindow_clear(gm->win->win, sfBlack);
    pollevent_final(gm);
    draw(gm);
}