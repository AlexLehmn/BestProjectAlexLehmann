/*
** EPITECH PROJECT, 2021
** event.c
** File description:
** event
*/

#include "../../include/my_rpg.h"

void final_button_hover(game_t *gm)
{
    final_button_hover_q(gm);
}

int final_button_hover_q(game_t *gm)
{
    if (gm->win->mouse_pos.x >= 10 && gm->win->mouse_pos.x <= 10 + 50
        && gm->win->mouse_pos.y >= 10 && gm->win->mouse_pos.y <= 10 + 50) {
        sfSprite_setTexture(gm->final->b_menu->quit,
        gm->final->b_menu->but_q_hover, sfTrue);
        return (1);
    } else {
        sfSprite_setTexture(gm->final->b_menu->quit,
                            gm->final->b_menu->but_q, sfTrue);
        return (0);
    }
}