/*
** EPITECH PROJECT, 2021
** story
** File description:
** story
*/

#include "../../include/my_rpg.h"

void poll_event_story(game_t *gm)
{
    while (sfRenderWindow_pollEvent(gm->win->win, &gm->ev->event)) {
        if (gm->ev->event.type == sfEvtClosed)
            sfRenderWindow_close(gm->win->win);
        if (gm->ev->event.type == sfEvtMouseButtonPressed
        && gm->ev->event.mouseButton.button == sfMouseLeft) {
            gestion_click_story(gm);
        }
    }
}

void print_sprite_story(game_t *gm)
{
    sfRenderWindow_drawSprite(gm->win->win, gm->story->bg_story, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->story->woman, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->story->bulle_story, NULL);
    sfRenderWindow_drawText(gm->win->win, gm->t_story->text_story, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->b_story->b_retrn, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->b_story->b_skip, NULL);
    sfRenderWindow_drawText(gm->win->win, gm->b_story->skip, NULL);
}

void init_story(game_t *gm)
{
    initialisation_s(gm);
    initialisation2_s(gm);
}

void print_all_story(game_t *gm)
{
    gm->win->mouse_pos.x = sfMouse_getPositionRenderWindow(gm->win->win).x;
    gm->win->mouse_pos.y = sfMouse_getPositionRenderWindow(gm->win->win).y;
    poll_event_story(gm);
    print_sprite_story(gm);
    change_y_b(gm);
    scale_skikp(gm);
    gestion_lang_story(gm);
}

void story(game_t *gm)
{
    sfRenderWindow_clear(gm->win->win, sfBlack);
    print_all_story(gm);
}