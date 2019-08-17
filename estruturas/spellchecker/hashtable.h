#ifndef SPELLCHECKER_HASHTABLE_H
#define SPELLCHECKER_HASHTABLE_H

#include "sllist.h"

#define MAX_SIZE_HASH_TABLE 661

typedef struct Sllist *HashTable[MAX_SIZE_HASH_TABLE];

void InitHashTable(HashTable hashTable);

unsigned int Hash( char * stringHashing);

void LoadChaining(struct Sllist * sll,   char *stringToNode);

void LoadTable(HashTable hashTable, char *fileName);



#endif //SPELLCHECKER_HASHTABLE_H
