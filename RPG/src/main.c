/*
** EPITECH PROJECT, 2020
** graph
** File description:
** main
*/

#include "include/my_rpg.h"

void initialisation(game_t *gm)
{
    set_window(gm);
    init_menu(gm);
    init_play(gm);
    init_opt(gm);
    init_final(gm);
    init_custom(gm);
    init_story(gm);
    init_echap(gm);
    init_tuto(gm);
}

void option_h(void)
{

}

int main(int ac, char **av)
{
    game_t *game;

    if (ac != 1)
        return (84);
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h')
        option_h();
    game = struct_fill_game();
    initialisation(game);
    while (sfRenderWindow_isOpen(game->win->win)) {
            scene(game);
            sfRenderWindow_display(game->win->win);
    }
    return (0);
}