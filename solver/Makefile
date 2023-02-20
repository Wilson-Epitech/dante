##
## DANTE PROJECT, 2023
## dante
## File description:
## Makefile
##

SRC =	solver.c

OBJ =	$(SRC:.c=.o)

CFLAGS = -g

NAME =	solver

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	$(RM) -f $(OBJ)
	$(RM) -f *~

fclean: clean
	rm -f $(NAME)

re: fclean all
