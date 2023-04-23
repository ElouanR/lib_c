/*
** EPITECH PROJECT, 2023
** lib_c
** File description:
** my_strlen
*/

#include "lib.h"

int my_strlen(char const *str)
{
    int i = 0;

    for (; str[i]; i++);
    return (i);
}
