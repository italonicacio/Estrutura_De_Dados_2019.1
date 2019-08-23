#include <stdio.h>
#include "spellchecker.h"
#define DEBUG_4



int main(void)
{

	struct SpellChecker spellChecker;
	char *fileName = "asciidict.txt";

	InitSpellCheker(&spellChecker, fileName);
	LoadDictionary(&spellChecker, fileName);
	
	#ifdef DEBUG_1
		struct Sllist *sll = NULL;
		sll = spellChecker.hashTable[1];

		printf("%i : %i\n", 1,  sll->size);
	#endif

	#ifdef DEBUG_2

		for(int i = 0; i< MAX_SIZE_HASH_TABLE; i++)
		{
			struct Sllist *sll = *spellChecker.hashTable[i];
			unsigned int valueSize = sll->size;
			printf("%u : %u\n", i, valueSize);
		}
	#endif

	#ifdef DEBUG_3
		struct Sllist *sll = NULL;
		struct Node *auxNode = NULL;
		sll = *spellChecker.hashTable[1];
		auxNode = sll->headNode;
		while(auxNode != NULL)
		{
			printf("%s\n", auxNode->value);
			auxNode = auxNode->nextNode;
		}

	#endif

	#ifdef DEBUG_4
		char *fileNameTest = "constituicaofederal.txt";
		HashTable *hashTableTest = spellChecker.hashTable;
		Searching(*hashTableTest, fileNameTest);
	#endif
	
	
	return 0;
}