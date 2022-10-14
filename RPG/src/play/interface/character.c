/*
** EPITECH PROJECT, 2021
** character.c
** File description:
** character
*/

#include "../../include/my_rpg.h"

void draw_sprite_character_inv(game_t *gm)
{
    sfRenderWindow_drawSprite(gm->win->win, gm->play->stat->stats, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->play->stat->charac, NULL);
}

void character_inv(game_t *gm)
{
    draw_sprite_character_inv(gm);
}