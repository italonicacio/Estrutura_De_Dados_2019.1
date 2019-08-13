test: sllist.o test.o
	gcc sllist.o test.o -o test
sllist.o: sllist.c
	gcc -c -Wall -Werror sllist.c

test.o: test.c
	gcc -c -Wall -Werror test.c

.PHONY: clean

clean: 
	rm *.o test