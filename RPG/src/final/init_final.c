/*
** EPITECH PROJECT, 2021
** event.c
** File description:
** event
*/

#include "../include/my_rpg.h"

void init_final_character_cadre(game_t *game)
{
    sfSprite_setTexture(game->final->cadre->cadre_enemy,
                        game->final->cadre->t_cadre_enemy, sfTrue);
    sfSprite_setPosition(game->final->cadre->cadre_enemy, (sfVector2f){50, 50});
    sfSprite_setTexture(game->final->cadre->cadre_hero,
                        game->final->cadre->t_cadre_hero, sfTrue);
    sfSprite_setPosition(game->final->cadre->cadre_hero,
                        (sfVector2f){1146, 50});
    sfSprite_setTexture(game->final->cadre->inside_cadre_enemy,
                        game->final->cadre->t_inside_cadre_enemy, sfTrue);
    sfSprite_setPosition(game->final->cadre->inside_cadre_enemy,
                        (sfVector2f){140, 100});
    sfSprite_setTexture(game->final->cadre->inside_cadre_hero,
                        game->final->cadre->t_inside_cadre_hero, sfTrue);
    sfSprite_setPosition(game->final->cadre->inside_cadre_hero,
                        (sfVector2f){1250, 100});
}

void init_final_middle_cadre(game_t *game)
{
    sfSprite_setTexture(game->final->cadre->middle_cadre,
                        game->final->cadre->t_middle_cadre, sfTrue);
    sfSprite_setPosition(game->final->cadre->middle_cadre,
                        (sfVector2f){774, 50});
    sfSprite_setTexture(game->final->cadre->mimine->s_mimine,
                        game->final->cadre->mimine->t_mimine, sfTrue);
    sfSprite_setPosition(game->final->cadre->mimine->s_mimine,
                        (sfVector2f){780, 65});
    init_inside_middle_cadre(game);
}

void init_inside_middle_cadre(game_t *game)
{
    sfSprite_setTexture(game->final->cadre->cadre_attack,
                        game->final->cadre->t_cadre_attack, sfTrue);
    sfSprite_setPosition(game->final->cadre->cadre_attack,
                        (sfVector2f){830, 60});
    sfSprite_setTexture(game->final->cadre->cadre_defendre,
                        game->final->cadre->t_cadre_defendre, sfTrue);
    sfSprite_setPosition(game->final->cadre->cadre_defendre,
                        (sfVector2f){830, 150});
    sfSprite_setTexture(game->final->cadre->cadre_item,
                        game->final->cadre->t_cadre_item, sfTrue);
    sfSprite_setPosition(game->final->cadre->cadre_item,
                        (sfVector2f){830, 240});
    sfSprite_setTexture(game->final->cadre->cadre_soin,
                        game->final->cadre->t_cadre_soin, sfTrue);
    sfSprite_setPosition(game->final->cadre->cadre_soin,
                        (sfVector2f){830, 330});
}

void init_ui(game_t *game)
{
    sfSprite_setTexture(game->final->background,
                        game->final->t_background, sfTrue);
    sfSprite_setPosition(game->final->background,
                        (sfVector2f){0, 0});
    sfSprite_setTexture(game->final->b_menu->quit,
                        game->final->b_menu->but_q, sfTrue);
    sfSprite_setPosition(game->final->b_menu->quit, (sfVector2f){10, 10});
}

void init_final(game_t *game)
{
    init_ui(game);
    init_final_character_cadre(game);
    init_final_middle_cadre(game);
    init_character_jauge(game);
    init_character_name(game);
    init_character_life(game);
    init_character_img(game);
    init_text_attack(game);
    init_text_defender(game);
    init_text_heal(game);
    init_text_item(game);
    init_particles(game);
    init_win_page(game);
}