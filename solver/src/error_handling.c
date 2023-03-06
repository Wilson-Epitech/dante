/*
** DANTE PROJECT, 2023
** dante
** File description:
** error_handling
*/

#include "../../include/my.h"
#include "../../include/solver.h"

int check_file_type(int ac, char **av)
{
    int i = 0;
    char *str = av[1];
    while (str[i] != '.') {
        i++;
    }
    if (my_strcmp_custom(str, ".txt", i) != 0) {
        exit(84);
    }
    return 0;
}

void error_handling(int ac, char **av, char *buff)
{
    struct stat sb;
    if (ac != 2) {
        printf("error : Invalid nb args\n");
        exit(84);
    }
    if (stat(av[1], &sb) != 0 || !S_ISREG(sb.st_mode)) {
        printf("Error: %s is not a valid file\n", av[1]);
        exit(84);
    }
    check_file_type(ac, av);
}
