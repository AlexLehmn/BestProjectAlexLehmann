/*
** EPITECH PROJECT, 2021
** init1
** File description:
** init1
*/

#include "../include/my_rpg.h"

void init_option(game_t *gm)
{
    sfSprite_setPosition(gm->opt->window, (sfVector2f){500, 0});
    sfSprite_setTexture(gm->opt->window, gm->opt->text_wind, sfTrue);
    sfSprite_setPosition(gm->opt->bar_sfx, (sfVector2f){600, 800});
    sfSprite_setTexture(gm->opt->bar_sfx, gm->opt->text_sfx_bar, sfTrue);
    sfSprite_setPosition(gm->opt->mute_sfx, (sfVector2f){1250, 770});
    sfSprite_setTexture(gm->opt->mute_sfx, gm->opt->text_mute_sfx, sfTrue);
    sfSprite_setScale(gm->opt->mute_sfx, (sfVector2f){0.5, 0.5});
    sfSprite_setPosition(gm->opt->bar_music, (sfVector2f){600, 640});
    sfSprite_setTexture(gm->opt->bar_music, gm->opt->text_music_bar, sfTrue);
    sfSprite_setPosition(gm->opt->mute_music, (sfVector2f){1250, 600});
    sfSprite_setTexture(gm->opt->mute_music, gm->opt->text_mute_music, sfTrue);
    sfSprite_setScale(gm->opt->mute_music, (sfVector2f){0.5, 0.5});
    sfSprite_setPosition(gm->opt->exit, (sfVector2f){10, 10});
    sfSprite_setTexture(gm->opt->exit, gm->opt->t_exit, sfTrue);
    sfSprite_setScale(gm->opt->exit, (sfVector2f){0.5, 0.5});
}

void init_option_texte(game_t *gm)
{
    sfText_setFont(gm->text->t_option, gm->text->fond);
    sfText_setCharacterSize(gm->text->t_option, 60);
    sfText_setFont(gm->text->t_music, gm->text->music);
    sfText_setCharacterSize(gm->text->t_music, 60);
    sfText_setPosition(gm->text->t_music, (sfVector2f){800, 550});
    sfText_setString(gm->text->t_sfx, "SFX");
    sfText_setFont(gm->text->t_sfx, gm->text->sfx);
    sfText_setCharacterSize(gm->text->t_sfx, 60);
    sfText_setPosition(gm->text->t_sfx, (sfVector2f){800, 720});
    sfText_setFont(gm->text->t_lang, gm->text->lang);
    sfText_setCharacterSize(gm->text->t_lang, 60);
}

void init_option_texte2(game_t *gm)
{
    sfText_setFont(gm->text->t_x, gm->text->x);
    sfText_setCharacterSize(gm->text->t_x, 60);
    sfText_setPosition(gm->text->t_x, (sfVector2f){1245, 740});
    sfText_setScale(gm->text->t_x, (sfVector2f){2, 2});
    sfText_setFont(gm->text->t_x2, gm->text->x2);
    sfText_setCharacterSize(gm->text->t_x2, 60);
    sfText_setPosition(gm->text->t_x2, (sfVector2f){1245, 570});
    sfText_setScale(gm->text->t_x2, (sfVector2f){2, 2});
}

void init_sound(game_t *gm)
{
    sfMusic_setLoop(gm->sound->music, sfTrue);
    sfMusic_play(gm->sound->music);
    sfSprite_setTexture(gm->sound->volume1, gm->sound->t_volume, sfTrue);
    sfSprite_setPosition(gm->sound->volume1, (sfVector2f){605, 803});
    sfSprite_setTexture(gm->sound->volume2, gm->sound->t_volume, sfTrue);
    sfSprite_setPosition(gm->sound->volume2, (sfVector2f){605, 643});
    sfSprite_setTextureRect(gm->sound->volume2, gm->sound->r_music);
    sfSprite_setTextureRect(gm->sound->volume1, gm->sound->r_sfx);
    sfSound_setBuffer(gm->sound->sfx, gm->sound->sound_buffer);
}

void init_opt(game_t *gm)
{
    init_option(gm);
    init_option_texte(gm);
    init_option_texte2(gm);
    init_lang(gm);
    init_lang2(gm);
    init_sound(gm);
    init_set_lang(gm);
}