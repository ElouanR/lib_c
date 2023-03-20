/*
** EPITECH PROJECT, 2023
** lib_c
** File description:
** my_printf
*/

#include "lib.h"

void fif(int i, va_list *param, const char *format)
{
    if (format[i + 1] == 'd' || format[i + 1] == 'i')
        my_putnbr(va_arg(*param, int));

    if (format[i + 1] == 's')
        my_putstr(va_arg(*param, char *));

    if (format[i + 1] == 'c')
        my_putchar(va_arg(*param, int));

    if (format[i + 1] == '%')
        my_putchar('%');
}

void my_printf(const char *format, ...)
{
    va_list param;
    va_start(param, format);
    int i = 0;

    while (i != my_strlen(format)) {
        if (format[i] != '%') {
            my_putchar(format[i]);
            i += 1;
        } else {
            fif(i, &param, format);
            i += 2;
        }
    }
    va_end(param);
}
