/*
** EPITECH PROJECT, 2021
** initialisation3.c
** File description:
** initialisation3
*/

#include "../include/my_rpg.h"

void init_pos_ship(game_t *gm)
{
    for (int i = 0; i < 12; i++)
        sfSprite_setScale(gm->play->s_map->planet[i], (sfVector2f){1.7, 1.7});
    sfSprite_setScale(gm->play->s_map->ship, (sfVector2f){0.8, 0.8});
    if (gm->play->v_s_map->ship_val == 0) {
        sfSprite_setOrigin(gm->play->s_map->ship,
        (sfVector2f){30, 57});
        gm->play->s_map->pos_ship.x = 960;
        gm->play->s_map->pos_ship.y = 526.5;
    } if (gm->play->v_s_map->ship_val == 1) {
        sfSprite_setOrigin(gm->play->s_map->ship,
        (sfVector2f){50, 47});
        gm->play->s_map->pos_ship.x = 960;
        gm->play->s_map->pos_ship.y = 526.5;
    }
}

void init_text_planet(game_t *gm)
{
    for (int i = 0; i < 12; i++) {
        sfSprite_setTexture(gm->play->s_map->planet[i],
        gm->play->s_map->c_planet[i], sfTrue);
        sfSprite_setTextureRect(gm->play->s_map->planet[i],
        gm->play->s_map->r_planet[i]);
        sfSprite_setPosition(gm->play->s_map->planet[i],
        gm->play->s_map->pos_planet[i]);
        if (i < 4)
            sfSprite_setTexture(gm->play->s_map->map[i],
            gm->play->s_map->t_map, sfTrue);
    }
}

void init_collision(game_t *gm)
{
    sfSprite_setTexture(gm->play->colli->bubble_text_s,
    gm->play->colli->bubble_text_t, sfTrue);
    sfSprite_setScale(gm->play->colli->bubble_text_s, (sfVector2f){0.3, 0.3});
    sfSprite_setTexture(gm->play->colli->ok_s, gm->play->colli->ok_t, sfTrue);
    sfSprite_setTexture(gm->play->colli->no_s, gm->play->colli->no_t, sfTrue);
    sfSprite_setScale(gm->play->colli->ok_s, (sfVector2f){0.1, 0.1});
    sfSprite_setScale(gm->play->colli->no_s, (sfVector2f){0.1, 0.1});
    sfText_setFont(gm->play->colli->good_text, gm->play->colli->font_text);
    sfText_setColor(gm->play->colli->good_text, sfBlack);
    sfText_setCharacterSize(gm->play->colli->good_text, 20);
    sfText_setFont(gm->play->colli->wrong_text, gm->play->colli->font_text);
    sfText_setColor(gm->play->colli->wrong_text, sfBlack);
    sfText_setCharacterSize(gm->play->colli->wrong_text, 16);
}

void init_load(game_t *gm)
{
    sfSprite_setPosition(gm->play->load->ship_land_s, (sfVector2f) {300, 40});
    sfSprite_setPosition(gm->play->load->ship_travel_s, (sfVector2f) {0, 0});
    sfSprite_setPosition(gm->play->load->button, (sfVector2f) {1835, 950});
    sfSprite_setScale(gm->play->load->button, (sfVector2f) {0.4, 0.4});
    sfSprite_setTexture(gm->play->load->button,
    gm->arrow->t_right, sfTrue);
}