/*
** EPITECH PROJECT, 2023
** lib
** File description:
** my_strlen
*/

#include "lib.h"

int my_strlen(char const *str)
{
    int i = 0;
    while (str[i]) {
        i++;
    }
    return (i);
}
