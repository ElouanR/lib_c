/*
** EPITECH PROJECT, 2023
** lib_c
** File description:
** my_incharacteres
*/

#include "lib.h"

int in_characteres(char c, char *characteres)
{
    for (int i = 0; characteres[i]; i++) {
        if (c == characteres[i])
            return (1);
    }
    return (0);
}
