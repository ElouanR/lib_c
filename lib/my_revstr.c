/*
** EPITECH PROJECT, 2023
** lib
** File description:
** my_revstr
*/

#include "lib.h"

char *my_revstr(char *str)
{
    int total = my_strlen(str);

    for (int start = 0 ; start < total / 2 ; start++) {
        char l = str[start];
        str[start] = str[total - start - 1];
        str[total - start - 1] = l;
    }
    return (str);
}
