#include <stdlib.h>
#include "sllist.h"

void InitSllist(struct Sllist *sll)
{
	sll->headNode = NULL;
	sll->size = 0;

}

void prepend(struct Sllist * sll,  char *value)
{
	struct Node *newNode = NULL;
	newNode = (struct Node*) malloc(sizeof( struct Node));
	newNode->nextNode = NULL;
	newNode->value = value;

	if( sll->headNode == NULL )
	{
		sll->headNode = newNode;

	}else{
		newNode->nextNode = sll->headNode;
		sll->headNode = newNode;
	}
	sll->size++;
}

void DeleteSllist(struct Sllist * sll)
{
	struct Node *auxNode = NULL;
	auxNode = sll->headNode;
	while(auxNode != NULL)
	{
		sll->headNode = sll->headNode->nextNode;
		free(auxNode);
		auxNode = sll->headNode;

	}
}
