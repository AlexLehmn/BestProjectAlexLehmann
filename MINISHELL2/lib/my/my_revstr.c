/*
** EPITECH PROJECT, 2020
** my_revstr.c
** File description:
** my_revstr
*/

int  my_strlen(char *str)
{
    int i;
    int u;

    u = 0;
    i = 0;
    while (str[i] != '\0'){
        i++;
        u++;
    }
    return (u);
}

char *my_revstr(char *str)
{
    char begin;
    char end;
    char size;
    int j = 0;

    my_strlen(str);
    size = my_strlen(str);
    while (size / 2 != j){
        begin = str[j];
        end = str[size - j - 1];
        str[j] = str[size - j - 1];
        str[size - j - 1] = begin;
        j++;
    }
    return (str);
}
