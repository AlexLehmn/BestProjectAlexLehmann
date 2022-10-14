/*
** EPITECH PROJECT, 2020
** graph
** File description:
** main
*/

#include "include/my_rpg.h"

void set_window(game_t *gm)
{
    gm->win->win = sfRenderWindow_create(gm->win->video_mode, "my_rpg",
    sfDefaultStyle, NULL);
    sfRenderWindow_setFramerateLimit(gm->win->win, 60);
}