#include "hashtable.h"

struct SpellChecker
{
    char *fileName;
    HashTable *hashTable;
};

void InitSpellCheker(struct SpellChecker *spellChecker, char *fileName);

void loadDictionary(struct SpellChecker *const SpellChecker, char* fileName);