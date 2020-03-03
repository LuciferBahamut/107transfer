/*
** EPITECH PROJECT, 2020
** transfer
** File description:
** compute
*/

#include "transfer.h"

void compute(coef_t *co)
{
    double p0 = 0;

    for (double x = 0; x <= 1.001; x += 0.001) {
        p0 = co->tab_a[co->max_a - 1];
        for (int i = (co->max_a - 2); i != -1; i--) {
            co->res_a = (p0 * x) + co->tab_a[i];
            p0 = co->res_a;
        }
        p0 = co->tab_b[co->max_b];
        for (int i = (co->max_b - 1); i != -1; i--) {
            co->res_b = (p0 * x) + co->tab_b[i];
            p0 = co->res_b;
        }
        co->res = co->res_a / co->res_b;
        printf("%.3f -> %.5f\n", x, co->res);
    }
}
