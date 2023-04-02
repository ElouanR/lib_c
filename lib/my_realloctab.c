/*
** EPITECH PROJECT, 2023
** lib_c
** File description:
** my_realloctab
*/

#include "lib.h"

char **my_realloctab(char **tab, size_t new_size)
{
    char **new_tab = malloc(sizeof(char *) * (new_size + 1));
    size_t size = my_tablen(tab);
    size_t i;

    for (i = 0; i < size; i++)
        new_tab[i] = tab[i];
    for (i = size; i < new_size; i++)
        new_tab[i] = NULL;
    new_tab[new_size] = NULL;
    free(tab);
    return (new_tab);
}
