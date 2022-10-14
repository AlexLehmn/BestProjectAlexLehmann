/*
** EPITECH PROJECT, 2021
** custom
** File description:
** custom
*/

#include "../../include/my_rpg.h"

void print_sprite_c(game_t *gm)
{
    sfRenderWindow_drawSprite(gm->win->win, gm->custom->bg_c, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->arrow->leftc, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->arrow->lefts, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->arrow->rightc, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->arrow->rights, NULL);
}

void print_chara(game_t *gm)
{
    sfRenderWindow_drawSprite(gm->win->win, gm->custom->table_ok, NULL);
    sfRenderWindow_drawText(gm->win->win, gm->custom->ok_c, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->ship->ship, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->char1->chara, NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->arrow->arrow_rturn, NULL);
    sfRenderWindow_drawText(gm->win->win, gm->custom->text_titre_cus, NULL);
    sfRenderWindow_drawText(gm->win->win, gm->char1->text_chara, NULL);
    sfRenderWindow_drawText(gm->win->win, gm->ship->text_ship, NULL);
}

void init_custom(game_t *gm)
{
    init_sprite_c(gm);
    init_sprite_chara(gm);
    init_sprite_ship(gm);
}

void print_all_custom(game_t *gm)
{
    gm->opt->mous_p.x = sfMouse_getPositionRenderWindow(gm->win->win).x;
    gm->opt->mous_p.y = sfMouse_getPositionRenderWindow(gm->win->win).y;
    poll_event_custom(gm);
    print_sprite_c(gm);
    print_chara(gm);
    set_chara(gm);
    set_ship(gm);
    print_f_yellow(gm);
    retun_y_cus(gm);
    print_lang_cus(gm);
    scale_ok(gm);
}

void custom(game_t *gm)
{
    sfRenderWindow_clear(gm->win->win, sfBlack);
    print_all_custom(gm);
}