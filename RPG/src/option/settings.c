/*
** EPITECH PROJECT, 2021
** setting
** File description:
** menu setting
*/

#include "../include/my_rpg.h"

void print_lang(game_t *gm)
{
    sfRenderWindow_drawSprite(gm->win->win, gm->lang->case_fr, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->lang->case_en, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->lang->case_es, NULL);
}

void print_back_sound(game_t *gm)
{
    sfSprite_setPosition(gm->opt->background, (sfVector2f){0, 0});
    sfSprite_setTexture(gm->opt->background, gm->opt->text, sfTrue);
    sfRenderWindow_drawSprite(gm->win->win, gm->opt->background, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->opt->window, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->opt->bar_sfx, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->opt->mute_sfx, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->opt->bar_music, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->opt->mute_music, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->sound->volume1, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->sound->volume2, NULL);
}

void print_text_option(game_t *gm)
{
    sfRenderWindow_drawText(gm->win->win, gm->text->t_music, NULL);
    sfRenderWindow_drawText(gm->win->win, gm->text->t_sfx, NULL);
    sfRenderWindow_drawText(gm->win->win, gm->text->t_lang, NULL);
    sfRenderWindow_drawText(gm->win->win, gm->text->t_option, NULL);
    sfRenderWindow_drawText(gm->win->win, gm->lang->t_FR, NULL);
    sfRenderWindow_drawText(gm->win->win, gm->lang->t_EN, NULL);
    sfRenderWindow_drawText(gm->win->win, gm->lang->t_ES, NULL);
}

void print_all_op(game_t *gm)
{
    gm->opt->mous_p.x = sfMouse_getPositionRenderWindow(gm->win->win).x;
    gm->opt->mous_p.y = sfMouse_getPositionRenderWindow(gm->win->win).y;
    print_back_sound(gm);
    print_lang(gm);
    print_text_option(gm);
    poll_event_option(gm);
    cal(gm);
    lang_print(gm);
    retr_yellow(gm);
}

void option(game_t *gm)
{
    sfRenderWindow_clear(gm->win->win, sfBlack);
    print_all_op(gm);
}