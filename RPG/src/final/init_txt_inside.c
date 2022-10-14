/*
** EPITECH PROJECT, 2021
** event.c
** File description:
** event
*/

#include "../include/my_rpg.h"

void init_text_attack(game_t *gm)
{
    sfText_setFont(gm->final->cadre->txt->txt_attack, gm->lang->FR);
    sfText_setString(gm->final->cadre->txt->txt_attack, "Attaquer");
    sfText_setCharacterSize(gm->final->cadre->txt->txt_attack, 30);
    sfText_setPosition(gm->final->cadre->txt->txt_attack,
                        (sfVector2f){850, 75});
    sfText_setColor(gm->final->cadre->txt->txt_attack,
                    sfColor_fromRGB(255, 255, 255));
}

void init_text_defender(game_t *gm)
{
    sfText_setFont(gm->final->cadre->txt->txt_defender, gm->lang->FR);
    sfText_setString(gm->final->cadre->txt->txt_defender, "Defendre");
    sfText_setCharacterSize(gm->final->cadre->txt->txt_defender, 30);
    sfText_setPosition(gm->final->cadre->txt->txt_defender,
                        (sfVector2f){850, 165});
    sfText_setColor(gm->final->cadre->txt->txt_defender,
                    sfColor_fromRGB(255, 255, 255));
}

void init_text_heal(game_t *gm)
{
    sfText_setFont(gm->final->cadre->txt->txt_heal, gm->lang->FR);
    sfText_setString(gm->final->cadre->txt->txt_heal, "Soigner");
    sfText_setCharacterSize(gm->final->cadre->txt->txt_heal, 30);
    sfText_setPosition(gm->final->cadre->txt->txt_heal,
                        (sfVector2f){870, 345});
    sfText_setColor(gm->final->cadre->txt->txt_heal,
                    sfColor_fromRGB(255, 255, 255));
}

void init_text_item(game_t *gm)
{
    sfText_setFont(gm->final->cadre->txt->txt_item, gm->lang->FR);
    sfText_setString(gm->final->cadre->txt->txt_item, "Objets");
    sfText_setCharacterSize(gm->final->cadre->txt->txt_item, 30);
    sfText_setPosition(gm->final->cadre->txt->txt_item,
                        (sfVector2f){870, 255});
    sfText_setColor(gm->final->cadre->txt->txt_item,
                    sfColor_fromRGB(255, 255, 255));
}