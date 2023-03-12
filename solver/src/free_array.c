/*
** DANTE PROJECT, 2023
** dante
** File description:
** free_array
*/

#include "../../include/solver.h"

int free_array_solver(int **array, MapSize *mapsize)
{
    for (int i = 0; i < mapsize->height; i++) {
        free(array[i]);
    }
    free(array);
    return 0;
}
