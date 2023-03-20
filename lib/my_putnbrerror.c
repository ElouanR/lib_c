/*
** EPITECH PROJECT, 2023
** lib_c
** File description:
** my_putnbrerror
*/

#include "lib.h"

void my_putnbrerror(long long nb)
{
    if (nb < 0) {
        my_putcharerror('-');
        nb = -nb;
    }
    if (nb / 10) {
        my_putnbrerror(nb / 10);
    }
    my_putcharerror(nb % 10 + '0');
}
