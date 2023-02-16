/*
** EPITECH PROJECT, 2023
** lib
** File description:
** my_searchenv
*/

#include "lib.h"

int search_env(char **my_env, char *str)
{
    int i = 0;
    for (; my_env[i] ; i++) {
        if (my_strncmp(my_env[i], str, my_strlen(str)) == 0)
            return (i);
    }
    return (-1);
}