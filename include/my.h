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

int my_strlen(char const *str);
void print_array(char **array);
void free_array(char **array);

int is_delimiter(char c, char *delim);
int cut_str(char const *str, char *delim);
int check_character(char const *str, char *delim, int cut_here);
char **word_array_delimiter(char const *str, char *delim);

int error_handling(int ac, char **av);
int check_generator_type(int ac, char **av);
char *gen_map_wall(char **av);
int generate_imperfect_map(char *buffer);
int generate_perfect_map(char *buffer);

#endif
