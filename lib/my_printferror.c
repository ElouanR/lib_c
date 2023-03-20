/*
** EPITECH PROJECT, 2023
** lib_c
** File description:
** my_printferror
*/

#include "lib.h"

void fiferror(int i, va_list *param, const char *format)
{
    if (format[i + 1] == 'd' || format[i + 1] == 'i')
        my_putnbrerror(va_arg(*param, int));

    if (format[i + 1] == 's')
        my_putstrerror(va_arg(*param, char *));

    if (format[i + 1] == 'c')
        my_putcharerror(va_arg(*param, int));

    if (format[i + 1] == '%')
        my_putcharerror('%');
}

void my_printferror(const char *format, ...)
{
    va_list param;
    va_start(param, format);
    int i = 0;

    while (i != my_strlen(format)) {
        if (format[i] != '%') {
            my_putcharerror(format[i]);
            i += 1;
        } else {
            fiferror(i, &param, format);
            i += 2;
        }
    }
    va_end(param);
}
