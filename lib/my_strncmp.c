/*
** EPITECH PROJECT, 2023
** lib_c
** File description:
** my_strncmp
*/

#include "lib.h"

int my_strncmp(char *s1, char *s2, int n)
{
    for (int i = 0; i < n; i++) {
        if (s1[i] != s2[i])
            return (1);
    }
    return (0);
}
