#include "hashtable.h"

struct SpellChecker
{
    char *fileName;
    struct HashTable *hashTable;
};

void InitSpellCheker(struct SpellChecker *const spellChecker, char *fileName);
