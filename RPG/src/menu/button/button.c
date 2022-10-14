/*
** EPITECH PROJECT, 2021
** menu.c
** File description:
** menu
*/

#include "../../include/my_rpg.h"

void button_hover(game_t *gm)
{
    button_hover_p(gm);
    button_hover_o(gm);
    button_hover_t(gm);
    button_hover_q(gm);
}

void button_click(struct game *gm)
{
    button_click_p(gm);
    button_click_o(gm);
    button_click_t(gm);
    button_click_q(gm);
}