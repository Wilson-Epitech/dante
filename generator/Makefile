##
## DANTE PROJECT, 2023
## dante
## File description:
## Makefile
##

SRC =	generator.c									\
		src/error_handling.c						\
		src/gen_maps.c								\
		src/init_all.c 								\
		src/check_surroundings.c 					\
		src/is_bloqued.c 							\
		src/check_generator.c						\
		../lib/my_strlen.c 							\
		../lib/word_array_delimiter.c 				\
		../lib/word_array_delimiter2.c 				\
		../lib/print_free_array.c 					\

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
