/*
** DANTE PROJECT, 2023
** dante
** File description:
** check_generator
*/

#include "../../include/my.h"

int check_generator_type(int ac, char **av)
{
    char *perfect_map = "[perfect]";
    if (ac == 4 && strcmp(perfect_map, av[3]) == 0) {
        return 1;
    }
    if (ac == 3) {
        return 2;
    }
}
