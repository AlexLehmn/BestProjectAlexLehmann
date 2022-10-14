/*
** EPITECH PROJECT, 2020
** graph
** File description:
** main
*/

#include "../include/my_rpg.h"

void set_menu(game_t *gm)
{
    sfSprite_setTexture(gm->menu->b_menu->play, gm->menu->b_menu->but_p,
    sfTrue);
    sfSprite_setTexture(gm->menu->b_menu->option, gm->menu->b_menu->but_o,
    sfTrue);
    sfSprite_setTexture(gm->menu->b_menu->tuto, gm->menu->b_menu->but_t,
    sfTrue);
    sfSprite_setTexture(gm->menu->b_menu->quit, gm->menu->b_menu->but_q,
    sfTrue);
    sfText_setOutlineThickness(gm->title->title1, 3.0);
    sfText_setOutlineThickness(gm->title->title2, 3.0);
    sfText_setColor(gm->title->title1, gm->title->color_title);
    sfText_setColor(gm->title->title2, gm->title->color_title);
}

void init_menu2(game_t *gm)
{
    gm->scene = 0;
    sfSprite_setTexture(gm->menu->background, gm->menu->t_background, sfTrue);
    sfSprite_setScale(gm->menu->b_menu->play, (sfVector2f){1, 1});
    sfSprite_setScale(gm->menu->b_menu->option, (sfVector2f){1, 1});
    sfSprite_setScale(gm->menu->b_menu->tuto, (sfVector2f){1, 1});
    sfSprite_setScale(gm->menu->b_menu->quit, (sfVector2f){1, 1});
    sfSprite_setPosition(gm->menu->b_menu->play, (sfVector2f){800, 400});
    sfSprite_setPosition(gm->menu->b_menu->option, (sfVector2f){800, 550});
    sfSprite_setPosition(gm->menu->b_menu->tuto, (sfVector2f){800, 700});
    sfSprite_setPosition(gm->menu->b_menu->quit, (sfVector2f){800, 850});
}

void set_text_menu(game_t *gm)
{
    set_text_home_title(gm);
    set_text_home_play(gm);
    set_text_home_option(gm);
    set_text_home_tuto(gm);
    set_text_home_quit(gm);
}