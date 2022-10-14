/*
** EPITECH PROJECT, 2021
** vol2
** File description:
** vol
*/

#include "../include/my_rpg.h"

void set_vol4(game_t *gm)
{
    if (gm->vol->m == 1 && gm->sound->vol_music > 0) {
        gm->sound->vol_music = gm->sound->vol_music - 5;
        gm->sound->r_music.width = gm->sound->r_music.width - 30;
        gm->vol->tmpm = gm->sound->vol_music;
        gm->vol->tmp2m.width = gm->sound->r_music.width;
        if (gm->vol->tmpm == 0) {
            gm->opt->i = 1;
            mute_gestion(gm);
        }
        sfSprite_setTextureRect(gm->sound->volume2, gm->sound->r_music);
        sfMusic_setVolume(gm->sound->music, gm->sound->vol_music);
        sfMusic_setVolume(gm->sound->music_play, gm->sound->vol_music);
    }
}

void set_vol5(game_t *gm)
{
    if (gm->vol->m == 1 && gm->sound->vol_music < 100) {
        gm->sound->vol_music = gm->sound->vol_music + 5;
        gm->sound->r_music.width = gm->sound->r_music.width + 30;
        gm->vol->tmpm = gm->sound->vol_music;
        gm->vol->tmp2m.width = gm->sound->r_music.width;
        sfSprite_setTextureRect(gm->sound->volume2, gm->sound->r_music);
        sfMusic_setVolume(gm->sound->music, gm->sound->vol_music);
        sfMusic_setVolume(gm->sound->music_play, gm->sound->vol_music);
    }
}

void set_vol6(game_t *gm)
{
    if (gm->vol->s == 1 && gm->sound->vol_sfx > 0) {
        gm->sound->vol_sfx = gm->sound->vol_sfx - 5;
        gm->sound->r_sfx.width = gm->sound->r_sfx.width - 30;
        gm->vol->tmpx = gm->sound->vol_sfx;
        gm->vol->tmp1x.width = gm->sound->r_sfx.width;
        if (gm->vol->tmpx == 0) {
            gm->opt->k = 1;
            mute_gestion(gm);
        }
        sfSprite_setTextureRect(gm->sound->volume1, gm->sound->r_sfx);
        sfSound_setVolume(gm->sound->sfx, gm->sound->vol_sfx);
        sfSound_play(gm->sound->sfx);
    }
}

void set_vol7(game_t *gm)
{
    if (gm->vol->s == 1 && gm->sound->vol_sfx < 100) {
        gm->sound->vol_sfx = gm->sound->vol_sfx + 5;
        gm->sound->r_sfx.width = gm->sound->r_sfx.width + 30;
        gm->vol->tmpx = gm->sound->vol_sfx;
        gm->vol->tmp1x.width = gm->sound->r_sfx.width;
        sfSprite_setTextureRect(gm->sound->volume1, gm->sound->r_sfx);
        sfSound_setVolume(gm->sound->sfx, gm->sound->vol_sfx);
        sfSound_play(gm->sound->sfx);
    }
}

void print_vol2(game_t *gm)
{
    if (gm->opt->event.key.code == sfKeyLeft) {
        set_vol4(gm);
        set_vol6(gm);
    }
    if (gm->opt->event.key.code == sfKeyRight) {
        set_vol5(gm);
        set_vol7(gm);
    }
}