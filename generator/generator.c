/*
** DANTE PROJECT, 2023
** dante
** File description:
** generator
*/

#include "../include/my.h"

int main(int ac, char **av)
{
    error_handling(ac, av);
    int generator_type = check_generator_type(ac, av);
    if (generator_type == 1) {
        gen_map_wall(av);
    }
    if (generator_type == 2) {
        gen_map_wall(av);
    }
    return 0;
}
