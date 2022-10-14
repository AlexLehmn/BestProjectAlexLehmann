/*
** EPITECH PROJECT, 2021
** f_lang
** File description:
** lang
*/

#include "../include/my_rpg.h"

void lang_fr(game_t *gm)
{
    sfText_setString(gm->lang->t_EN, "Anglais");
    sfText_setString(gm->lang->t_FR, "Francais");
    sfText_setString(gm->lang->t_ES, "Espagnol");
    sfText_setString(gm->text->t_option, "Parametres");
    sfText_setPosition(gm->text->t_option, (sfVector2f){720, 40});
    sfText_setString(gm->text->t_lang, "Languages");
    sfText_setPosition(gm->text->t_lang, (sfVector2f){740, 175});
    sfText_setString(gm->text->t_music, "Musique");
    sfText_setPosition(gm->text->t_music, (sfVector2f){750, 550});
}

void lang_en(game_t *gm)
{
    sfText_setString(gm->lang->t_EN, "English");
    sfText_setString(gm->lang->t_FR, "French");
    sfText_setString(gm->lang->t_ES, "Spanish");
    sfText_setString(gm->text->t_option, "Settings");
    sfText_setPosition(gm->text->t_option, (sfVector2f){780, 40});
    sfText_setString(gm->text->t_lang, "Languages");
    sfText_setPosition(gm->text->t_lang, (sfVector2f){740, 175});
    sfText_setString(gm->text->t_music, "Music");
}

void lang_es(game_t *gm)
{
    sfText_setString(gm->lang->t_EN, "Ingles");
    sfText_setString(gm->lang->t_FR, "Frances");
    sfText_setString(gm->lang->t_ES, "Espanol");
    sfText_setString(gm->text->t_option, "Configuraciones");
    sfText_setPosition(gm->text->t_option, (sfVector2f){620, 40});
    sfText_setString(gm->text->t_lang, "Idiomas");
    sfText_setPosition(gm->text->t_lang, (sfVector2f){800, 175});
    sfText_setString(gm->text->t_music, "Musica");
}

void retr_yellow(game_t *gm)
{
    if (gm->opt->mous_p.x >= 10
    && gm->opt->mous_p.x <= 120
    && gm->opt->mous_p.y >= 10
    && gm->opt->mous_p.y <= 120) {
        sfRenderWindow_drawSprite(gm->win->win, gm->lang2->exit_yellow, NULL);
    } else
        sfRenderWindow_drawSprite(gm->win->win, gm->opt->exit, NULL);
}