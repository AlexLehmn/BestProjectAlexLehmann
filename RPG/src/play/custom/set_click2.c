/*
** EPITECH PROJECT, 2021
** set_char
** File description:
** char
*/

#include "../../include/my_rpg.h"

void set_chara(game_t *gm)
{
    if (gm->custom->c == 1) {
        sfSprite_setTexture(gm->char1->chara, gm->char1->t_chara1, sfTrue);
        sfText_setString(gm->char1->text_chara, "XEROUE");
        sfText_setPosition(gm->char1->text_chara, (sfVector2f){760, 400});
    } if (gm->custom->c == 2) {
        sfSprite_setTexture(gm->char1->chara, gm->char1->t_chara2, sfTrue);
        sfText_setString(gm->char1->text_chara, "MORI");
        sfText_setPosition(gm->char1->text_chara, (sfVector2f){840, 400});
    } if (gm->custom->c == 3) {
        sfSprite_setTexture(gm->char1->chara, gm->char1->t_chara3, sfTrue);
        sfText_setString(gm->char1->text_chara, "ABBY");
        sfText_setPosition(gm->char1->text_chara, (sfVector2f){825, 400});
    } if (gm->custom->c == 4) {
        sfSprite_setTexture(gm->char1->chara, gm->char1->t_chara4, sfTrue);
        sfText_setString(gm->char1->text_chara, "BOB");
        sfText_setPosition(gm->char1->text_chara, (sfVector2f){855, 400});
    } if (gm->custom->c == 5) {
        sfSprite_setTexture(gm->char1->chara, gm->char1->t_chara5, sfTrue);
        sfText_setString(gm->char1->text_chara, "CAPTAIN DUCK");
        sfText_setPosition(gm->char1->text_chara, (sfVector2f){630, 400});
    }
}

void set_ship(game_t *gm)
{
    if (gm->custom->s == 1) {
        gm->play->v_s_map->ship_val = gm->custom->s;
        sfSprite_setTexture(gm->ship->ship, gm->ship->t_ship_x, sfTrue);
        sfText_setString(gm->ship->text_ship, "X-WING");
        sfText_setPosition(gm->ship->text_ship, (sfVector2f){805, 800});
    }
    if (gm->custom->s == 0) {
        gm->play->v_s_map->ship_val = gm->custom->s;
        sfSprite_setTexture(gm->ship->ship, gm->ship->t_ship_USS, sfTrue);
        sfText_setString(gm->ship->text_ship, "USS ENTERPRISE");
        sfText_setPosition(gm->ship->text_ship, (sfVector2f){550, 800});
    }
}