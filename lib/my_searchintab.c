/*
** EPITECH PROJECT, 2023
** lib_c
** File description:
** my_searchenv
*/

#include "lib.h"

int my_searchintab(char **tab, char *str)
{
    int i = 0;

    for (; tab[i]; i++) {
        if (my_strncmp(tab[i], str, my_strlen(str)) == 0)
            return (i);
    }
    return (-1);
}
