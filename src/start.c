/*
** EPITECH PROJECT, 2020
** 107transfer
** File description:
** start
*/

#include "transfer.h"

int count(char *str)
{
    int nb = 0;

    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == '*')
            nb++;
    nb++;
    return (nb);
}

char **my_split(char *src)
{
    int nb = count(src);
    char **str = malloc(sizeof(char *) * nb);
    int i = 0;
    int k = 0;

    for (int j = 0; src[i] != '\0'; i++) {
        if (src[i] == '*')
            j++;
        str[j] = malloc(sizeof(char) * (i + 1));
    }
    i = 0;
    for (int j = 0; src[i] != '\0'; i++, k++) {
        if (src[i] == '*') {
            str[j][i] = '\0';
            j++;
            i++;
            k = 0;
        }
        str[j][k] = src[i];
    }
    return (str);
}

coef_t *fill_struct(coef_t *co, char **av)
{
    co = malloc(sizeof(coef_t));
    co->tab_a = malloc(strlen(av[1]));
    co->tab_b = malloc(strlen(av[2]));
    co->str_a = my_split(av[1]);
    co->str_b = my_split(av[2]);
    co->max_a = count(av[1]);
    co->max_b = count(av[2]);
    for (int i = 0; i != count(av[1]); i++)
        co->tab_a[i] = atoi(co->str_a[i]);
    for (int i = 0; i != count(av[2]); i++)
        co->tab_b[i] = atoi(co->str_b[i]);
    return (co);
}

int start(int ac, char **av)
{
    coef_t *co;

    if (ac == 2 && my_strcmp(av[1], av[1])) {
        help_display();
        return (SUCCESS);
    }
    if (error_handling(ac, av))
        return (ERROR);
    co = fill_struct(co, av);
    compute(co);
    free(co);
    return (SUCCESS);
}
