/*
** EPITECH PROJECT, 2021
** set_char
** File description:
** char
*/

#include "../../include/my_rpg.h"

void click_right_c(game_t *gm)
{
    if (gm->opt->mous_p.x >= 1230
    && gm->opt->mous_p.x <= 1377
    && gm->opt->mous_p.y >= 170
    && gm->opt->mous_p.y <= 317) {
        if (gm->custom->c >= 1) {
            gm->custom->c = gm->custom->c + 1;
            sfSound_play(gm->sound->sfx);
        }
        if (gm->custom->c == 6) {
            gm->custom->c = 1;
        }
    }
}

void click_left_c(game_t *gm)
{
    if (gm->opt->mous_p.x >= 500
    && gm->opt->mous_p.x <= 642
    && gm->opt->mous_p.y >= 170
    && gm->opt->mous_p.y <= 317) {
        if (gm->custom->c <= 5) {
            gm->custom->c = gm->custom->c - 1;
            sfSound_play(gm->sound->sfx);
        }
        if (gm->custom->c == 0) {
            gm->custom->c = 5;
        }
    }
}

void click_right_s(game_t *gm)
{
    if (gm->opt->mous_p.x >= 1230
    && gm->opt->mous_p.x <= 1377
    && gm->opt->mous_p.y >= 570
    && gm->opt->mous_p.y <= 717) {
        if (gm->custom->s <= 1) {
            gm->custom->s = gm->custom->s + 1;
            sfSound_play(gm->sound->sfx);
        }
        if (gm->custom->s == 2) {
            gm->custom->s = 0;
        }
    }
}

void click_left_s(game_t *gm)
{
    if (gm->opt->mous_p.x >= 500
    && gm->opt->mous_p.x <= 647
    && gm->opt->mous_p.y >= 570
    && gm->opt->mous_p.y <= 717) {
        if (gm->custom->s >= 0) {
            gm->custom->s = gm->custom->s - 1;
            sfSound_play(gm->sound->sfx);
        }
        if (gm->custom->s == -1) {
            gm->custom->s = 1;
        }
    }
}

void gestion_click(game_t *gm)
{
    click_left_c(gm);
    click_left_s(gm);
    click_right_c(gm);
    click_right_s(gm);
    set_ship(gm);
    set_chara(gm);
    retun_menu(gm);
    click_ok(gm);
}