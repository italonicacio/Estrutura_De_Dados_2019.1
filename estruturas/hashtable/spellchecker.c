#include <stdlib.h>
#include "spellchecker.h"


void InitSpellCheker(struct SpellChecker *const spellChecker, char *fileName)
{
    HashTable *auxhashTable = NULL;
    auxhashTable = ( HashTable*) malloc(sizeof( HashTable ));
    spellChecker->fileName = fileName;

    InitHashTable(auxhashTable);

    spellChecker->hashTable = auxhashTable;

}

void loadDictionary(struc)
{

}