/*
** DANTE PROJECT, 2023
** dante
** File description:
** gen_map_wall
*/

#include "../../include/my.h"

int gen_map_wall(char **av)
{
    int length_map = atoi(av[1]);
    int width_map = atoi(av[2]);
    int size_map = (length_map * width_map) + width_map;
    char *buffer = malloc(sizeof(char) * (size_map + 1));
    int i = 0;
    for (int x = 0; x != width_map; x++) {
        for (int y = 0; y != length_map; y++) {
            buffer[i] = 'x';
            i += 1;
        }
        buffer[i] = '\n';
        i += 1;
    }
    buffer[i] = '\0';
    return 0;
}
