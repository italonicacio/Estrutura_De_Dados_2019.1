#ifndef HASHTABLE_HASHTABLE_H
#define HASHTABLE_HASHTABLE_H

#include "sllist.h"

#define MAX_SIZE_HASH_TABLE 13

typedef struct Sllist HashTable[MAX_SIZE_HASH_TABLE];

void InitHashTable(HashTable hashTable);

unsigned int Hash(const char *const stringHashing);

void LoadChaining(struct Sllist *const sll, const  char *stringToNode);

void LoadTable(HashTable hashTable, char *fileName);



#endif //HASHTABLE_HASHTABLE_H
