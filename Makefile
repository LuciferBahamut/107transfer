##
## EPITECH PROJECT, 2019
## 107transfer
## File description:
## Makefile
##

NAME	=	107transfer

SRC	=	src/main.c \
		src/start.c

CC	=	gcc

DEFLAGS	=	-W -Wextra -Wall -g3

CPPFLAGS=	-I./include/

CFFLAGS	=	tests/unit_tests.c -I./include --coverage -lcriterion

LDFLAGS	=	-lm

OBJ	=	$(SRC:.c=.o)

all	:	$(OBJ)
		$(CC) $(DEFLAGS) -o $(NAME) $(OBJ) $(CPPFLAGS) $(LDFLAGS)

tests_run	:
		$(CC) -o unit_tests src/*.c $(CFFLAGS) $(LDFLAGS)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)
		rm -f *# \
		rm -f src/*# \
		rm -f include/*# \
		rm -f *~ \
		rm -f src/*~ \
		rm -f include/*~ \
		rm -f *.gcda \
		rm -f *.gcno

re	:	fclean all

.PHONY	:	all tests_run clean fclean re
