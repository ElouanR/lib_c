/*
** EPITECH PROJECT, 2023
** lib_c
** File description:
** my_strcpy
*/

#include "lib.h"

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    for (; src[i]; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}
