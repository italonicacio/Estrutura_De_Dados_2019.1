#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "hashtable.h"

#include "sllist.h"

#define SIZE_STRING_BUFFER 50
#define BUFFER_FILE_LINE 1000

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
	char *stringCopy;
	int sizeString = strlen(stringToNode);
	stringCopy = (char *) malloc( (sizeString * sizeof( char )) + 1  ); 
	strcpy(stringCopy,stringToNode);
	
	prepend(sll, stringCopy);
}

void LoadTable(HashTable hashTable, char *fileName)
{
	unsigned int hash;
	
	FILE *dictionaryFIle;
	char auxText[SIZE_STRING_BUFFER];

	if( (dictionaryFIle = fopen(fileName, "r")) != NULL  )
	{
		while(fscanf(dictionaryFIle, "%s", auxText) != EOF)
		{
			hash = Hash(auxText);
			LoadChaining(hashTable[hash], auxText);
		}

	}else{
		printf("Problems to open file\n");
		exit(1);
	}

	fclose(dictionaryFIle);
	
}

void Searching(HashTable hashTable, char*fileName)
{
	FILE *fileSpellCheckin = fopen(fileName, "r");
	char fileLine[BUFFER_FILE_LINE];
	char *textToCompare;
	clock_t initialTime, finalTime;
	double timeToSearching;

	if(fileSpellCheckin == NULL)
	{
		printf("Problems to open file\n");
		exit(1);
	}

	initialTime = clock();

	while( !feof(fileSpellCheckin) )
	{
		
		fgets(fileLine, BUFFER_FILE_LINE, fileSpellCheckin);
		textToCompare = strtok(fileLine, "[]{}()–;§/– _-*,.!'\n'");
		
		SearchingDictionary(hashTable, textToCompare);
		
	}

	finalTime = clock();

	timeToSearching = ( (double) (finalTime - initialTime) ) / (CLOCKS_PER_SEC/1000);
	printf("%lf\n", timeToSearching);

}

void SearchingDictionary(HashTable hashTable, char *stringToCompare)
{
	unsigned int hash;
	struct Node *auxPointerToNode = NULL;
	
	while(stringToCompare != NULL)
	{
		hash = Hash(stringToCompare);

		auxPointerToNode = hashTable[hash]->headNode;
		while ( auxPointerToNode != NULL)
		{
			if( strcmp(stringToCompare, auxPointerToNode->value) == 0 )
			{	
				printf("%s == %s\n", stringToCompare, auxPointerToNode->value);
			}
			
			auxPointerToNode = auxPointerToNode->nextNode;
		}
			
		//printf("%s\n", stringToCompare);
		stringToCompare = strtok(NULL,"[]{}()–;§/– _-*,.!'\n'" );
	}
}

//void DeletingHahsTable(HashTable hashTable);