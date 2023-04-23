/*
** EPITECH PROJECT, 2023
** lib_c
** File description:
** my_readfile
*/

#include "lib.h"

char *my_readfile(char const *filepath)
{
    char *buffer;
    struct stat sb;
    int fd = open(filepath, O_RDONLY);

    if (fd == -1)
        return (NULL);
    stat(filepath, &sb);
    buffer = malloc(sizeof(char) * (sb.st_size + 1));
    if (buffer == NULL)
        return (NULL);
    read(fd, buffer, sb.st_size);
    buffer[sb.st_size] = '\0';
    close(fd);
    return (buffer);
}
