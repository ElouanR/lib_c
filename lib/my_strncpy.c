/*
** EPITECH PROJECT, 2023
** lib_c
** File description:
** my_strncpy
*/

#include "lib.h"

char *my_strncpy(char *dest, char *src, int n)
{
    int i = 0;

    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}
