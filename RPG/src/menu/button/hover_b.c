/*
** EPITECH PROJECT, 2021
** menu.c
** File description:
** menu
*/

#include "../../include/my_rpg.h"

void button_hover_p(game_t *gm)
{
    if (gm->win->mouse_pos.x >= 800 && gm->win->mouse_pos.x <= 800 + 321 &&
        gm->win->mouse_pos.y >= 400 && gm->win->mouse_pos.y <= 400 + 100) {
        sfSprite_setScale(gm->menu->b_menu->play, (sfVector2f){1.1, 1.1});
        sfSprite_setPosition(gm->menu->b_menu->play,
                            (sfVector2f){800-16, 400-5});
    } else {
        sfSprite_setPosition(gm->menu->b_menu->play, (sfVector2f){800, 400});
        sfSprite_setScale(gm->menu->b_menu->play, (sfVector2f){1.0, 1.0});
    }
}

void button_hover_o(game_t *gm)
{
    if (gm->win->mouse_pos.x >= 800 && gm->win->mouse_pos.x <= 800 + 321 &&
        gm->win->mouse_pos.y >= 550 && gm->win->mouse_pos.y <= 550 + 100) {
        sfSprite_setScale(gm->menu->b_menu->option, (sfVector2f){1.1, 1.1});
        sfSprite_setPosition(gm->menu->b_menu->option,
                            (sfVector2f){800-16, 550-5});
    } else {
        sfSprite_setScale(gm->menu->b_menu->option, (sfVector2f){1.0, 1.0});
        sfSprite_setPosition(gm->menu->b_menu->option, (sfVector2f){800, 550});
    }
}

void button_hover_t(game_t *gm)
{
    if (gm->win->mouse_pos.x >= 800 && gm->win->mouse_pos.x <= 800 + 321 &&
        gm->win->mouse_pos.y >= 700 && gm->win->mouse_pos.y <= 700 + 100) {
        sfSprite_setScale(gm->menu->b_menu->tuto, (sfVector2f){1.1, 1.1});
        sfSprite_setPosition(gm->menu->b_menu->tuto,
                            (sfVector2f){800-16, 700-5});
    } else {
        sfSprite_setScale(gm->menu->b_menu->tuto, (sfVector2f){1.0, 1.0});
        sfSprite_setPosition(gm->menu->b_menu->tuto, (sfVector2f){800, 700});
    }
}

void button_hover_q(game_t *gm)
{
    if (gm->win->mouse_pos.x >= 800 && gm->win->mouse_pos.x <= 800 + 321 &&
        gm->win->mouse_pos.y >= 850 && gm->win->mouse_pos.y <= 850 + 100) {
        sfSprite_setScale(gm->menu->b_menu->quit, (sfVector2f){1.1, 1.1});
        sfSprite_setPosition(gm->menu->b_menu->quit,
                            (sfVector2f){800-16, 850-5});
    } else {
        sfSprite_setScale(gm->menu->b_menu->quit, (sfVector2f){1.0, 1.0});
        sfSprite_setPosition(gm->menu->b_menu->quit, (sfVector2f){800, 850});
    }
}