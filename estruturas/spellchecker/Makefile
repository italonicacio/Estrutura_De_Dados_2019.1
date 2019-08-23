spellchecker: sllist.o hashtable.o main.o spellchecker.o
	gcc sllist.o main.o hashtable.o spellchecker.o -o spellchecker 

sllist.o: sllist.c
	gcc  -g3 -c -Wall -Werror -std=c99 -O0 sllist.c

main.o: main.c
	gcc  -g3 -c -Wall -Werror -std=c99 -O0 main.c

hashtable.o: hashtable.c
	gcc  -g3 -c -Wall -Werror -std=c99 -O0 hashtable.c

spellchecker.o: spellchecker.c
	gcc  -g3 -c -Wall -Werror -std=c99 -O0 spellchecker.c

.PHONY: clean

clean: 
	rm *.o spellchecker test