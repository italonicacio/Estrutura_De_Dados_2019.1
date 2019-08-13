#include <stdlib.h>
#include "sllist.h"

void InitSllist(struct Sllist *const sll)
{
	sll->headNode = NULL;
	sll->size = 0;

}

void prepend(struct Sllist *const sll, const char *value)
{
	struct Node *auxNode = NULL;
	auxNode = (struct Node*) malloc(sizeof( struct Node));
	auxNode->nextNode = NULL;
	auxNode->value = value;

	if( !(sll->headNode) )
	{
		sll->headNode = auxNode;

	}else{
		auxNode->nextNode = sll->headNode;
		sll->headNode = auxNode;
	}
	
}

void DeleteSllist(struct Sllist *const sll)
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
