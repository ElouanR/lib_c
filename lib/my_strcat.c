/*
** EPITECH PROJECT, 2023
** lib
** File description:
** my_strcat
*/

#include "lib.h"

char *my_strcat(char *dest, char const *src)
{
    int l = 0;
    char *str = malloc(sizeof(char) * (my_strlen(dest) + my_strlen(src) + 1));

    for (int i = 0; dest[i]; i++, l++)
        str[l] = dest[i];
    for (int i = 0; src[i]; i++, l++)
        str[l] = src[i];
    str[l] = '\0';
    return (str);
}
