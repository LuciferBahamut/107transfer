/*
** EPITECH PROJECT, 2020
** 107transfer
** File description:
** start
*/

#include "transfer.h"

int start(int ac, char **av)
{
    if (error_handling(ac, av))
        return (ERROR);
    return (SUCCESS);
}
