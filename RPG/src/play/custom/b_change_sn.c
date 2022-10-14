/*
** EPITECH PROJECT, 2021
** change
** File description:
** change
*/

#include "../../include/my_rpg.h"

void retun_menu(game_t *gm)
{
    if (gm->win->mouse_pos.x >= 10
    && gm->win->mouse_pos.x <= 157
    && gm->win->mouse_pos.y >= 10
    && gm->win->mouse_pos.y <= 157) {
        gm->scene = 0;
        sfSound_play(gm->sound->sfx);
        scene(gm);
    }
}

void retun_y_cus(game_t *gm)
{
    if (gm->win->mouse_pos.x >= 10
    && gm->win->mouse_pos.x <= 157
    && gm->win->mouse_pos.y >= 10
    && gm->win->mouse_pos.y <= 157) {
        sfSprite_setTexture(gm->arrow->arrow_rturn, gm->arrow->t_arrow_y,
    sfTrue);
    } else
        sfSprite_setTexture(gm->arrow->arrow_rturn, gm->arrow->t_arrow_rturn,
    sfTrue);
}

void click_ok(game_t *gm)
{
    if (gm->win->mouse_pos.x >= 800
    && gm->win->mouse_pos.x <= 1110
    && gm->win->mouse_pos.y >= 950
    && gm->win->mouse_pos.y <= 1050) {
        gm->scene = 4;
        sfSound_play(gm->sound->sfx);
    }
}

void scale_ok(game_t *gm)
{
    if (gm->win->mouse_pos.x >= 800
    && gm->win->mouse_pos.x <= 1110
    && gm->win->mouse_pos.y >= 950
    && gm->win->mouse_pos.y <= 1050) {
        sfText_setCharacterSize(gm->custom->ok_c, 70);
        sfText_setPosition(gm->custom->ok_c, (sfVector2f){890, 945});
        sfSprite_setScale(gm->custom->table_ok, (sfVector2f){1.1, 1.1});
        sfSprite_setPosition(gm->custom->table_ok, (sfVector2f){783, 945});
    } else {
        sfText_setCharacterSize(gm->custom->ok_c, 70);
        sfText_setPosition(gm->custom->ok_c, (sfVector2f){890, 945});
        sfSprite_setScale(gm->custom->table_ok, (sfVector2f){1, 1});
        sfSprite_setPosition(gm->custom->table_ok, (sfVector2f){800, 950});
    }
}