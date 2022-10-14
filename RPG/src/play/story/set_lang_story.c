/*
** EPITECH PROJECT, 2021
** lang
** File description:
** lang
*/

#include "../../include/my_rpg.h"

void set_lang_fr_s(game_t *gm)
{
    if (gm->lang->f == 1) {
        sfText_setString(gm->t_story->text_story, "Apres des annees \
de paix dans la galaxy, \n\
des evenements INURIEN ont fait echo...\n\
Tous ces evenements sont orchestres par le groupe\nGORTAX.\
Je vous envoie donc dans la galaxy\nd andromede ou se trouve\
l'un de leur commandant. \nVous devez donc l'eliminer pour\
ramener la paix dans\nla galaxy, vous avez carte blanche. \n\
                                     \
                                      Fin de transmission.");
    sfText_setString(gm->b_story->skip, "PASSER");
    sfText_setCharacterSize(gm->b_story->skip, 50);
    sfText_setPosition(gm->b_story->skip, (sfVector2f){1575, 950});
    }
}

void set_lang_en_s(game_t *gm)
{
    if (gm->lang->f == 2) {
        sfText_setString(gm->t_story->text_story, "After years \
of peace in the galaxy, \n\
INURIEN events echoed... \n\
All these events are orchestrated by the group\nGORTAX.\
So I send you to the galaxy \nd Andromeda where is\
one of their commander. \nYou must therefore eliminate it to\
bring peace to\nthe galaxy, you have carte blanche. \n\
                                     \
                                      End of transmission. ");
    sfText_setString(gm->b_story->skip, "SKIP");
    sfText_setCharacterSize(gm->b_story->skip, 70);
    sfText_setPosition(gm->b_story->skip, (sfVector2f){1600, 940});
    }
}

void set_lang_es_s(game_t *gm)
{
    if (gm->lang->f == 3) {
        sfText_setString(gm->t_story->text_story, "Despues de anos \
paz en la galaxia, \n\
Los eventos de INURIEN se hicieron eco... \n\
Todos estos eventos son orquestados por el grupo\nGORTAX. \
Asi que te envio a la galaxia \nd Andromeda donde esta\
uno de sus comandantes. \nPor lo tanto, debe eliminarlo para\
traer la paz a\nLa galaxia, tiene carta blanca. \n\
                                     \
                                      Fin de transmision. ");
    sfText_setString(gm->b_story->skip, "GASTAR");
    sfText_setCharacterSize(gm->b_story->skip, 50);
    sfText_setPosition(gm->b_story->skip, (sfVector2f){1575, 950});
    }
}

void gestion_lang_story(game_t *gm)
{
    set_lang_en_s(gm);
    set_lang_es_s(gm);
    set_lang_fr_s(gm);
}