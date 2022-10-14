/*
** EPITECH PROJECT, 2021
** menu.c
** File description:
** menu
*/

#include "../include/my_rpg.h"

void print_menu(game_t *gm)
{
    sfRenderWindow_clear(gm->win->win, sfBlack);
    sfRenderWindow_drawSprite(gm->win->win, gm->menu->background, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->menu->b_menu->play, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->menu->b_menu->option, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->menu->b_menu->tuto, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->menu->b_menu->quit, NULL);
    sfRenderWindow_drawText(gm->win->win, gm->title->title1, NULL);
    sfRenderWindow_drawText(gm->win->win, gm->title->title2, NULL);
    set_lang_menu(gm);
}

void menu(game_t *gm)
{
    sfRenderWindow_clear(gm->win->win, sfBlack);
    pollevent_menu(gm);
    if (gm->menu->b_menu->but_pressed == 1) {
        button_clicked(gm);
        gm->menu->b_menu->but_pressed = 0;
    }
    print_menu(gm);
}