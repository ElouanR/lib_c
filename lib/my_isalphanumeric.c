/*
** EPITECH PROJECT, 2023
** lib
** File description:
** my_isalphanumeric
*/

int my_isalphanumeric(char *str)
{
    for (int i = 0 ; str[i] ; i++) {
        if (str[i] < '0' || (str[i] > '9' && str[i] < 'A')
        || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
            return (1);
    }
    return (0);
}
