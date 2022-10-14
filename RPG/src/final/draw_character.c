/*
** EPITECH PROJECT, 2021
** event.c
** File description:
** event
*/

#include "../include/my_rpg.h"

void draw_character_stats(game_t *gm)
{
    sfText_setString(gm->final->character->boss->boss_life,
                    my_itoa(gm->final->character->boss->life));
    sfText_setString(gm->final->character->hero->hero_life,
                    my_itoa(gm->final->character->hero->life));
    sfRenderWindow_drawText(gm->win->win,
                            gm->final->character->boss->boss_name, NULL);
    sfRenderWindow_drawText(gm->win->win,
                            gm->final->character->hero->hero_name, NULL);
    sfRenderWindow_drawText(gm->win->win,
                            gm->final->character->boss->boss_life, NULL);
    if (gm->final->character->boss->done == 2) {
        gm->final->character->boss->done = 0;
        sfSound_play(gm->sound->sfx);
        gm->final->cadre->mimine->i = 0;
    }
    sfRenderWindow_drawText(gm->win->win,
                            gm->final->character->hero->hero_life, NULL);
}

void draw_character_img(game_t *gm)
{
    sfRenderWindow_drawSprite(gm->win->win,
                                gm->final->character->boss->img_boss, NULL);
    sfRenderWindow_drawSprite(gm->win->win,
                                gm->final->character->hero->img_hero, NULL);
}

void draw_action_text(game_t *gm)
{
    sfRenderWindow_drawText(gm->win->win,
                            gm->final->cadre->txt->txt_attack, NULL);
    sfRenderWindow_drawText(gm->win->win,
                            gm->final->cadre->txt->txt_defender, NULL);
    sfRenderWindow_drawText(gm->win->win,
                            gm->final->cadre->txt->txt_heal, NULL);
    sfRenderWindow_drawText(gm->win->win,
                            gm->final->cadre->txt->txt_item, NULL);
}