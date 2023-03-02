/*
** DANTE PROJECT, 2023
** dante
** File description:
** gen_map_wall
*/

#include "../../include/my.h"
#include "../../include/struct.h"
#include "../../include/generator.h"
#include <time.h>

void check_up_and_down(structure_t *gen, char **map)
{
    if (gen->case_x >= 0 && gen->case_x <= gen->length_map && gen->case_y >= 0
    && gen->case_y <= gen->width_map && gen->rand_number == 3) {
        if (map[gen->case_x][gen->case_y] == 'X'
        && map[gen->case_x + 1][gen->case_y] == 'X') {
            map[gen->case_x][gen->case_y] = '*';
            map[gen->case_x + 1][gen->case_y] = '*';
            gen->x = gen->case_x; gen->y = gen->case_y;
            gen->count += 1;
        }
    }
    if (gen->case_x >= 0 && gen->case_x <= gen->length_map && gen->case_y >= 0
    && gen->case_y <= gen->width_map && gen->rand_number == 0) {
        if (map[gen->case_x][gen->case_y] == 'X' &&
        map[gen->case_x - 1][gen->case_y] == 'X') {
            map[gen->case_x][gen->case_y] = '*';
            map[gen->case_x - 1][gen->case_y] = '*';
            gen->x = gen->case_x; gen->y = gen->case_y;
            gen->count += 1;
        }
    }
}

void check_left_and_right(structure_t *gen, char **map)
{
    if (gen->case_x >= 0 && gen->case_x <= gen->length_map && gen->case_y >= 0
    && gen->case_y <= gen->width_map && gen->rand_number == 2) {
            if (map[gen->case_x][gen->case_y] == 'X' &&
            map[gen->case_x][gen->case_y + 1] == 'X') {
                map[gen->case_x][gen->case_y] = '*';
                map[gen->case_x][gen->case_y + 1] = '*';
                gen->x = gen->case_x; gen->y = gen->case_y;
                gen->count += 1;
            }
        }
    if (gen->case_x >= 0 && gen->case_x <= gen->length_map && gen->case_y >= 0
    && gen->case_y <= gen->width_map && gen->rand_number == 1) {
        if (map[gen->case_x][gen->case_y] == 'X' &&
        map[gen->case_x][gen->case_y - 1] == 'X') {
            map[gen->case_x][gen->case_y] = '*';
            map[gen->case_x][gen->case_y - 1] = '*';
            gen->x = gen->case_x; gen->y = gen->case_y;
            gen->count += 1;
        }
    }
}

void attribute_new_cases(structure_t *gen)
{
    gen->cases[0][0] = gen->x + 2;
    gen->cases[0][1] = gen->y;
    gen->cases[1][0] = gen->x;
    gen->cases[1][1] = gen->y + 2;
    gen->cases[2][0] = gen->x;
    gen->cases[2][1] = gen->y - 2;
    gen->cases[3][0] = gen->x - 2;
    gen->cases[3][1] = gen->y;
}

void gen_stars(structure_t *gen, char **map)
{

    if (gen->rand_stars == 0) {
        int nb_stars = gen->length_map * gen->width_map / 4;
        for (int i = 0; i != nb_stars; i++) {
        int rand_nb1 = rand () % gen->length_map;
        int rand_nb2 = rand () % gen->width_map;
            map[rand_nb1][rand_nb2] = '*';
        }
        gen->exit_loop = 0;
    }

    if (gen->rand_stars == 1) {
        gen->exit_loop = 0;
    }

}

void check_end(structure_t *gen, char **map)
{
    if (map[gen->length_map][gen->width_map] == '*' )
        gen_stars(gen, map);
    if (map[gen->length_map - 1][gen->width_map] == '*' ||
    map[gen->length_map][gen->width_map - 1] == '*') {
        map[gen->length_map][gen->width_map] = '*';
        gen_stars(gen, map);
    } else if (map[gen->length_map - 1][gen->width_map - 1] == '*') {
        gen->rand_number2 = rand () % 2;
        int last_choice[2][2];
        last_choice[0][0] = gen->length_map - 1;
        last_choice[0][1] = gen->width_map;
        last_choice[1][0] = gen->length_map;
        last_choice[1][1] = gen->width_map - 1;
        gen->case_x = last_choice[gen->rand_number2][0];
        gen->case_y = last_choice[gen->rand_number2][1];
        map[gen->case_x][gen->case_y] = '*';
        map[gen->length_map][gen->width_map] = '*';
        gen_stars(gen, map);
    }
}
