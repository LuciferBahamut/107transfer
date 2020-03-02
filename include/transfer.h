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
#include <string.h>

void write_error(char *str);
void help_display(void);
int error_handling(int ac, char **av);
int start(int ac, char **av);

#define SUCCESS 0
#define ERROR 84
#define FALSE 0
#define TRUE 1

#define STR_HELP "(see with -h)\n"
#define STR_ERROR_ARGNBR "this program must take at least 3 arguments "
#define STR_ERROR_STRING "one or more of the strings are incorrect "
#define STR_ERROR_DEN "there must be the same number of NUM and DEN "

#endif
