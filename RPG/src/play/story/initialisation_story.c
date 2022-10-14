/*
** EPITECH PROJECT, 2021
** init
** File description:
** init
*/

#include "../../include/my_rpg.h"

void initialisation_s(game_t *gm)
{
    sfSprite_setTexture(gm->story->bg_story, gm->story->t_bg_story, sfTrue);
    sfSprite_setPosition(gm->story->bg_story, (sfVector2f){0, 0});
    sfSprite_setTexture(gm->story->woman, gm->story->t_woman, sfTrue);
    sfSprite_setScale(gm->story->woman, (sfVector2f){0.8, 0.8});
    sfSprite_setPosition(gm->story->woman, (sfVector2f){0, 700});
    sfSprite_setTexture(gm->story->bulle_story, gm->story->t_bule_story,
    sfTrue);
    sfSprite_setPosition(gm->story->bulle_story, (sfVector2f){170, 0});
    sfSprite_setScale(gm->story->bulle_story, (sfVector2f){2.35, 1.6});
    sfSprite_setPosition(gm->b_story->b_retrn, (sfVector2f){10, 10});
    sfSprite_setScale(gm->b_story->b_retrn, (sfVector2f){0.7, 0.7});
}

void initialisation2_s(game_t *gm)
{
    sfText_setFont(gm->t_story->text_story, gm->t_story->font_story);
    sfText_setCharacterSize(gm->t_story->text_story, 70);
    sfText_setPosition(gm->t_story->text_story, (sfVector2f){250, 50});
    sfText_setFont(gm->b_story->skip, gm->custom->f_ok_c);
    sfSprite_setTexture(gm->b_story->b_skip, gm->custom->t_table_ok, sfTrue);
}