/*
** EPITECH PROJECT, 2023
** PROJECT_BUILDER
** File description:
** lib
*/

#ifndef LIB_H_
    #define LIB_H_

    #include <stdio.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>

    int my_getnbr(char const *str);
    char *my_nbrstr(int nb);
    int my_power(int nb, int p);
    void my_putchar(char c);
    void my_puterror(char const *str);
    void my_putnbr(long long nb);
    void my_putstr(char const *str);
    char *my_readfile(char const *filepath);
    char *my_revstr(char *str);
    int my_strcmp(char const *s1, char const *s2);
    int my_strisalpha(char *str);
    int my_strlen(char const *str);
    char **my_wordarray(char *str);
    char *my_strcat(char *dest, char const *src);
    char *my_strcpy(char *dest, char const *src);
    int my_isalphanumeric(char *str);
    int my_strncmp(char *s1, char *s2, int n);
    char **add_line_tab(char **tab, char *str);
    int my_tablen(char **tab);
    char **my_removelinetab(char **tab, int line);

#endif /* !LIB_H_ */
