/*
** EPITECH PROJECT, 2021
** icon
** File description:
** icon
*/

#include "../../include/my_rpg.h"

void f_gauche_c(game_t *gm)
{
    if (gm->win->mouse_pos.x >= 500
    && gm->win->mouse_pos.x <= 647
    && gm->win->mouse_pos.y >= 170
    && gm->win->mouse_pos.y <= 317) {
        sfSprite_setTexture(gm->arrow->leftc, gm->ship->left_y, sfTrue);
    } else
        sfSprite_setTexture(gm->arrow->leftc, gm->arrow->t_left, sfTrue);
}

void f_gauche_s(game_t *gm)
{
    if (gm->win->mouse_pos.x >= 500
    && gm->win->mouse_pos.x <= 647
    && gm->win->mouse_pos.y >= 570
    && gm->win->mouse_pos.y <= 717) {
        sfSprite_setTexture(gm->arrow->lefts, gm->ship->left_y, sfTrue);
    } else
        sfSprite_setTexture(gm->arrow->lefts, gm->arrow->t_left, sfTrue);
}

void f_droite_c(game_t *gm)
{
    if (gm->win->mouse_pos.x >= 1230
    && gm->win->mouse_pos.x <= 1377
    && gm->win->mouse_pos.y >= 170
    && gm->win->mouse_pos.y <= 317) {
        sfSprite_setTexture(gm->arrow->rightc, gm->ship->right_y, sfTrue);
    } else
        sfSprite_setTexture(gm->arrow->rightc, gm->arrow->t_right, sfTrue);
}

void f_droite_s(game_t *gm)
{
    if (gm->win->mouse_pos.x >= 1230
    && gm->win->mouse_pos.x <= 1377
    && gm->win->mouse_pos.y >= 570
    && gm->win->mouse_pos.y <= 717) {
        sfSprite_setTexture(gm->arrow->rights, gm->ship->right_y, sfTrue);
    } else
        sfSprite_setTexture(gm->arrow->rights, gm->arrow->t_right, sfTrue);
}

void print_f_yellow(game_t *gm)
{
    f_gauche_c(gm);
    f_gauche_s(gm);
    f_droite_c(gm);
    f_droite_s(gm);
}