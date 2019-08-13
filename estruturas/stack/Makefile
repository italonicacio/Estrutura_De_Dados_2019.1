test: stack.o test.o
	gcc stack.o test.o -o test
stack.o: stack.c
	gcc -c stack.c

test.o: test.c
	gcc -c test.c

.PHONY: clean

clean: 
	rm *.o