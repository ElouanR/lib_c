/*
** EPITECH PROJECT, 2023
** lib_c
** File description:
** my_printtab
*/

#include "lib.h"

void my_printtab(char **tab)
{
    for (int i = 0; tab[i]; i++)
        my_printf("%s\n", tab[i]);
}
