/*
** EPITECH PROJECT, 2023
** lib
** File description:
** my_removelinetab
*/

#include "lib.h"

char **my_removelinetab(char **tab, int line)
{
    int i = 0;
    int j = 0;
    char **new_tab = malloc(sizeof(char *) * (my_tablen(tab) + 1));
    for (; tab[i] ; i++) {
        if (i != line) {
            new_tab[j] = malloc(sizeof(char) * (my_strlen(tab[i]) + 1));
            new_tab[j] = tab[i];
            j++;
        }
    }
    new_tab[j] = NULL;
    return (new_tab);
}
