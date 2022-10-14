/*
** EPITECH PROJECT, 2021
** tuto
** File description:
** tuto
*/

#include "../include/my_rpg.h"

void initialisation_tu(game_t *gm)
{
    sfSprite_setTexture(gm->tuto->bg_tu, gm->tuto->t_bg_tu, sfTrue);
    sfSprite_setTexture(gm->tuto->fond, gm->tuto->t_fond, sfTrue);
    sfSprite_setScale(gm->tuto->fond, (sfVector2f){0.7, 0.7});
    sfSprite_setPosition(gm->tuto->fond, (sfVector2f){470, 60});
    sfSprite_setTexture(gm->tuto->separator, gm->tuto->t_separator, sfTrue);
    sfSprite_setPosition(gm->tuto->separator, (sfVector2f){510, 90});
    sfSprite_setTexture(gm->tuto->touche, gm->tuto->t_touche, sfTrue);
    sfSprite_setPosition(gm->tuto->touche, (sfVector2f){1000, 350});
    sfSprite_setScale(gm->tuto->touche, (sfVector2f){0.3, 0.3});
    sfSprite_setTexture(gm->tuto->ship, gm->tuto->t_ship, sfTrue);
    sfSprite_setPosition(gm->tuto->ship, (sfVector2f){1250, 370});
    sfSprite_setTexture(gm->tuto->perso, gm->tuto->t_perso, sfTrue);
    sfSprite_setPosition(gm->tuto->perso, (sfVector2f){550, 830});
    sfSprite_setScale(gm->tuto->perso, (sfVector2f){2.8, 2.8});
    sfSprite_setTexture(gm->tuto->touche2, gm->tuto->t_touche, sfTrue);
    sfSprite_setPosition(gm->tuto->touche2, (sfVector2f){700, 830});
    sfSprite_setScale(gm->tuto->touche2, (sfVector2f){0.3, 0.3});
}

void initialisation_tu2(game_t *gm)
{
    sfText_setFont(gm->tuto_text->custom, gm->ship->font_space);
    sfText_setCharacterSize(gm->tuto_text->custom, 40);
    sfText_setPosition(gm->tuto_text->custom, (sfVector2f){500, 170});
    sfText_setFont(gm->tuto_text->space, gm->ship->font_space);
    sfText_setCharacterSize(gm->tuto_text->space, 50);
    sfText_setPosition(gm->tuto_text->space, (sfVector2f){1000, 130});
    sfText_setFont(gm->tuto_text->planete, gm->ship->font_space);
    sfText_setCharacterSize(gm->tuto_text->planete, 50);
    sfText_setPosition(gm->tuto_text->planete, (sfVector2f){530, 600});
    sfText_setFont(gm->tuto_text->boss, gm->ship->font_space);
    sfText_setCharacterSize(gm->tuto_text->boss, 50);
    sfText_setPosition(gm->tuto_text->boss, (sfVector2f){1000, 560});
}

void initialisation_tu3(game_t *gm)
{
    sfSprite_setTexture(gm->tuto->touche3, gm->tuto->t_touche, sfTrue);
    sfSprite_setPosition(gm->tuto->touche3, (sfVector2f){1200, 830});
    sfSprite_setScale(gm->tuto->touche3, (sfVector2f){0.3, 0.3});
    sfSprite_setTexture(gm->tuto->espace, gm->tuto->t_espace, sfTrue);
    sfSprite_setPosition(gm->tuto->espace, (sfVector2f){1000, 890});
    sfSprite_setScale(gm->tuto->espace, (sfVector2f){0.3, 0.3});
    sfSprite_setTexture(gm->tuto->boss, gm->tuto->t_boss, sfTrue);
    sfSprite_setPosition(gm->tuto->boss, (sfVector2f){1000, 700});
    sfSprite_setScale(gm->tuto->boss, (sfVector2f){0.25, 0.25});
    sfSprite_setPosition(gm->tuto_text->b_exit, (sfVector2f){10, 10});
    sfSprite_setScale(gm->tuto_text->b_exit, (sfVector2f){0.7, 0.7});
}

void init_tuto(game_t *gm)
{
    initialisation_tu(gm);
    initialisation_tu2(gm);
    initialisation_tu3(gm);
}