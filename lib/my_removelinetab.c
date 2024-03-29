/*
** EPITECH PROJECT, 2023
** lib_c
** File description:
** my_removelinetab
*/

#include "lib.h"

char **my_rmlinetab(char **tab, int line)
{
    int i = 0;
    int j = 0;
    char **new_tab = malloc(sizeof(char *) * (my_tablen(tab) + 1));

    if (!new_tab)
        return (NULL);
    for (; tab[i] ; i++) {
        if (i != line) {
            new_tab[j] = my_strdup(tab[i]);
            j++;
        }
    }
    new_tab[j] = NULL;
    my_freetab(tab);
    return (new_tab);
}
