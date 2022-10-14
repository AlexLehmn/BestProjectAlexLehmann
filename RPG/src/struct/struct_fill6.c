/*
** EPITECH PROJECT, 2021
** struct
** File description:
** struct
*/

#include "../include/my_rpg.h"

void struct_fill_ui(final_t *final)
{
    final->b_menu->quit = sfSprite_create();
    final->b_menu->but_q = sfTexture_createFromFile("image/final/quit.png",
                                            NULL);
    final->b_menu->but_q_hover = sfTexture_createFromFile
                        ("image/final/quit_hover.png", NULL);
}

void struct_fill_little_cadre(final_t *final)
{
    final->cadre->middle_cadre = sfSprite_create();
    final->cadre->t_middle_cadre = sfTexture_createFromFile
                                    ("image/final/middle_cadre.png", NULL);
    final->cadre->cadre_attack = sfSprite_create();
    final->cadre->t_cadre_attack = sfTexture_createFromFile
                                    ("image/final/little_cadre.png", NULL);
    final->cadre->cadre_defendre = sfSprite_create();
    final->cadre->t_cadre_defendre = sfTexture_createFromFile
                                    ("image/final/little_cadre.png", NULL);
    final->cadre->cadre_soin = sfSprite_create();
    final->cadre->t_cadre_soin = sfTexture_createFromFile
                                    ("image/final/little_cadre.png", NULL);
    final->cadre->cadre_item = sfSprite_create();
    final->cadre->t_cadre_item = sfTexture_createFromFile
                                    ("image/final/little_cadre.png", NULL);
}

void struct_fill_inside_character_cadre(final_t *final)
{
    final->cadre->inside_cadre_enemy = sfSprite_create();
    final->cadre->t_inside_cadre_enemy = sfTexture_createFromFile
                                        ("image/final/inside_cadre.png", NULL);
    final->cadre->inside_cadre_hero = sfSprite_create();
    final->cadre->t_inside_cadre_hero = sfTexture_createFromFile
                                        ("image/final/inside_cadre.png", NULL);
}

void struct_fill_character_cadre(final_t *final)
{
    final->cadre->cadre_enemy = sfSprite_create();
    final->cadre->t_cadre_enemy = sfTexture_createFromFile
                                ("image/final/cadre.png", NULL);
    final->cadre->cadre_hero = sfSprite_create();
    final->cadre->t_cadre_hero = sfTexture_createFromFile
                                ("image/final/cadre.png", NULL);
}

final_t *struct_fill_final(void)
{
    final_t *final;

    final = malloc(sizeof(final_t));
    final->b_menu = malloc(sizeof(but_menu_t));
    final->cadre = malloc(sizeof(cadre_t));
    final->background = sfSprite_create();
    final->character = malloc(sizeof(character_t));
    final->character->boss = malloc(sizeof(boss_t));
    final->character->hero = malloc (sizeof(hero_t));
    final->cadre->txt = malloc(sizeof(txt_inside_cadre_t));
    final->cadre->mimine = malloc(sizeof(mimine_t));
    final->particles = malloc(sizeof(particles_t));
    final->t_background = sfTexture_createFromFile("image/chateau.jpg", NULL);
    struct_fill_ui(final);
    struct_fill_character_cadre(final);
    struct_fill_inside_character_cadre(final);
    struct_fill_little_cadre(final);
    struct_fill_character(final);
    struct_fill_stats_character(final);
    struct_fill_text(final);
    struct_fill_mimine(final);
    struct_fill_particles(final);
    struct_fill_last_page(final);
    return (final);
}