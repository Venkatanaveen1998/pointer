CC=gcc
final:2darray.o 2darraycondition.o
	$(CC) $^ -o $@
2darray.o:2darray.c
	$(CC) -c $<
2darraycondition.o:2darraycondition.c
	$(CC) -c $<
clean:
	rm -f *.o final
	

