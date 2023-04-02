/*
** EPITECH PROJECT, 2023
** lib_c
** File description:
** my_freetab
*/

#include "lib.h"

void my_freetab(char **tab)
{
    for (int i = 0; tab[i]; i++)
        free(tab[i]);
    free(tab);
}
