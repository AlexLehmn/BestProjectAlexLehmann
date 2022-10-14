/*
** EPITECH PROJECT, 2021
** event.c
** File description:
** event
*/

#include "../include/my_rpg.h"

void init_lose_page(game_t *game)
{
    sfSprite_setTexture(game->final->lose_page->background,
                        game->final->lose_page->t_background, sfTrue);
    sfSprite_setPosition(game->final->lose_page->background, (sfVector2f){0, 0});
    sfSprite_setTexture(game->final->lose_page->button,
                        game->final->lose_page->t_button, sfTrue);
    sfSprite_setPosition(game->final->lose_page->button, (sfVector2f){10, 10});
}

void init_win_page(game_t *game)
{
    sfSprite_setTexture(game->final->win_page->background,
                        game->final->win_page->t_background, sfTrue);
    sfSprite_setPosition(game->final->win_page->background, (sfVector2f){0, 0});
    sfSprite_setTexture(game->final->win_page->button,
                        game->final->win_page->t_button, sfTrue);
    sfSprite_setPosition(game->final->win_page->button, (sfVector2f){10, 10});
    init_lose_page(game);
}