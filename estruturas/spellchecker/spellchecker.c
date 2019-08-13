#include <stdlib.h>
#include "spellchecker.h"


void InitSpellCheker(struct SpellChecker *spellChecker, char *fileName)
{
    HashTable *auxhashTable = NULL;
    auxhashTable = ( HashTable*) malloc(sizeof( HashTable ));
    spellChecker->fileName = fileName;
    spellChecker->hashTable = auxhashTable;

    InitHashTable(spellChecker->hashTable);

   

}

void loadDictionary(struct SpellChecker *const SpellChecker, char* fileName)
{
    if(SpellChecker != NULL)
    {
        LoadTable(SpellChecker->hashTable, fileName);    
    }else{

        InitSpellCheker(SpellChecker, fileName);
        LoadTable(SpellChecker->hashTable, fileName);
    }
}