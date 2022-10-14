/*
** EPITECH PROJECT, 2021
** init
** File description:
** init
*/

#include "../../include/my_rpg.h"

void init_sprite_c(game_t *gm)
{
    sfSprite_setTexture(gm->custom->bg_c, gm->custom->t_bg_c, sfTrue);
    sfSprite_setPosition(gm->custom->bg_c, (sfVector2f){0, 0});
    sfSprite_setPosition(gm->arrow->leftc, (sfVector2f){500, 170});
    sfSprite_setScale(gm->arrow->leftc, (sfVector2f){0.7, 0.7});
    sfSprite_setPosition(gm->arrow->lefts, (sfVector2f){500, 570});
    sfSprite_setScale(gm->arrow->lefts, (sfVector2f){0.7, 0.7});
    sfSprite_setPosition(gm->arrow->rightc, (sfVector2f){1230, 170});
    sfSprite_setScale(gm->arrow->rightc, (sfVector2f){0.7, 0.7});
    sfSprite_setPosition(gm->arrow->rights, (sfVector2f){1230, 570});
    sfSprite_setScale(gm->arrow->rights, (sfVector2f){0.7, 0.7});
    sfText_setFont(gm->custom->text_titre_cus, gm->ship->font_space);
    sfText_setOutlineThickness(gm->custom->text_titre_cus, 7.0);
    sfText_setCharacterSize(gm->custom->text_titre_cus, 100);
}

void init_sprite_chara(game_t *gm)
{
    sfSprite_setTexture(gm->custom->table_ok, gm->custom->t_table_ok, sfTrue);
    sfSprite_setPosition(gm->char1->chara, (sfVector2f){800, 100});
    sfSprite_setPosition(gm->arrow->arrow_rturn, (sfVector2f){10, 10});
    sfSprite_setScale(gm->arrow->arrow_rturn, (sfVector2f){0.7, 0.7});
    sfText_setFont(gm->char1->text_chara, gm->ship->font_space);
    sfText_setCharacterSize(gm->char1->text_chara, 70);
    sfText_setColor(gm->char1->text_chara, sfBlack);
    sfText_setOutlineColor(gm->char1->text_chara, sfWhite);
    sfText_setOutlineThickness(gm->char1->text_chara, 4.0);
}

void init_sprite_ship(game_t *gm)
{
    sfText_setString(gm->custom->ok_c, "OK");
    sfText_setFont(gm->custom->ok_c, gm->custom->f_ok_c);
    sfSprite_setPosition(gm->ship->ship, (sfVector2f){800, 500});
    sfText_setFont(gm->ship->text_ship, gm->ship->font_space);
    sfText_setCharacterSize(gm->ship->text_ship, 70);
    sfText_setColor(gm->ship->text_ship, sfBlack);
    sfText_setOutlineColor(gm->ship->text_ship, sfWhite);
    sfText_setOutlineThickness(gm->ship->text_ship, 4.0);
}

void poll_event_custom(game_t *gm)
{
    while (sfRenderWindow_pollEvent(gm->win->win, &gm->ev->event)) {
        if (gm->ev->event.type == sfEvtClosed)
            sfRenderWindow_close(gm->win->win);
        if (gm->ev->event.type == sfEvtMouseButtonPressed
        && gm->ev->event.mouseButton.button == sfMouseLeft) {
            gestion_click(gm);
        }
    }
}