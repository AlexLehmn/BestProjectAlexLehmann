/*
** EPITECH PROJECT, 2021
** struct
** File description:
** struct
*/

#include "../include/my_rpg.h"

void struct_fill_stats_character(final_t *final)
{
    final->character->boss->life = 500;
    final->character->hero->life = 500;
    final->character->boss->name = "Boss";
    final->character->hero->name = "Hero";
    final->character->boss->attak = 50;
    final->character->hero->attak = 50;
    final->character->boss->done = 0;
    final->win = 0;
}

void struct_fill_character(final_t *final)
{
    final->character->boss->jauge_life_boss = sfSprite_create();
    final->character->boss->t_jauge_life_boss = sfTexture_createFromFile
                                ("image/final/jauge.png", NULL);
    final->character->hero->jauge_life_hero = sfSprite_create();
    final->character->hero->t_jauge_life_hero = sfTexture_createFromFile
                                ("image/final/jauge.png", NULL);
    final->character->boss->img_boss = sfSprite_create();
    final->character->boss->t_img_boss = sfTexture_createFromFile
                                ("image/final/boss1.png", NULL);
    final->character->hero->img_hero = sfSprite_create();
    final->character->hero->t_img_hero = sfTexture_createFromFile
                                ("image/final/actor1.png", NULL);
}

void struct_fill_mimine(final_t *final)
{
    final->cadre->mimine->s_mimine = sfSprite_create();
    final->cadre->mimine->t_mimine = sfTexture_createFromFile
                            ("image/final/mimine.png", NULL);
    final->cadre->mimine->index = 0;
}

void struct_fill_text(final_t *final)
{
    final->character->boss->boss_name = sfText_create();
    final->character->hero->hero_name = sfText_create();
    final->character->boss->boss_life = sfText_create();
    final->character->hero->hero_life = sfText_create();
    final->cadre->txt->txt_attack = sfText_create();
    final->cadre->txt->txt_defender = sfText_create();
    final->cadre->txt->txt_item = sfText_create();
    final->cadre->txt->txt_heal = sfText_create();
}

void struct_fill_particles(final_t *final)
{
    final->particles->sprite = sfSprite_create();
    final->particles->texture = sfTexture_createFromFile
                                ("image/final/explosion1.png", NULL);
    final->particles->clock = sfClock_create();
    final->particles->rect.top = 0;
    final->particles->rect.left = 0;
    final->particles->rect.height = 154;
    final->particles->rect.width = 165;
    final->clock_g = sfClock_create();
    final->anim = 0;

    final->particles->sprite_t = sfSprite_create();
    final->particles->texture_t = sfTexture_createFromFile
                                ("image/final/explosion1.png", NULL);
    final->particles->clock_t = sfClock_create();
    final->particles->rect_t.top = 0;
    final->particles->rect_t.left = 0;
    final->particles->rect_t.height = 154;
    final->particles->rect_t.width = 165;
    final->clock_g_t = sfClock_create();
    final->anim2 = 0;
}