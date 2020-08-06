all: myapp
CC= gcc
INCLUDE= .
CFLAGS= -g -Wall -ansi
objects= myarray.o mysum.o myavg.o 
myapp: $(objects)	
	$(CC) -o myapp $(objects)
%.o : %.c
	$(CC) -I$(INCLUDE) $(CFLAGS) -c $^ -o $@
clean:	
	rm myapp $(objects)
