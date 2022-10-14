/*
** EPITECH PROJECT, 2021
** scene.c
** File description:
** scene.c
*/

#include "../include/my_rpg.h"

void retr_menu(game_t *gm)
{
    if (gm->opt->mous_p.x >= 10
    && gm->opt->mous_p.x <= 120
    && gm->opt->mous_p.y >= 10
    && gm->opt->mous_p.y <= 120) {
        gm->scene = 0;
        gm->vol->s = 0;
        gm->vol->m = 0;
        sfText_setColor(gm->text->t_sfx, sfWhite);
        sfText_setColor(gm->text->t_music, sfWhite);
        sfSound_play(gm->sound->sfx);
        scene(gm);
    }
}

void click_fr(game_t *gm)
{
    if (gm->opt->mous_p.x >= 1000 && gm->opt->mous_p.x <= 1131
    && gm->opt->mous_p.y >= 260 && gm->opt->mous_p.y <= 344) {
        gm->lang->f = 1;
    }
}

void click_en(game_t *gm)
{
    if (gm->opt->mous_p.x >= 1000 && gm->opt->mous_p.x <= 1131
    && gm->opt->mous_p.y >= 355 && gm->opt->mous_p.y <= 439) {
        gm->lang->f = 2;
    }
}

void click_es(game_t *gm)
{
    if (gm->opt->mous_p.x >= 1000 && gm->opt->mous_p.x <= 1084
    && gm->opt->mous_p.y >= 450 && gm->opt->mous_p.y <= 534) {
        gm->lang->f = 3;
    }
}

void lang_print(game_t *gm)
{
    if (gm->lang->f == 1) {
        lang_fr(gm);
        sfText_setString(gm->lang2->t_x_fr, "X");
        sfRenderWindow_drawText(gm->win->win, gm->lang2->t_x_fr, NULL);
    }
    if (gm->lang->f == 2) {
        lang_en(gm);
        sfText_setString(gm->lang2->t_x_en, "X");
        sfRenderWindow_drawText(gm->win->win, gm->lang2->t_x_en, NULL);
    }
    if (gm->lang->f == 3) {
        lang_es(gm);
        sfText_setString(gm->lang2->t_x_es, "X");
        sfRenderWindow_drawText(gm->win->win, gm->lang2->t_x_es, NULL);
    }
}