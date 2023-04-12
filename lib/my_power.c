/*
** EPITECH PROJECT, 2023
** lib
** File description:
** my_power
*/

#include "lib.h"

int my_power(int nb, int p)
{
    if (p < 0)
        return (84);
    if (p == 0)
        return (1);
    else
        return (nb * my_power(nb, p - 1));
}
