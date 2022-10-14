/*
** EPITECH PROJECT, 2020
** graph
** File description:
** main
*/

#include "../../include/my_rpg.h"

void set_text_home_play(struct game *gm)
{
    sfText_setFont(gm->menu->t_b_menu->play, gm->lang->FR);
    sfText_setCharacterSize(gm->menu->t_b_menu->play, 40);
    sfText_setPosition(gm->menu->t_b_menu->play, (sfVector2f){865, 415});
    sfText_setColor(gm->menu->t_b_menu->play, sfColor_fromRGB(255, 255, 255));
}

void set_text_home_option(struct game *gm)
{
    sfText_setFont(gm->menu->t_b_menu->option, gm->lang->FR);
    sfText_setCharacterSize(gm->menu->t_b_menu->option, 40);
    sfText_setPosition(gm->menu->t_b_menu->option, (sfVector2f){850, 568});
    sfText_setColor(gm->menu->t_b_menu->option, sfColor_fromRGB(255, 255, 255));
}

void set_text_home_tuto(struct game *gm)
{
    sfText_setFont(gm->menu->t_b_menu->tuto, gm->lang->FR);
    sfText_setCharacterSize(gm->menu->t_b_menu->tuto, 40);
    sfText_setPosition(gm->menu->t_b_menu->tuto, (sfVector2f){835, 718});
    sfText_setColor(gm->menu->t_b_menu->tuto, sfColor_fromRGB(255, 255, 255));
}

void set_text_home_quit(struct game *gm)
{
    sfText_setFont(gm->menu->t_b_menu->quit, gm->lang->FR);
    sfText_setCharacterSize(gm->menu->t_b_menu->quit, 40);
    sfText_setPosition(gm->menu->t_b_menu->quit, (sfVector2f){850, 868});
    sfText_setColor(gm->menu->t_b_menu->quit, sfColor_fromRGB(255, 255, 255));
}

void set_text_home_title(struct game *gm)
{
    sfText_setFont(gm->title->title1, gm->title->police);
    sfText_setFont(gm->title->title2, gm->title->police);
    sfText_setString(gm->title->title1, "MY RPG");
    sfText_setString(gm->title->title2, "SPACE");
    sfText_setPosition(gm->title->title1, (sfVector2f){700, 50});
    sfText_setPosition(gm->title->title2, (sfVector2f){730, 140});
    sfText_setCharacterSize(gm->title->title1, 100);
    sfText_setCharacterSize(gm->title->title2, 100);
    sfText_setOutlineColor(gm->title->title1, sfBlack);
    sfText_setOutlineColor(gm->title->title2, sfBlack);
}