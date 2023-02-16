/*
** EPITECH PROJECT, 2023
** lib
** File description:
** my_strcat
*/

#include "lib.h"

char *my_strcat(char *dest, char const *src)
{
    int i;
    int j = my_strlen(dest);

    for (i = 0 ; src[i] != '\0' ; i++) {
        dest[i + j] = src[i];
    }
    dest[i + j] = '\0';
    return dest;
}
