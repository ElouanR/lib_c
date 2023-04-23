/*
** EPITECH PROJECT, 2023
** lib_c
** File description:
** my_putchar
*/

#include "lib.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
