/*
** EPITECH PROJECT, 2020
** 107transfer
** File description:
** start
*/

#include "transfer.h"

static void free_struct(coef_t *co, char *arg1, char *arg2)
{
    int nb = count(arg1);

    for (int i = 0; i != nb; i++)
        free(co->str_a[i]);
    free(co->str_a);
    nb = count(arg2);
    for (int i = 0; i != nb; i++)
        free(co->str_b[i]);
    free(co->str_b);
    free(co->tab_a);
    free(co->tab_b);
    free(co);
}

int start(int ac, char **av)
{
    coef_t *co;

    if (ac == 2 && my_strcmp(av[1], "-h")) {
        help_display();
        return (SUCCESS);
    }
    if (error_handling(ac, av))
        return (ERROR);
    co = fill_struct(co, av);
    if (check_div(co, ac, av) == ERROR) {
        free(co);
        write_error(STR_ERROR_DIV);
        return (ERROR);
    }
    compute(co, ac, av);
    free_struct(co, av[ac - 2] ,av[ac -1]);
    return (SUCCESS);
}
