/*
** EPITECH PROJECT, 2021
** event.c
** File description:
** event
*/

#include "../include/my_rpg.h"

void start_particles(game_t *gm)
{
    gm->final->time_g = sfClock_getElapsedTime(gm->final->clock_g);
    gm->final->elapsed_g = sfTime_asSeconds(gm->final->time_g);
    if (gm->final->elapsed_g <= 1.5) {
        gm->final->anim = 1;
    } else {
        sfClock_restart(gm->final->clock_g);
        gm->final->particles->rect.left = 0;
        gm->final->anim = 0;
    }
}

void start_particles_hero(game_t *gm)
{
    gm->final->time_g_t = sfClock_getElapsedTime(gm->final->clock_g_t);
    gm->final->elapsed_g_t = sfTime_asSeconds(gm->final->time_g_t);
    if (gm->final->elapsed_g_t >= 2.5) {
        if (gm->final->elapsed_g_t <= 4) {
            gm->final->anim2 = 1;
            sfSprite_setScale(gm->final->particles->sprite_t, (sfVector2f){1.0, 1.0});
        } else
            gm->final->anim2 = 0;
    } else {
        gm->final->particles->rect_t.left = 0;
    }
    if (gm->final->elapsed_g_t >= 3.5)
        gm->final->anim2 = 0;
}

void draw_particles(game_t *gm)
{
    gm->final->particles->time = sfClock_getElapsedTime(gm->final->particles->clock);
    gm->final->particles->elapsed = sfTime_asSeconds(gm->final->particles->time);
    if (gm->final->particles->elapsed >= 0.1) {
        sfSprite_setTextureRect(gm->final->particles->sprite, gm->final->particles->rect);
        if (gm->final->particles->rect.left >= gm->final->particles->rect.width * 15) {
            gm->final->particles->rect.left = 0;
        } else {
            gm->final->particles->rect.left +=
            gm->final->particles->rect.width;
        }
        sfClock_restart(gm->final->particles->clock);
    }
    sfRenderWindow_drawSprite(gm->win->win,
                            gm->final->particles->sprite, NULL);   
}

void draw_particles_hero(game_t *gm)
{
    gm->final->particles->time_t = sfClock_getElapsedTime(gm->final->particles->clock_t);
    gm->final->particles->elapsed_t = sfTime_asSeconds(gm->final->particles->time_t);
    if (gm->final->particles->elapsed_t >= 0.1) {
        sfSprite_setTextureRect(gm->final->particles->sprite_t, gm->final->particles->rect_t);
        if (gm->final->particles->rect_t.left >= gm->final->particles->rect_t.width * 15) {
            gm->final->particles->rect_t.left = 0;
        } else {
            gm->final->particles->rect_t.left +=
            gm->final->particles->rect_t.width;
        }
        sfClock_restart(gm->final->particles->clock_t);
    }
    if (gm->final->elapsed_g_t >= 2.5) {
        sfRenderWindow_drawSprite(gm->win->win,
                            gm->final->particles->sprite_t, NULL);
    }
}