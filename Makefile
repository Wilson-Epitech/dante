##
## DANTE PROJECT, 2023
## dante
## File description:
## Makefile
##

all:
	cd solver && make
	cd generator && make

clean:
	cd solver && make clean
	cd generator && make clean

fclean:
	cd solver && make fclean
	cd generator && make fclean

re:
	cd solver && make re
	cd generator && make re
