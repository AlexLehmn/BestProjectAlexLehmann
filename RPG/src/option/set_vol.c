/*
** EPITECH PROJECT, 2021
** set_vol
** File description:
** set_vol
*/

#include "../include/my_rpg.h"

void set_vol1(game_t *gm)
{
    if (gm->opt->event.key.code == sfKeyDown && gm->vol->m == 0
    && gm->vol->s == 0) {
        gm->vol->m = 1;
        gm->vol->s = 0;
    }
}

void set_vol2(game_t *gm)
{
    if (gm->opt->event.key.code == sfKeyDown && gm->vol->m == 1) {
        gm->vol->s = 1;
        gm->vol->m = 0;
    }
}

void set_vol3(game_t *gm)
{
    if (gm->opt->event.key.code == sfKeyUp && gm->vol->s == 1) {
        gm->vol->m = 1;
        gm->vol->s = 0;
    }
}

void print_vol(game_t *gm)
{
    set_vol2(gm);
    set_vol1(gm);
    set_vol3(gm);
    print_vol2(gm);
    if (gm->vol->m == 1) {
        sfText_setColor(gm->text->t_music, sfRed);
        sfText_setColor(gm->text->t_sfx, sfWhite);
    }
    if (gm->vol->s == 1) {
        sfText_setColor(gm->text->t_sfx, sfRed);
        sfText_setColor(gm->text->t_music, sfWhite);
    }
}