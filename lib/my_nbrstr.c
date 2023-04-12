/*
** EPITECH PROJECT, 2023
** lib
** File description:
** my_nbrstr
*/

#include "lib.h"

int len_nbr(int nbr)
{
    int i = 0;

    if (nbr < 0)
        nbr *= -1;
    for (; nbr > 0; i++)
        nbr /= 10;
    return (i);
}

char *my_nbrstr(int nb)
{
    int i = len_nbr(nb), x = 0, power = 0, cop = 0;
    char *result = malloc(sizeof(char) * (i + 1));
    if (nb == 0)
        return ("0");
    if (nb < 0) {
        result[x] = '-';
        x++;
        nb *= -1;
        power--;
        i++;
    }
    cop = nb;
    power += i;
    for (; x < i ; x++) {
        result[x] = (nb % my_power(10, power))
        / my_power(10, power - 1) + '0';
        power--;
    }
    result[x] = '\0';
    return (result);
}
