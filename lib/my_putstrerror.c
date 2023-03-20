/*
** EPITECH PROJECT, 2023
** lib
** File description:
** my_puterror
*/

#include "lib.h"

void my_putstrerror(char const *str)
{
    write(2, str, my_strlen(str));
}
