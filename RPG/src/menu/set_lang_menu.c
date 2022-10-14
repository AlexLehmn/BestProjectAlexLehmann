/*
** EPITECH PROJECT, 2021
** setlang
** File description:
** lang
*/

#include "../include/my_rpg.h"

void lang_fr_menu(game_t *gm)
{
    sfText_setString(gm->menu->t_b_menu->play, "Jouer");
    sfText_setString(gm->menu->t_b_menu->option, "Options");
    sfText_setString(gm->menu->t_b_menu->tuto, "Tutoriel");
    sfText_setString(gm->menu->t_b_menu->quit, "Quitter");
    sfRenderWindow_drawText(gm->win->win, gm->menu->t_b_menu->play, NULL);
    sfRenderWindow_drawText(gm->win->win, gm->menu->t_b_menu->option, NULL);
    sfRenderWindow_drawText(gm->win->win, gm->menu->t_b_menu->quit, NULL);
    sfRenderWindow_drawText(gm->win->win, gm->menu->t_b_menu->tuto, NULL);
}

void lang_en_menu(game_t *gm)
{
    sfText_setString(gm->menu->t_b_menu->play, "Play");
    sfText_setString(gm->menu->t_b_menu->option, "Settings");
    sfText_setString(gm->menu->t_b_menu->tuto, "Tutorials");
    sfText_setString(gm->menu->t_b_menu->quit, "Leave");
    sfRenderWindow_drawText(gm->win->win, gm->menu->t_b_menu->play, NULL);
    sfRenderWindow_drawText(gm->win->win, gm->menu->t_b_menu->option, NULL);
    sfRenderWindow_drawText(gm->win->win, gm->menu->t_b_menu->quit, NULL);
    sfRenderWindow_drawText(gm->win->win, gm->menu->t_b_menu->tuto, NULL);
}

void lang_es_menu(game_t *gm)
{
    sfText_setString(gm->menu->t_b_menu->play, "Jugar");
    sfText_setString(gm->menu->t_b_menu->option, "Opcion");
    sfText_setString(gm->menu->t_b_menu->tuto, "Tutoriales");
    sfText_setString(gm->menu->t_b_menu->quit, "Dejar");
    sfRenderWindow_drawText(gm->win->win, gm->menu->t_b_menu->play, NULL);
    sfRenderWindow_drawText(gm->win->win, gm->menu->t_b_menu->option, NULL);
    sfRenderWindow_drawText(gm->win->win, gm->menu->t_b_menu->quit, NULL);
    sfRenderWindow_drawText(gm->win->win, gm->menu->t_b_menu->tuto, NULL);
}

void set_lang_menu(game_t *gm)
{
    if (gm->lang->f == 1) {
        lang_fr_menu(gm);
    }
    if (gm->lang->f == 2) {
        lang_en_menu(gm);
    }
    if (gm->lang->f == 3) {
        lang_es_menu(gm);
    }
}