/*
** EPITECH PROJECT, 2021
** change
** File description:
** change
*/

#include "../../include/my_rpg.h"

void change_y_b(game_t *gm)
{
    if (gm->win->mouse_pos.x >= 10
    && gm->win->mouse_pos.x <= 157
    && gm->win->mouse_pos.y >= 10
    && gm->win->mouse_pos.y <= 157) {
        sfSprite_setTexture(gm->b_story->b_retrn, gm->arrow->t_arrow_y,
    sfTrue);
    } else
        sfSprite_setTexture(gm->b_story->b_retrn, gm->arrow->t_arrow_rturn,
    sfTrue);
}

void scale_skikp(game_t *gm)
{
    if (gm->win->mouse_pos.x >= 1540
    && gm->win->mouse_pos.x <= 1850
    && gm->win->mouse_pos.y >= 945
    && gm->win->mouse_pos.y <= 1045) {
        sfSprite_setScale(gm->b_story->b_skip, (sfVector2f){1.1, 1.1});
        sfSprite_setPosition(gm->b_story->b_skip, (sfVector2f){1523, 935});
    } else {
        sfSprite_setScale(gm->b_story->b_skip, (sfVector2f){1, 1});
        sfSprite_setPosition(gm->b_story->b_skip, (sfVector2f){1540, 940});
    }
}