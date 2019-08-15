#include <stdlib.h>
#include "spellchecker.h"


void InitSpellCheker(struct SpellChecker *spellChecker, char *fileName)
{
    HashTable *auxhashTable = NULL;
    auxhashTable = ( HashTable*) malloc(sizeof( HashTable ));
    spellChecker->fileName = fileName;

    InitHashTable(*auxhashTable);
    spellChecker->hashTable = auxhashTable;
   

}

void LoadDictionary(struct SpellChecker *spellChecker, char* fileName)
{
    if(spellChecker != NULL)
    {
        LoadTable(*spellChecker->hashTable, fileName);    
    }else{

        InitSpellCheker(spellChecker, fileName);
        LoadTable(*spellChecker->hashTable, fileName);
    }
}