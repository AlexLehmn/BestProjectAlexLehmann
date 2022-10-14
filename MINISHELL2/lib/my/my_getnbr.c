/*
** EPITECH PROJECT, 2020
** my_getnbr.c
** File description:
** task1
*/

int my_getnbr(char *str)
{
    int nb = 0;
    int negatif = 0;
    int i = 0;

    while (str[i] == '-') {
        i++;
        negatif++;
    }
    while (str[i] != '\0' && str[i] < 58 && str[i] > 47) {
        nb = nb + (str[i] - 48);
        nb = nb * 10;
        i++;
    }
    nb = nb / 10;
    if (negatif != 0)
        return (nb * -1);
    else
        return (nb);
}