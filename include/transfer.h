/*
** EPITECH PROJECT, 2019
** 107transfer
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <time.h>
#include <pwd.h>
#include <grp.h>
#include <errno.h>
#include <math.h>

#define SUCCESS 0
#define ERROR 84
#define FALSE 0
#define TRUE 1

void write_error(char *str);
int error_handling(int ac, char **av);
int start(int ac, char **av);

#endif
