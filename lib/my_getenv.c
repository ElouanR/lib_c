/*
** EPITECH PROJECT, 2023
** lib
** File description:
** my_getenv
*/

char *my_getenv(char **my_env, char *str)
{
    int i = search_env(my_env, str);
    char *temp = malloc(sizeof(char) * my_strlen(my_env[i]) + 1);
    int j = 0;

    for (int k = my_strlen(str) + 1 ; my_env[i][k] != '\0' ; k++) {
        temp[j] = my_env[i][k];
        j++;
    }
    temp[j] = '\0';
    return (temp);
}