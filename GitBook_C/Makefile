all: ex01
CC= g++
INCLUDE= .
CFLAGS= -g -Wall -ansi
objects= . 
ex01: $(objects)	
	$(CC) -o ex01 $(objects)
%.o : %.c
	$(CC) -I$(INCLUDE) $(CFLAGS) -c $^ -o $@
clean:	
	rm ex01 $(objects)
