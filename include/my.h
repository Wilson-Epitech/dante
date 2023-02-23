/*
** DANTE PROJECT, 2022
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
    #define MY_H_
    #include <stdio.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <string.h>

char **word_array_delimiter(char const *str, char *delim);

int error_handling(int ac, char **av);
char *gen_map_wall(char **av);
int check_generator_type(int ac, char **av);
#endif
