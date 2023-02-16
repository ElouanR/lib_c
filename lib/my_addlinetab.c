/*
** EPITECH PROJECT, 2023
** lib
** File description:
** my_addlinetab
*/

#include "lib.h"

char **add_line_tab(char **tab, char *str)
{
    int i = 0, j = 0;

    for (; tab[i] ; i++);
    char **new_tab = malloc(sizeof(char *) * (i + 2));

    for (; tab[j] ; j++)
        new_tab[j] = tab[j];

    new_tab[j] = str;
    new_tab[j + 1] = NULL;

    return (new_tab);
}
