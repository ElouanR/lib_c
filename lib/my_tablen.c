/*
** EPITECH PROJECT, 2023
** lib
** File description:
** my_tablen
*/

#include "lib.h"

int my_tablen(char **tab)
{
    int i = 0;

    for (; tab[i] ; i++);
    return (i);
}
