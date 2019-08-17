#include <stdlib.h>
#include "spellchecker.h"


void InitSpellCheker(struct SpellChecker *spellChecker, char *fileName)
{
    spellChecker->hashTable = ( HashTable*) malloc(sizeof( HashTable ));
    spellChecker->fileName = fileName;
    InitHashTable( *spellChecker->hashTable );
    
}

void LoadDictionary(struct SpellChecker *spellChecker, char *fileName)
{
    if(spellChecker != NULL)
    {
        LoadTable(*spellChecker->hashTable, fileName);  

    }else{

        InitSpellCheker(spellChecker, fileName);
        LoadTable(*spellChecker->hashTable, fileName);
        
    }
}
/* 
void CompareTextToDictionary( struct spellchecker *SpellChecker, char* fileTextCompar)
{

}*/