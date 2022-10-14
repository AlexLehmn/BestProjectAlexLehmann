/*
** EPITECH PROJECT, 2021
** collision_planet2.c
** File description:
** collision_planet2
*/

#include "../../include/my_rpg.h"

void choice_lang(game_t *gm)
{
    if (gm->lang->f == 1) {
        sfText_setString(gm->play->colli->good_text, "Voulez-vous atterrir ?");
        sfText_setString(gm->play->colli->wrong_text,
        "Zone inacessible\nCause : Vers de l'espace");
    }
    if (gm->lang->f == 2) {
        sfText_setString(gm->play->colli->good_text, "Do you want to land ?");
        sfText_setString(gm->play->colli->wrong_text,
        "Inaccessible area\nCause: Space worm");
    }
    if (gm->lang->f == 3) {
        sfText_setString(gm->play->colli->good_text, "Qieres desembarcar ?");
        sfText_setString(gm->play->colli->wrong_text,
        "Zona inaccesible\nCausa: Gusano espacial");
    }
}

void print_text_planet_w(game_t *gm, int i)
{
    choice_lang(gm);
    sfSprite_setPosition(gm->play->colli->bubble_text_s,
    gm->play->s_map->pos_planet[i]);
    sfRenderWindow_drawSprite(gm->win->win,
    gm->play->colli->bubble_text_s, NULL);
    sfSprite_setPosition(gm->play->colli->ok_s,
    (sfVector2f){gm->play->s_map->pos_planet[i].x + 130,
    gm->play->s_map->pos_planet[i].y + 45});
    sfText_setPosition(gm->play->colli->wrong_text,
    (sfVector2f){gm->play->s_map->pos_planet[i].x + 20,
    gm->play->s_map->pos_planet[i].y + 10});
    sfRenderWindow_drawText(gm->win->win, gm->play->colli->wrong_text, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->play->colli->ok_s, NULL);
}

void print_text_planet(game_t *gm, int i)
{
    choice_lang(gm);
    sfSprite_setPosition(gm->play->colli->bubble_text_s,
    gm->play->s_map->pos_planet[i]);
    sfRenderWindow_drawSprite(gm->win->win,
    gm->play->colli->bubble_text_s, NULL);
    sfSprite_setPosition(gm->play->colli->ok_s,
    (sfVector2f){gm->play->s_map->pos_planet[i].x + 25,
    gm->play->s_map->pos_planet[i].y + 40});
    sfSprite_setPosition(gm->play->colli->no_s,
    (sfVector2f){gm->play->s_map->pos_planet[i].x + 130,
    gm->play->s_map->pos_planet[i].y + 40});
    sfText_setPosition(gm->play->colli->good_text,
    (sfVector2f){gm->play->s_map->pos_planet[i].x + 20,
    gm->play->s_map->pos_planet[i].y + 10});
    sfRenderWindow_drawText(gm->win->win, gm->play->colli->good_text, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->play->colli->ok_s, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->play->colli->no_s, NULL);
}