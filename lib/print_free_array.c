/*
** DANTE PROJECT, 2022
** main.c
** File description:
** main
*/

#include <stdlib.h>
#include "../include/my.h"

void print_array(char **array)
{
    for (int x = 0; array[x] != NULL; x++) {
        write(1, array[x], my_strlen(array[x]));
        putchar('\n');
    }
}

void free_array(char **array)
{
    for (int x = 0; array[x] != NULL; x++) {
        free(array[x]);
    }
}
