# declaring macros
CC = gcc
FLAGS = -Wall -g
TARGETS = main.o my_mat.o

# declaring that "all" and "clean" are not files and dont create them
.PHONY: all clean 

# short using of make command
all: connections


#linkage of the objects to .exe file
connections: $(TARGETS)
	$(CC) $(FLAGS)	-o connections $(TARGETS)

#compiling main.c
main.o: main.c my_mat.h
	$(CC) $(FLAGS)  -c main.c

#compailinig my_mat.c with preprocessing my_mat.h
my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c

#clean all files that created, not touching the .c, .h and Makefile files
clean:
	rm -f *.o connections
