/*
** EPITECH PROJECT, 2020
** 107transfer
** File description:
** start
*/

#include "transfer.h"

int start(int ac, char **av)
{
    if (ac == 2 && my_strcmp(av[1], av[1])) {
        help_display();
        return (SUCCESS);
    }
    if (error_handling(ac, av))
        return (ERROR);
    return (SUCCESS);
}
