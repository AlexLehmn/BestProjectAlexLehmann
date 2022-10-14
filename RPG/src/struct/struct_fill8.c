/*
** EPITECH PROJECT, 2021
** struct_fill8.c
** File description:
** struct_fill8
*/

#include "../include/my_rpg.h"

collision_t *struct_fill_colli(void)
{
    collision_t *colli = malloc(sizeof(collision_t));
    colli->bubble_text_s = sfSprite_create();
    colli->bubble_text_t = sfTexture_createFromFile("image/BulSpace.png", NULL);
    colli->dlc_text = sfText_create();
    colli->good_text = sfText_create();
    colli->wrong_text = sfText_create();
    colli->no_s = sfSprite_create();
    colli->ok_s = sfSprite_create();
    colli->no_t = sfTexture_createFromFile("image/Nobutton.png", NULL);
    colli->ok_t = sfTexture_createFromFile("image/Okbutton.png", NULL);
    colli->font_text = sfFont_createFromFile("font/story.otf");
    return (colli);
}

loading_t *struct_fill_loading(void)
{
    loading_t *load = malloc(sizeof(loading_t));
    load->ship_land_s = sfSprite_create();
    load->ship_travel_s = sfSprite_create();
    load->ship_landU_t = sfTexture_createFromFile("image/AtUSS.jpg", NULL);
    load->ship_travU_t = sfTexture_createFromFile("image/USSFly.jpg", NULL);
    load->ship_landX_t = sfTexture_createFromFile("image/AtX-Wing.jpg", NULL);
    load->ship_travX_t = sfTexture_createFromFile("image/X-WingsFly.jpg", NULL);
    load->button = sfSprite_create();
    return (load);
}

tuto_t *tuto1(void)
{
    tuto_t *tuto = malloc(sizeof(tuto_t));
    tuto->bg_tu = sfSprite_create();
    tuto->separator = sfSprite_create();
    tuto->ship = sfSprite_create();
    tuto->touche = sfSprite_create();
    tuto->fond = sfSprite_create();
    tuto->perso = sfSprite_create();
    tuto->touche2 = sfSprite_create();
    tuto->touche3 = sfSprite_create();
    tuto->boss = sfSprite_create();
    tuto->espace = sfSprite_create();
    tuto->t_bg_tu = sfTexture_createFromFile("image/tuto/etoile.jpeg", NULL);
    tuto->t_separator = sfTexture_createFromFile("image/tuto/sep.png", NULL);
    tuto->t_fond = sfTexture_createFromFile("image/tuto/fond.png", NULL);
    tuto->t_touche = sfTexture_createFromFile("image/tuto/touche.png", NULL);
    tuto->t_ship = sfTexture_createFromFile("image/X-wing.png", NULL);
    tuto->t_perso = sfTexture_createFromFile("image/tuto/perso.png", NULL);
    tuto->t_boss = sfTexture_createFromFile("image/tuto/boss.png", NULL);
    tuto->t_espace = sfTexture_createFromFile("image/tuto/space.png", NULL);
    return (tuto);
}

tuto2_t *tuto2(void)
{
    tuto2_t *tuto = malloc(sizeof(tuto2_t));
    tuto->boss = sfText_create();
    tuto->custom = sfText_create();
    tuto->planete = sfText_create();
    tuto->space = sfText_create();
    tuto->b_exit = sfSprite_create();
    return (tuto);
}