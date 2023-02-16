/*
** EPITECH PROJECT, 2023
** lib
** File description:
** my_putstr
*/

#include "lib.h"

void my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
}
