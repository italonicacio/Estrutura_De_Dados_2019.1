#ifndef SPELLCHECKER_SPELLCHECKER_H
#define SPELLCHECKER_SPELLCHECKER_H

#include "hashtable.h"

struct SpellChecker
{
    char *fileName;
    HashTable *hashTable;
};

void InitSpellCheker(struct SpellChecker *spellChecker, char *fileName);

void LoadDictionary(struct SpellChecker *spellChecker, char* fileName);

#endif //SPELLCHECKER_SPELLCHECKER_H