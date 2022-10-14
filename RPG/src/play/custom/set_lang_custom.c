/*
** EPITECH PROJECT, 2021
** setlang
** File description:
** lang
*/

#include "../../include/my_rpg.h"

void p_lang_f(game_t *gm)
{
    if (gm->lang->f == 1){
        sfText_setString(gm->custom->text_titre_cus, "SELECTION CHAMPION");
        sfText_setPosition(gm->custom->text_titre_cus, (sfVector2f){300, -25});
    }
}

void p_lang_en(game_t *gm)
{
    if (gm->lang->f == 2){
        sfText_setString(gm->custom->text_titre_cus, "CHAMP SELECT");
        sfText_setPosition(gm->custom->text_titre_cus, (sfVector2f){450, -25});
    }
}

void p_lang_es(game_t *gm)
{
    if (gm->lang->f == 3){
        sfText_setString(gm->custom->text_titre_cus, "SELECCION CAMPEON");
        sfText_setPosition(gm->custom->text_titre_cus, (sfVector2f){300, -25});
    }
}

void print_lang_cus(game_t *gm)
{
    p_lang_en(gm);
    p_lang_es(gm);
    p_lang_f(gm);
}