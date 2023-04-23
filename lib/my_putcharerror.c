/*
** EPITECH PROJECT, 2023
** lib_c
** File description:
** my_putcharerror
*/

#include "lib.h"

void my_putcharerror(char c)
{
    write(2, &c, 1);
}
