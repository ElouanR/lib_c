/*
** EPITECH PROJECT, 2023
** lib
** File description:
** my_getnbr
*/

int my_getnbr(char const *str)
{
    int nb = 0;

    for (int i = 0 ; str[i] >= '0' && str[i] <= '9'; i++) {
        nb = nb * 10 + (str[i] - '0');
    }
    return (nb);
}
