/*
** EPITECH PROJECT, 2023
** lib
** File description:
** word_array
*/

#include "lib.h"

int nbr_words(char *str, char *characteres)
{
    int nbr = 1;

    for (int i = 0; str[i]; i++) {
        if (in_characteres(str[i], characteres) == 1)
            nbr++;
        for (; in_characteres(str[i], characteres) == 1; i++);
    }
    return (nbr);
}

char *modif_str(char *str, char *c)
{
    char *temp = malloc(sizeof(char) * (my_strlen(str) + 1));
    int s = 0;
    int e = 0;
    int i = 0;

    if (!temp)
        return (NULL);
    for (; str[s] && in_characteres(str[s], c) == 1; s++);
    for (e = my_strlen(str) - 1; e > 0 && in_characteres(str[e], c) == 1; e--);
    for (i = 0; s <= e; s++, i++)
        temp[i] = str[s];
    temp[i] = '\0';
    return (temp);
}

char **init_array(char *str, char *characteres)
{
    char **array = malloc(sizeof(char *) * (nbr_words(str, characteres) + 1));

    if (!array)
        return (NULL);
    for (int m = 0; m < (nbr_words(str, characteres)); m++) {
        array[m] = malloc(sizeof(char) * (my_strlen(str) + 1));
        if (!array[m]) {
            my_freetab(array);
            return (NULL);
        }
    }
    array[nbr_words(str, characteres)] = NULL;
    return (array);
}

char **in_array(char **array, char *str, char *characteres)
{
    for (int x = 0, y = 0, n = 0, z = 0; str[x]; x++, z = 0) {
        if (in_characteres(str[x], characteres) == 0) {
            array[y][n] = str[x];
            array[y][n + 1] = '\0';
            n++;
            continue;
        }
        for (; in_characteres(str[x], characteres) == 1; x++, z++);
        (z != 0) ? x--, y++, (n = 0) : y++, (n = 0);
    }
    if (array[0][0] == '\0') {
        my_freetab(array);
        return (NULL);
    }
    free(str);
    return (array);
}

char **my_wordarray(char *str, char *characteres)
{
    char **array = NULL;
    char *temp = NULL;

    if (!str || str[0] == '\0' || characteres[0] == '\0')
        return (NULL);
    temp = modif_str(str, characteres);
    if (temp[0] == '\0')
        return (NULL);
    array = init_array(temp, characteres);
    if (!temp && !array)
        return (NULL);
    if (!array && temp) {
        free(temp);
        return (NULL);
    }
    if (!temp && array) {
        my_freetab(array);
        return (NULL);
    }
    return (in_array(array, temp, characteres));
}
