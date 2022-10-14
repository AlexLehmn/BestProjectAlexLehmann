/*
** EPITECH PROJECT, 2020
** my_atoi.c
** File description:
** my_atoi
*/

int my_atoi(char *str)
{
    int nb = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            nb = nb *10;
            nb = nb + str[i] - '0';
        }
    }
    return (nb);
}