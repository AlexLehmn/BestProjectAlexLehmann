/*
** EPITECH PROJECT, 2021
** event.c
** File description:
** event
*/

#include "../include/my_rpg.h"

void init_character_jauge(game_t *game)
{
    sfSprite_setTexture(game->final->character->boss->jauge_life_boss,
                        game->final->character->boss->t_jauge_life_boss,
                        sfTrue);
    sfSprite_setPosition(game->final->character->boss->jauge_life_boss,
                        (sfVector2f){150, 220});
    sfSprite_setTexture(game->final->character->hero->jauge_life_hero,
                        game->final->character->hero->t_jauge_life_hero,
                        sfTrue);
    sfSprite_setPosition(game->final->character->hero->jauge_life_hero,
                        (sfVector2f){1325, 220});
}

void init_character_img(game_t *game)
{
    sfSprite_setTexture(game->final->character->boss->img_boss,
                        game->final->character->boss->t_img_boss,
                        sfTrue);
    sfSprite_setPosition(game->final->character->boss->img_boss,
                        (sfVector2f){100, 350});
    sfSprite_setTexture(game->final->character->hero->img_hero,
                        game->final->character->hero->t_img_hero,
                        sfTrue);
    sfSprite_setPosition(game->final->character->hero->img_hero,
                        (sfVector2f){1500, 750});
}

void init_character_name(struct game *gm)
{
    sfText_setFont(gm->final->character->boss->boss_name, gm->lang->FR);
    sfText_setString(gm->final->character->boss->boss_name, "Boss");
    sfText_setCharacterSize(gm->final->character->boss->boss_name, 80);
    sfText_setPosition(gm->final->character->boss->boss_name,
                        (sfVector2f){270, 82});
    sfText_setColor(gm->final->character->boss->boss_name,
                    sfColor_fromRGB(255, 255, 255));
    sfText_setFont(gm->final->character->hero->hero_name, gm->lang->FR);
    sfText_setString(gm->final->character->hero->hero_name, "Hero");
    sfText_setCharacterSize(gm->final->character->hero->hero_name, 80);
    sfText_setPosition(gm->final->character->hero->hero_name,
                        (sfVector2f){1380, 82});
    sfText_setColor(gm->final->character->hero->hero_name,
                    sfColor_fromRGB(255, 255, 255));
}

void init_character_life(struct game *gm)
{
    sfText_setFont(gm->final->character->boss->boss_life, gm->lang->FR);
    sfText_setString(gm->final->character->boss->boss_life,
                    my_itoa(gm->final->character->boss->life));
    sfText_setCharacterSize(gm->final->character->boss->boss_life, 40);
    sfText_setPosition(gm->final->character->boss->boss_life,
                        (sfVector2f){150, 230});
    sfText_setColor(gm->final->character->boss->boss_life,
                    sfColor_fromRGB(255, 255, 255));
    sfText_setFont(gm->final->character->hero->hero_life, gm->lang->FR);
    sfText_setString(gm->final->character->hero->hero_life,
                    my_itoa(gm->final->character->hero->life));
    sfText_setCharacterSize(gm->final->character->hero->hero_life, 40);
    sfText_setPosition(gm->final->character->hero->hero_life,
                        (sfVector2f){1660, 230});
    sfText_setColor(gm->final->character->hero->hero_life,
                    sfColor_fromRGB(255, 255, 255));
}