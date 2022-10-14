/*
** EPITECH PROJECT, 2021
** event.c
** File description:
** event
*/

#include "../include/my_rpg.h"

void draw_character_cadre(game_t *gm)
{
    sfRenderWindow_drawSprite(gm->win->win, gm->final->cadre->cadre_enemy,
                                NULL);
    sfRenderWindow_drawSprite(gm->win->win,
                                gm->final->cadre->inside_cadre_enemy, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->final->cadre->cadre_hero, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->final->cadre->inside_cadre_hero,
                                NULL);
}

void draw_jauge(game_t *game)
{
    sfRenderWindow_drawSprite(game->win->win,
                            game->final->character->boss->jauge_life_boss,
                            NULL);
    sfRenderWindow_drawSprite(game->win->win,
                            game->final->character->hero->jauge_life_hero,
                            NULL);
}

void draw_final_inside_middle_cadre(game_t *gm)
{
    sfRenderWindow_drawSprite(gm->win->win, gm->final->cadre->middle_cadre,
                                NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->final->cadre->cadre_attack,
                                NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->final->cadre->cadre_defendre,
                                NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->final->cadre->cadre_item,
                                NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->final->cadre->cadre_soin,
                                NULL);
    sfRenderWindow_drawSprite(gm->win->win,
                                gm->final->cadre->mimine->s_mimine,
                                NULL);
}

void draw_ui(game_t *gm)
{
    sfRenderWindow_drawSprite(gm->win->win, gm->final->background, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->final->b_menu->quit, NULL);
}

void draw(game_t *gm)
{
    draw_ui(gm);
    draw_character_cadre(gm);
    draw_final_inside_middle_cadre(gm);
    draw_jauge(gm);
    draw_character_img(gm);
    draw_action_text(gm);
    game_controler(gm);
    draw_win(gm);
    if (gm->final->anim) {
        draw_particles(gm);
        start_particles(gm);
    }
    if (gm->final->anim2) {
        draw_particles_hero(gm);
        start_particles_hero(gm);
    }
    if (gm->final->elapsed_g_t >= 2.5) {
        action_boss(gm);
    }
    draw_character_stats(gm);
}