/*
** EPITECH PROJECT, 2023
** lib
** File description:
** word_array
*/

#include "./lib.h"

int get_words(char *str)
{
    int nbr = 0;

    for (int i = 0 ; str[i] ; i++) {
        if (str[i] == ' ') {
            nbr++;
        }
    }
    nbr++;

    return (nbr);
}

char *modif_str_two(char *str)
{
    char *temp = malloc(sizeof(char) * (my_strlen(str) + 1));
    int s = 0;
    int e = 0;
    int i = 0;

    if (str == NULL || temp == NULL)
        return (NULL);
    for (;str[s] && (str[s] == ' ' || str[s] == '\n' || str[s] == '\t'); s++);
    for (e = my_strlen(str) - 1 ; e > 0 && (str[e] == ' '
    || str[e] == '\n' || str[e] == '\t') ; e--);
    for (i = 0; s <= e; s++, i++)
        temp[i] = str[s];
    temp[i] = '\0';

    return (temp);
}

char *modif_str(char *str)
{
    char *temp = malloc(sizeof(char) * (my_strlen(str) + 1));
    int i = 0;
    int x = 0;

    str = modif_str_two(str);
    if (temp == NULL || str == NULL)
        return (NULL);
    for (int x = 0; str[x]; x++) {
        int z = 0;
        if (str[x] != ' ' && str[x] != '\n' && str[x] != '\t')
            temp[i++] = str[x];
        else
            temp[i++] = ' ';
        for (; str[x] == ' ' || str[x] == '\n' || str[x] == '\t'; x++, z++);
        (z != 0) ? x-- : 0;
    }
    temp[i] = '\0';
    free(str);
    return (temp);
}

char **my_wordarray(char *str)
{
    int x = 0, t = 0;
    char *temp = modif_str(str);
    char **array = malloc(sizeof(char *) * (get_words(temp) + 1));

    if (temp == NULL || array == NULL)
        return (NULL);
    for (; x < get_words(temp) ; x++) {
        array[x] = malloc(sizeof(char) * (my_strlen(temp) + 1));
        int a = 0;
        for (; temp[t] != ' ' && temp[t] != '\n'
        && temp[t] != '\t' && temp[t] ; t++, a++)
            array[x][a] = temp[t];
        array[x][a] = '\0';
        t++;
    }
    array[x] = NULL;
    free(temp);
    return (array);
}
