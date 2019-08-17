#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "hashtable.h"

#include "sllist.h"

#define SIZE_STRING_BUFFER 50

void InitHashTable(HashTable hashTable)
{
	int i;
	for(i = 0; i < MAX_SIZE_HASH_TABLE; i++ )
	{

		hashTable[i] = ( struct Sllist* ) malloc(sizeof( struct Sllist ));
		InitSllist(hashTable[i]);
		
	}

}

//função de hash com soma de ASC
unsigned int Hash(char *stringHashing)
{
	int i;
	unsigned int hash = 0;
	unsigned int sizeStringHash = strlen( stringHashing );

	for(i = 0; i < sizeStringHash; i++)
	{
		hash +=  stringHashing[i];
	}

	hash %= MAX_SIZE_HASH_TABLE;

	return hash;
}

void LoadChaining(struct Sllist *sll, char *stringToNode)
{
	prepend(sll, stringToNode);
}

void LoadTable(HashTable hashTable, char *fileName)
{
	unsigned int hash;
	FILE *auxFile;
	char auxText[SIZE_STRING_BUFFER];

	if( (auxFile = fopen(fileName, "r")) != NULL  )
	{
		while(fscanf(auxFile, "%s", auxText) != EOF)
		{
			hash = Hash(auxText);
			LoadChaining(hashTable[hash], auxText);
		}

	}

	fclose(auxFile);
	
}

