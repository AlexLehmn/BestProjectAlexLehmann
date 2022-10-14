/*
** EPITECH PROJECT, 2021
** scene2
** File description:
** scene2
*/

#include "../include/my_rpg.h"

void mute_sfx(game_t *gm)
{
    if (gm->opt->mous_p.x >= 1250 && gm->opt->mous_p.x <= 1355
    && gm->opt->mous_p.y >= 770 && gm->opt->mous_p.y <= 875) {
        gm->opt->k = 1;
    }
}

void mute_music(game_t *gm)
{
    if (gm->opt->mous_p.x >= 1250
    && gm->opt->mous_p.x <= 1355
    && gm->opt->mous_p.y >= 600 && gm->opt->mous_p.y <= 705)
        gm->opt->i = 1;
}

void unmute_sfx(game_t *gm)
{
    if (gm->opt->mous_p.x >= 1250 && gm->opt->mous_p.x <= 1355
    && gm->opt->mous_p.y >= 770 && gm->opt->mous_p.y <= 875
    && gm->opt->l == 1)
        gm->opt->k = 2;
}

void unmute_music(game_t *gm)
{
    if (gm->opt->mous_p.x >= 1250
    && gm->opt->mous_p.x <= 1355
    && gm->opt->mous_p.y >= 600
    && gm->opt->mous_p.y <= 705 && gm->opt->j == 1) {
        gm->opt->i = 2;
    }
}

void print_op(game_t *gm)
{
    if (gm->opt->i == 2) {
        gm->sound->vol_music = gm->vol->tmpm;
        gm->sound->r_music.width = gm->vol->tmp2m.width;
        sfSprite_setTextureRect(gm->sound->volume2, gm->sound->r_music);
        sfMusic_setVolume(gm->sound->music, gm->sound->vol_music);
        sfMusic_setVolume(gm->sound->music_play
        , gm->sound->vol_music);
    }

    if (gm->opt->k == 2) {
        gm->sound->vol_sfx = gm->vol->tmpx;
        gm->sound->r_sfx.width = gm->vol->tmp1x.width;
        sfSprite_setTextureRect(gm->sound->volume1, gm->sound->r_sfx);
        sfSound_setVolume(gm->sound->sfx, gm->sound->vol_sfx);
    }
}