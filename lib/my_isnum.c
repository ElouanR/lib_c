/*
** EPITECH PROJECT, 2023
** lib_c
** File description:
** my_isnum
*/

#include "lib.h"

int my_isnum(char *str)
{
    for (int i = 0; str[i]; i++) {
        if ((str[i] < '0' || str[i] > '9') &&
        str[i] != '.' && str[i] != '-' && str[i] != '\n') {
            return (0);
        }
    }
    return (1);
}
