/*
** EPITECH PROJECT, 2021
** struct_fill.c
** File description:
** struct_fill
*/

#include "../include/my_rpg.h"

window_t *struct_fill_window(void)
{
    window_t *win = malloc(sizeof(window_t));
    win->video_mode.width = 1920;
    win->video_mode.height = 1080;
    win->video_mode.bitsPerPixel = 32;
    return (win);
}

menu_t *struct_fill_menu(void)
{
    menu_t *menu = malloc(sizeof(menu_t));
    menu->background = sfSprite_create();
    menu->t_background = sfTexture_createFromFile("image/bg.png", NULL);
    menu->b_menu = struct_fill_but_menu();
    menu->t_b_menu = struct_fill_text_but_menu();
    return (menu);
}

title_t *struct_title(void)
{
    title_t *title = malloc(sizeof(title_t));
    title->title1 = sfText_create();
    title->title2 = sfText_create();
    title->police = sfFont_createFromFile("font/space_age.ttf");
    title->color_title = sfColor_fromRGB(205, 133, 63);
    return (title);
}

play_t *struct_fill_play(void)
{
    play_t *play = malloc(sizeof(play_t));
    play->inv = struct_fill_inventory();
    play->s_map = struct_fill_space_map();
    play->v_s_map = struct_fill_v_space_map();
    play->scene_play = 1;
    play->colli = struct_fill_colli();
    play->load = struct_fill_loading();
    return (play);
}

game_t *struct_fill_game(void)
{
    game_t *gm = malloc(sizeof(game_t));
    gm->win = struct_fill_window();
    gm->play = struct_fill_play();
    gm->menu = struct_fill_menu();
    gm->final = struct_fill_final();
    gm->title = struct_title();
    gm->ev = malloc(sizeof(event_t));
    gm->opt = opt1();
    gm->text = text1();
    gm->sound = sound1();
    gm->lang = langue1();
    gm->lang2 = langue2();
    gm->vol = vol1();
    gm->custom = cust1();
    gm->char1 = char1();
    gm->ship = ship1();
    gm->arrow = arrow();
    gm->story = story1();
    gm->t_story = t_story1();
    gm->b_story = b_story1();
    gm->echap = echap1();
    gm->tuto = tuto1();
    gm->tuto_text = tuto2();
    return (gm);
}