/*
** EPITECH PROJECT, 2021
** struct_menu.c
** File description:
** struct_menu
*/

#include "../include/my_rpg.h"

text_but_menu_t *struct_fill_text_but_menu(void)
{
    text_but_menu_t *t_b_menu = malloc(sizeof(text_but_menu_t));
    t_b_menu->font = sfFont_createFromFile("font/space_age.ttf");
    t_b_menu->option = sfText_create();
    t_b_menu->play = sfText_create();
    t_b_menu->tuto = sfText_create();
    t_b_menu->quit = sfText_create();
    return (t_b_menu);
}

but_menu_t *struct_fill_but_menu(void)
{
    but_menu_t *b_menu = malloc(sizeof(but_menu_t));
    b_menu->option = sfSprite_create();
    b_menu->play = sfSprite_create();
    b_menu->tuto = sfSprite_create();
    b_menu->quit = sfSprite_create();
    b_menu->but_p = sfTexture_createFromFile("image/table.png", NULL);
    b_menu->but_o = sfTexture_createFromFile("image/table.png", NULL);
    b_menu->but_t = sfTexture_createFromFile("image/table.png", NULL);
    b_menu->but_q = sfTexture_createFromFile("image/table.png", NULL);
    return (b_menu);
}