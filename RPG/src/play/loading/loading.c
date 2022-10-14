/*
** EPITECH PROJECT, 2021
** loading.c
** File description:
** loading
*/

#include "../../include/my_rpg.h"

void print_load(game_t *gm)
{
    sfRenderWindow_drawSprite(gm->win->win,
    gm->play->load->ship_travel_s, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->play->load->button, NULL);
}

void init_sprite(game_t *gm)
{
    if (gm->play->v_s_map->ship_val == 1) {
        sfSprite_setTexture(gm->play->load->ship_travel_s,
        gm->play->load->ship_travX_t, sfTrue);
        sfSprite_setTexture(gm->play->load->ship_land_s,
        gm->play->load->ship_landX_t, sfTrue);
    } if (gm->play->v_s_map->ship_val == 0) {
        sfSprite_setTexture(gm->play->load->ship_travel_s,
        gm->play->load->ship_travU_t, sfTrue);
        sfSprite_setTexture(gm->play->load->ship_land_s,
        gm->play->load->ship_landU_t, sfTrue);
    }
}

void poll_event_loading(game_t *gm)
{
    while (sfRenderWindow_pollEvent(gm->win->win, &gm->ev->event)) {
        if (gm->ev->event.type == sfEvtClosed)
            sfRenderWindow_close(gm->win->win);
        if (gm->ev->event.type == sfEvtMouseButtonReleased &&
            gm->ev->event.mouseButton.button == sfMouseLeft &&
            gm->win->mouse_pos.x >= 1835 && gm->win->mouse_pos.x <= 1919 &&
            gm->win->mouse_pos.y >= 950 && gm->win->mouse_pos.y <= 1034)
                gm->scene = 15;
    }
}

void loading_planet(game_t *gm)
{
    sfRenderWindow_clear(gm->win->win, sfRed);
    poll_event_loading(gm);
    init_sprite(gm);
    print_load(gm);
}