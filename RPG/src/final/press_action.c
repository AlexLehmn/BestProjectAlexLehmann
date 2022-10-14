/*
** EPITECH PROJECT, 2021
** event.c
** File description:
** event
*/

#include "../include/my_rpg.h"

void press_attack(game_t *gm)
{
    if (gm->final->cadre->mimine->index == 0) {
        sfClock_restart(gm->final->clock_g);
        sfClock_restart(gm->final->clock_g_t);
        sfSound_play(gm->sound->sfx);
        gm->final->character->boss->life -= gm->final->character->hero->attak;
        gm->final->character->boss->done = 1;
        gm->final->anim = 1;
        gm->final->anim2 = 1;
        sfSprite_setScale(gm->final->particles->sprite_t, (sfVector2f){0.0, 0.0});
    }
}

void press_def(game_t *gm)
{
    if (gm->final->cadre->mimine->index == 1) {
        sfClock_restart(gm->final->clock_g);
        sfClock_restart(gm->final->clock_g_t);
        sfSound_play(gm->sound->sfx);
        gm->final->character->boss->attak -= 10;
        gm->final->character->boss->done = 1;
        gm->final->anim2 = 1;
    }
}

void press_objet(game_t *gm)
{
    if (gm->final->cadre->mimine->index == 2) {
        sfClock_restart(gm->final->clock_g);
        sfClock_restart(gm->final->clock_g_t);
        sfSound_play(gm->sound->sfx);
        gm->final->character->boss->done = 1;
    }
}

void press_soin(game_t *gm)
{
    if (gm->final->cadre->mimine->index == 3) {
        sfClock_restart(gm->final->clock_g);
        sfClock_restart(gm->final->clock_g_t);
        sfSound_play(gm->sound->sfx);
        gm->final->character->hero->life += 50;
        gm->final->character->boss->done = 1;
    }
}