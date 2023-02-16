/*
** EPITECH PROJECT, 2023
** lib
** File description:
** word_array
*/

#include "./lib.h"
#include <stdlib.h>

int get_words(char *str)
{
    int words = 0;

    for (int i = 0 ; str[i] ; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            words++;
        }
        for (; str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ; i++);
    }
    if (str[my_strlen(str) - 1] == ' ' || str[my_strlen(str) - 1] == '\n'
    || str[my_strlen(str) - 1] == '\t')
        words--;
    return (words);
}

char **my_wordarray(char *str)
{
    int i = 0, k = 0, m = 0;
    int nb_words = get_words(str);
    char **array = malloc(sizeof(char *) * (nb_words + 2));

    for (; m < nb_words + 1 ; m++) {
        array[m] = malloc(sizeof(char) * (my_strlen(str) + 1));
        for (k = 0 ; str[i] != ' ' && str[i] != '\n'
        && str[i] != '\t' && str[i]; i++, k++)
            array[m][k] = str[i];
        array[m][k] = '\0';
        for (; str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ; i++);
    }
    array[m] = NULL;
    return (array);
}
