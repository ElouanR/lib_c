/*
** EPITECH PROJECT, 2023
** lib
** File description:
** my_strisalpha
*/

#include "lib.h"

int my_strisalpha(char *str)
{
    int i = 0;
    int j = 0;

    while (str[i] != '\0') {
        if ((str[i] >= 'a' && str[i] <= 'z') ||
        (str[i] >= 'A' && str[i] <= 'Z')) {
            j++;
        }
        i++;
    }
    if ((my_strlen(str)) != j)
        return (1);
    return (0);
}
