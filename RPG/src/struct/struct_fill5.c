/*
** EPITECH PROJECT, 2021
** struct
** File description:
** struct
*/

#include "../include/my_rpg.h"

story_t *story1(void)
{
    story_t *story = malloc(sizeof(story_t));
    story->bg_story = sfSprite_create();
    story->t_bg_story = sfTexture_createFromFile("image/bg_story.png", NULL);
    story->woman = sfSprite_create();
    story->t_woman = sfTexture_createFromFile("image/woman.png", NULL);
    story->bulle_story = sfSprite_create();
    story->t_bule_story = sfTexture_createFromFile("image/bulle_story.png",
    NULL);
    return (story);
}

text_story_t *t_story1(void)
{
    text_story_t *t_story = malloc(sizeof(text_story_t));
    t_story->text_story = sfText_create();
    t_story->font_story = sfFont_createFromFile("font/story.otf");
    return (t_story);
}

b_story_t *b_story1(void)
{
    b_story_t *b_story = malloc(sizeof(b_story_t));
    b_story->b_retrn = sfSprite_create();
    b_story->b_skip = sfSprite_create();
    b_story->skip = sfText_create();
    return (b_story);
}

echap_t *echap1(void)
{
    echap_t *echap = malloc(sizeof(echap_t));
    echap->noir = sfRectangleShape_create();
    echap->trans = sfColor_fromRGBA(0, 0, 0, 150);
    echap->b_resume = sfSprite_create();
    echap->b_quit = sfSprite_create();
    echap->pause_echap = sfText_create();
    echap->quit_echap = sfText_create();
    echap->resume_echap = sfText_create();
    echap->b_menu = sfSprite_create();
    echap->rturn_menu = sfText_create();
    echap->i = 0;

    return (echap);
}