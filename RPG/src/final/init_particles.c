/*
** EPITECH PROJECT, 2021
** event.c
** File description:
** event
*/

#include "../include/my_rpg.h"

void init_particles(game_t *gm)
{
    sfSprite_setTexture(gm->final->particles->sprite,
                        gm->final->particles->texture, sfTrue);
    sfSprite_setPosition(gm->final->particles->sprite, (sfVector2f){300, 500});
    sfSprite_setTexture(gm->final->particles->sprite_t,
                        gm->final->particles->texture_t, sfTrue);
    sfSprite_setPosition(gm->final->particles->sprite_t, (sfVector2f){1300, 500});
}