/*
** EPITECH PROJECT, 2021
** init
** File description:
** init
*/

#include "../../include/my_rpg.h"

void init_e(game_t *gm)
{
    sfRectangleShape_setSize(gm->echap->noir, (sfVector2f){1920, 1080});
    sfRectangleShape_setFillColor(gm->echap->noir, gm->echap->trans);
    sfSprite_setTexture(gm->echap->b_resume, gm->custom->t_table_ok, sfTrue);
    sfSprite_setTexture(gm->echap->b_quit, gm->custom->t_table_ok, sfTrue);
    sfSprite_setTexture(gm->echap->b_menu, gm->custom->t_table_ok, sfTrue);
}

void init_e2(game_t *gm)
{
    sfText_setString(gm->echap->pause_echap, "PAUSE");
    sfText_setFont(gm->echap->pause_echap, gm->ship->font_space);
    sfText_setPosition(gm->echap->pause_echap, (sfVector2f){690, 150});
    sfText_setCharacterSize(gm->echap->pause_echap, 120);
    sfText_setString(gm->echap->resume_echap, "RESUME");
    sfText_setFont(gm->echap->resume_echap, gm->ship->font_space);
    sfText_setPosition(gm->echap->resume_echap, (sfVector2f){810, 450});
    sfText_setCharacterSize(gm->echap->resume_echap, 50);
    sfText_setString(gm->echap->quit_echap, "QUIT");
    sfText_setFont(gm->echap->quit_echap, gm->ship->font_space);
    sfText_setPosition(gm->echap->quit_echap, (sfVector2f){880, 690});
    sfText_setCharacterSize(gm->echap->quit_echap, 50);
    sfText_setString(gm->echap->rturn_menu, "MENU");
    sfText_setFont(gm->echap->rturn_menu, gm->ship->font_space);
    sfText_setPosition(gm->echap->rturn_menu, (sfVector2f){860, 570});
    sfText_setCharacterSize(gm->echap->rturn_menu, 50);
}