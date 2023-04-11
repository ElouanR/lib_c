/*
** EPITECH PROJECT, 2023
** lib_c
** File description:
** my_isalpha
*/

#include "lib.h"

int my_isalpha(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 'A' || str[i] > 'Z' && str[i] < 'a' || str[i] > 'z')
            return (0);
    }
    return (1);
}
