/*
** EPITECH PROJECT, 2023
** lib
** File description:
** my_strcpy
*/

#include "lib.h"

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while ('\0' != src[i]) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
