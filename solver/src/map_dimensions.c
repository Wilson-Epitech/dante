/*
** DANTE PROJECT, 2023
** dante
** File description:
** map_dimensions
*/

#include "../../include/solver.h"

void map_dimensions(char *buff, MapSize *mapsize)
{
    int width = 0;
    int height = 0;
    while (buff[width] != '\n') {
        width++;
    }
    mapsize->width = width;
    for (int i = 0; buff[i] != '\0'; i++) {
        if (buff[i] == '\n') {
            height++;
        }
    }
    mapsize->height = height + 1;
}
