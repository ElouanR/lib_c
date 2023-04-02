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
    #include <stdarg.h>
    #include <sys/time.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>

    int my_getnbr(char const *str);
    char *my_nbrstr(int nb);
    int my_power(int nb, int p);
    void my_putchar(char c);
    void my_putstrerror(char const *str);
    void my_putnbr(long long nb);
    void my_putstr(char const *str);
    char *my_readfile(char const *filepath);
    char *my_revstr(char *str);
    int my_strcmp(char const *s1, char const *s2);
    int my_strisalpha(char *str);
    int my_strlen(char const *str);
    char **my_wordarray(char *str, char *characteres);
    char *my_strcat(char *dest, char const *src);
    char *my_strcpy(char *dest, char const *src);
    int my_isalphanumeric(char *str);
    int my_strncmp(char *s1, char *s2, int n);
    char **my_addlinetab(char **tab, char *str);
    int my_tablen(char **tab);
    char **my_removelinetab(char **tab, int line);
    char *my_getenv(char **my_env, char *str);
    int my_searchintab(char **tab, char *str);
    long my_randnum(int max);
    void my_printf(const char *format, ...);
    void my_putcharerror(char c);
    void my_putnbrerror(long long nb);
    void my_printferror(const char *format, ...);
    void my_freetab(char **tab);
    char **my_realloctab(char **tab, size_t new_size);
    char *my_reallocstr(char *str, size_t new_size);
    char *my_strdup(char const *src);
    int in_characteres(char c, char *characteres);
    int my_isnum(char *str);

#endif /* !LIB_H_ */
