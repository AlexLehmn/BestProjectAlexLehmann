/*
** EPITECH PROJECT, 2020
** my_strlen.c
** File description:
** my_strlen.c
*/

void my_putchar(char c);

int my_strlen(char const *str)
{
    int u = 0;
    for (int i = 0; str[i] != '\0'; i++){
        u++;
    }
    return (u);
}
