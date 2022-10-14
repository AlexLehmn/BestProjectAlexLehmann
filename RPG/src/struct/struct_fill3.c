/*
** EPITECH PROJECT, 2021
** struc
** File description:
** struct
*/

#include "../include/my_rpg.h"

option_t *opt1(void)
{
    option_t *op = malloc(sizeof(option_t));
    op->window = sfSprite_create();
    op->text_wind = sfTexture_createFromFile("image/Window.png", NULL);
    op->background = sfSprite_create();
    op->text = sfTexture_createFromFile("image/bg.png", NULL);
    op->bar_sfx = sfSprite_create();
    op->text_sfx_bar = sfTexture_createFromFile("image/void.png", NULL);
    op->mute_sfx = sfSprite_create();
    op->text_mute_sfx = sfTexture_createFromFile("image/mute.png", NULL);
    op->bar_music = sfSprite_create();
    op->text_music_bar = sfTexture_createFromFile("image/void.png", NULL);
    op->mute_music = sfSprite_create();
    op->text_mute_music = sfTexture_createFromFile("image/mute2.png", NULL);
    op->exit = sfSprite_create();
    op->t_exit = sfTexture_createFromFile("image/Close.png", NULL);
    op->i = 0;
    op->j = 0;
    op->k = 0;
    op->l = 0;
    return (op);
}

text_op_t *text1(void)
{
    text_op_t *op = malloc(sizeof(text_op_t));
    op->fond = sfFont_createFromFile("font/space_age.ttf");
    op->t_option = sfText_create();
    op->music = sfFont_createFromFile("font/space_age.ttf");
    op->t_music = sfText_create();
    op->sfx = sfFont_createFromFile("font/space_age.ttf");
    op->t_sfx = sfText_create();
    op->lang = sfFont_createFromFile("font/space_age.ttf");
    op->t_lang = sfText_create();
    op->x = sfFont_createFromFile("font/neuropol.ttf");
    op->t_x = sfText_create();
    op->x2 = sfFont_createFromFile("font/neuropol.ttf");
    op->t_x2 = sfText_create();
    return (op);
}

sound_t *sound1(void)
{
    sound_t *sound = malloc(sizeof(sound_t));
    sound->music = sfMusic_createFromFile("sound/music_espace.wav");
    sound->music_play = sfMusic_createFromFile("sound/finish.wav");
    sound->sfx = sfSound_create();
    sound->sound_buffer = sfSoundBuffer_createFromFile("sound/sfx_button.wav");
    sound->volume1 = sfSprite_create();
    sound->volume2 = sfSprite_create();
    sound->t_volume = sfTexture_createFromFile("image/rempli.png", NULL);
    sound->vol_music = 100;
    sound->vol_sfx = 100;
    sound->r_music.width = 600;
    sound->r_music.top = 0;
    sound->r_music.height = 24;
    sound->r_music.left = 0;
    sound->r_sfx.width = 600;
    sound->r_sfx.top = 0;
    sound->r_sfx.height = 24;
    sound->r_sfx.left = 0;
    return (sound);
}

langue_t *langue1(void)
{
    langue_t *lang = malloc(sizeof(langue_t));
    lang->t_case = sfTexture_createFromFile("image/case.png", NULL);
    lang->case_fr = sfSprite_create();
    lang->t_case = sfTexture_createFromFile("image/case.png", NULL);
    lang->case_en = sfSprite_create();
    lang->t_case = sfTexture_createFromFile("image/case.png", NULL);
    lang->case_es = sfSprite_create();
    lang->FR = sfFont_createFromFile("font/space_age.ttf");
    lang->t_FR = sfText_create();
    lang->EN = sfFont_createFromFile("font/space_age.ttf");
    lang->t_EN = sfText_create();
    lang->ES = sfFont_createFromFile("font/space_age.ttf");
    lang->t_ES = sfText_create();
    lang->f = 1;
    return (lang);
}

langue2_t *langue2(void)
{
    langue2_t *lang = malloc(sizeof(langue2_t));
    lang->x_fr = sfFont_createFromFile("font/neuropol.ttf");
    lang->t_x_fr = sfText_create();
    lang->x_en = sfFont_createFromFile("font/neuropol.ttf");
    lang->t_x_en = sfText_create();
    lang->x_es = sfFont_createFromFile("font/neuropol.ttf");
    lang->t_x_es = sfText_create();
    lang->exit_yellow = sfSprite_create();
    lang->t_exit_y = sfTexture_createFromFile("image/jauneClose.png", NULL);
    lang->i = 1;
    return (lang);
}