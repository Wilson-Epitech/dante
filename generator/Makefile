##
## DANTE PROJECT, 2023
## dante
## File description:
## Makefile
##

SRC =	generator.c									\
		src/check_nbr.c								\
		src/error_handling.c						\


OBJ =	$(SRC:.c=.o)

CFLAGS = -g

NAME =	generator

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	$(RM) -f $(OBJ)
	$(RM) -f *~

fclean: clean
	rm -f $(NAME)

re: fclean all
