/*
** EPITECH PROJECT, 2023
** lib_c
** File description:
** my_randnumber
*/

#include "lib.h"

long my_randnum(int max)
{
    struct timeval tv;

    gettimeofday(&tv, NULL);
    srand(tv.tv_sec * 1000000000 + tv.tv_usec * 1000);
    return (rand() % (max + 1));
}
