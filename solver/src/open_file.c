/*
** DANTE PROJECT, 2023
** dante
** File description:
** open_file
*/

#include "../../include/my.h"
#include "../../include/solver.h"

char *open_file(int ac, char **av, char *buff)
{
    int fd;
    struct stat sb;
    stat(av[1], &sb);
    if (sb.st_size == 0)
        exit(84);
    buff = malloc((sizeof(char)) * (sb.st_size + 1));
    buff[sb.st_size] = '\0';
    fd = open(av[1], O_RDONLY);
    read(fd, buff, sb.st_size);
    close(fd);
    return buff;
}
