/*
** EPITECH PROJECT, 2021
** init 2
** File description:
** inti2
*/

#include "../include/my_rpg.h"

void init_lang(game_t *gm)
{
    sfSprite_setPosition(gm->lang->case_fr, (sfVector2f){1000, 260});
    sfSprite_setTexture(gm->lang->case_fr, gm->lang->t_case, sfTrue);
    sfSprite_setScale(gm->lang->case_fr, (sfVector2f){0.4, 0.4});
    sfSprite_setPosition(gm->lang->case_en, (sfVector2f){1000, 355});
    sfSprite_setTexture(gm->lang->case_en, gm->lang->t_case, sfTrue);
    sfSprite_setScale(gm->lang->case_en, (sfVector2f){0.4, 0.4});
    sfSprite_setPosition(gm->lang->case_es, (sfVector2f){1000, 450});
    sfSprite_setTexture(gm->lang->case_es, gm->lang->t_case, sfTrue);
    sfSprite_setScale(gm->lang->case_es, (sfVector2f){0.4, 0.4});
}

void init_lang2(game_t *gm)
{
    sfText_setFont(gm->lang->t_EN, gm->lang->EN);
    sfText_setCharacterSize(gm->lang->t_EN, 60);
    sfText_setPosition(gm->lang->t_EN, (sfVector2f){550, 350});
    sfText_setFont(gm->lang->t_FR, gm->lang->FR);
    sfText_setCharacterSize(gm->lang->t_FR, 60);
    sfText_setPosition(gm->lang->t_FR, (sfVector2f){550, 260});
    sfText_setFont(gm->lang->t_ES, gm->lang->ES);
    sfText_setCharacterSize(gm->lang->t_ES, 60);
    sfText_setPosition(gm->lang->t_ES, (sfVector2f){550, 450});
    sfSprite_setPosition(gm->lang2->exit_yellow, (sfVector2f){10, 10});
    sfSprite_setTexture(gm->lang2->exit_yellow, gm->lang2->t_exit_y, sfTrue);
    sfSprite_setScale(gm->lang2->exit_yellow, (sfVector2f){0.5, 0.5});
}

void init_set_lang(game_t *gm)
{
    sfText_setFont(gm->lang2->t_x_fr, gm->lang2->x_fr);
    sfText_setCharacterSize(gm->lang2->t_x_fr, 90);
    sfText_setPosition(gm->lang2->t_x_fr, (sfVector2f){998, 240});
    sfText_setFont(gm->lang2->t_x_en, gm->lang2->x_en);
    sfText_setCharacterSize(gm->lang2->t_x_en, 90);
    sfText_setPosition(gm->lang2->t_x_en, (sfVector2f){998, 335});
    sfText_setFont(gm->lang2->t_x_es, gm->lang2->x_es);
    sfText_setCharacterSize(gm->lang2->t_x_es, 90);
    sfText_setPosition(gm->lang2->t_x_es, (sfVector2f){998, 430});
}