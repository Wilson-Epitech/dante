/*
** DANTE PROJECT, 2023
** dante
** File description:
** error_handling
*/

#include "../../include/my.h"

int error_handling(int ac, char **av)
{
    if (ac < 3) {
        exit(84);
    }
    int av1 = atoi(av[1]);
    int av2 = atoi(av[2]);
    int str_av1 = check_nbr(av[1]);
    int str_av2 = check_nbr(av[2]);
    if (str_av1 == 84 || str_av2 == 84) {
        exit(84);
    }
    return 0;
}
