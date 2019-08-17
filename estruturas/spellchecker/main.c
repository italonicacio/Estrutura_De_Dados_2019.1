#include <stdio.h>
#include "spellchecker.h"



int main(void)
{

	struct SpellChecker spellChecker;
	char *fileName = "asciidict.txt";

	InitSpellCheker(&spellChecker, fileName);
	LoadDictionary(&spellChecker, fileName);
	
	
	
	for(int i = 0; i< MAX_SIZE_HASH_TABLE; i++)
	{
		printf("%i\n", *spellChecker.hashTable[i]->size);
	}



	


	

	



	return 0;
}