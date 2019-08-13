#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "hashtable.h"
#include "sllist.h"

#define SIZE_STRING_BUFFER 50

void InitHashTable(HashTable hashTable)
{
	int i;
	struct Sllist *auxSinglyLinkedList = NULL;
	for(i = 0; i < MAX_SIZE_HASH_TABLE; i++ )
	{
		auxSinglyLinkedList = (struct Sllist*) malloc(sizeof(struct Sllist));
		
		hashTable[i]= auxSinglyLinkedList;
		InitSllist(hashTable[i]);
	}

}

//função de hash com soma de ASC
unsigned int Hash(const char *const stringHashing)
{
	int i;
	unsigned int hash;
	int sizeStringHash = strlen( stringHashing );

	for(i = 0; i < sizeStringHash; i++)
	{
		hash += stringHashing[i];
	}

	hash %= MAX_SIZE_HASH_TABLE;

	return hash;
}

void LoadTable(struct Sllist *const sll, const  char *stringToNode)
{
	prepend(sll, stringToNode);
}
void ReadFile(HashTable hashTable, char *fileName)
{
	unsigned int hash;
	FILE *auxFile;
	char auxText[50];
	if( (auxFile = fopen(fileName, "r")) != NULL  )
	{
		while(fscanf(auxFile, "%s", auxText) != EOF)
		{
			hash = Hash(auxText);
			LoadTable(hashTable[hash], auxText);
		}

	}

	fclose(auxFile);
	
}

