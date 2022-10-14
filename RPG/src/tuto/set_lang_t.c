/*
** EPITECH PROJECT, 2021
** lang
** File description:
** lang
*/

#include "../include/my_rpg.h"

void t_lang_f(game_t *gm)
{
    if (gm->lang->f == 1){
        sfText_setString(gm->tuto_text->custom, "Choisissez\nvotre\n\
personnage\n\et votre\nvaisseau");
        sfText_setString(gm->tuto_text->space, "Deplace\ntoi dans\nl espace.");
        sfText_setString(gm->tuto_text->planete, "Deplace\ntoi sur la\n\
planete.");
        sfText_setString(gm->tuto_text->boss, "Combat les\nbosses !");
    }
}

void t_lang_en(game_t *gm)
{
    if (gm->lang->f == 2){
        sfText_setString(gm->tuto_text->custom, "Choose\nyour\ncharacter\n\
and your ship.");
        sfText_setString(gm->tuto_text->space, "Move\nin space.");
        sfText_setString(gm->tuto_text->planete, "move\non the\nplanet.");
        sfText_setString(gm->tuto_text->boss, "Fight the\nbosses !");
    }
}

void t_lang_es(game_t *gm)
{
    if (gm->lang->f == 3){
        sfText_setString(gm->tuto_text->custom, "Elige\na tu\npersonaje\n\
y tu nave.");
        sfText_setString(gm->tuto_text->space, "moverse\nen el\nespacio.");
        sfText_setString(gm->tuto_text->planete, "moverse\nen el\nplaneta.");
        sfText_setString(gm->tuto_text->boss, "lucha\ncontra\ngolpes !");
    }
}

void print_lang_tuto(game_t *gm)
{
    t_lang_en(gm);
    t_lang_es(gm);
    t_lang_f(gm);
}