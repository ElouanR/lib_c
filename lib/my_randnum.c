/*
** EPITECH PROJECT, 2023
** B-CPE-200-LIL-2-1-dante-gianni.henriques
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
