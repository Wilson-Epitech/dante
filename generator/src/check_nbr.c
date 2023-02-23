/*
** DANTE PROJECT, 2023
** dante
** File description:
** check_nbr
*/

#include "../../include/my.h"

int check_nbr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] > 'a' || str[i] < 'z' && str[i] < '0' || str[i] > '9') {
            return 84;
        }
    }
    return 0;
}
