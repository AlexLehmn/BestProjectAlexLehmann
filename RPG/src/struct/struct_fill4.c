/*
** EPITECH PROJECT, 2021
** struct
** File description:
** struct
*/

#include "../include/my_rpg.h"

vol_t *vol1(void)
{
    vol_t *vol = malloc(sizeof(vol_t));
    vol->s = 0;
    vol->m = 0;
    vol->vm = 100;
    vol->vs = 100;
    vol->vol_m = 0;
    vol->vol_s = 0;
    vol->tmp1x.width = 600;
    vol->tmpx = 100;
    vol->tmp2m.width = 600;
    vol->tmpm = 100;
    return (vol);
}

custom_t *cust1(void)
{
    custom_t *custom = malloc(sizeof(custom_t));
    custom->bg_c = sfSprite_create();
    custom->t_bg_c = sfTexture_createFromFile("image/bg_c2.jpg", NULL);
    custom->c = 1;
    custom->s = 0;
    custom->ok_c = sfText_create();
    custom->f_ok_c = sfFont_createFromFile("font/space_age.ttf");
    custom->table_ok = sfSprite_create();
    custom->t_table_ok = sfTexture_createFromFile("image/table.png", NULL);
    custom->text_titre_cus = sfText_create();
    return (custom);
}

charactere_t *char1(void)
{
    charactere_t *chara = malloc(sizeof(charactere_t));
    chara->chara = sfSprite_create();
    chara->t_chara1 = sfTexture_createFromFile("image/charactere/chara1.png",
    NULL);
    chara->t_chara2 = sfTexture_createFromFile("image/charactere/chara2.png",
    NULL);
    chara->t_chara3 = sfTexture_createFromFile("image/charactere/chara3.png",
    NULL);
    chara->t_chara4 = sfTexture_createFromFile("image/charactere/chara4.png",
    NULL);
    chara->t_chara5 = sfTexture_createFromFile("image/charactere/chara5.png",
    NULL);
    chara->text_chara = sfText_create();
    return (chara);
}

ship_t *ship1(void)
{
    ship_t *ship = malloc(sizeof(ship_t));
    ship->ship = sfSprite_create();
    ship->t_ship_x = sfTexture_createFromFile("image/ship_x.png", NULL);
    ship->t_ship_USS = sfTexture_createFromFile("image/ship_USS.png", NULL);
    ship->left_y = sfTexture_createFromFile("image/f_g_yellow.png", NULL);
    ship->right_y = sfTexture_createFromFile("image/f_d_yellow.png", NULL);
    ship->text_ship = sfText_create();
    ship->font_space = sfFont_createFromFile("font/space_age.ttf");
    return (ship);
}

arrow_t *arrow(void)
{
    arrow_t *arrow = malloc(sizeof(arrow_t));
    arrow->leftc = sfSprite_create();
    arrow->lefts = sfSprite_create();
    arrow->rightc = sfSprite_create();
    arrow->rights = sfSprite_create();
    arrow->t_left = sfTexture_createFromFile("image/left.png", NULL);
    arrow->t_right = sfTexture_createFromFile("image/right.png", NULL);
    arrow->arrow_rturn = sfSprite_create();
    arrow->t_arrow_rturn = sfTexture_createFromFile("image/fleche_retour.png",
    NULL);
    arrow->t_arrow_y = sfTexture_createFromFile("image/arrow_rt_y.png", NULL);
    return (arrow);
}
