/*
** EPITECH PROJECT, 2023
** lib_c
** File description:
** my_getenv
*/

#include "lib.h"

char *my_getenv(char **my_env, char *str)
{
    int j = 0;
    int i = my_searchintab(my_env, str);
    char *temp = malloc(sizeof(char) * my_strlen(my_env[i]) + 1);

    if (i == -1) {
        free(temp);
        return (NULL);
    }
    for (int k = my_strlen(str) + 1 ; my_env[i][k] != '\0' ; k++, j++)
        temp[j] = my_env[i][k];
    temp[j] = '\0';
    return (temp);
}
