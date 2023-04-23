/*
** EPITECH PROJECT, 2023
** lib_c
** File description:
** my_putnbr
*/

#include "lib.h"

void my_putnbr(long long nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb / 10)
        my_putnbr(nb / 10);
    my_putchar(nb % 10 + '0');
}
