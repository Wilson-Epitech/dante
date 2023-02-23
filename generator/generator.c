/*
** DANTE PROJECT, 2023
** dante
** File description:
** generator
*/

#include "../include/my.h"

int check_generator_type(int ac, char **av)
{
    char *perfect_map = "perfect";
    if (ac == 4 && strcmp(perfect_map, av[3]) == 0) {
        return 1;
    }
    if (ac == 3) {
        return 2;
    }
}

int main(int ac, char **av)
{
    int generator_type = 0;

    error_handling(ac, av);
    generator_type = check_generator_type(ac, av);
    return 0;
}
