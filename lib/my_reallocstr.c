/*
** EPITECH PROJECT, 2023
** lib_c
** File description:
** my_reallocstr
*/

#include "lib.h"

char *my_reallocstr(char *str, size_t new_size)
{
    char *new_str = malloc(sizeof(char) * (new_size + 1));
    size_t size = my_strlen(str);
    size_t i;

    for (i = 0; i < size; i++)
        new_str[i] = str[i];
    for (i = size; i < new_size; i++)
        new_str[i] = '\0';
    new_str[new_size] = '\0';
    free(str);
    return (new_str);
}
