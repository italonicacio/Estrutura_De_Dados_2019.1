#include <stdio.h>
#include <stdlib.h>
#include "sllist.h"


void InitSll(struct Sllist *sll)
{
	sll->headNode = NULL;
	sll->tailNode =  NULL;
	sll->size = 0;

}

void DelSll(struct Sllist *sll)
{
	struct Node * auxDelNode = NULL;
	auxDelNode = sll->headNode->nextNode;
	while(sll->headNode != NULL)
	{

		free(sll->headNode);
		sll->headNode = auxDelNode;
		sll->size--;
	}

}

void Append(struct Sllist *sll, int value)
{
	struct Node *newNode = NULL;
	newNode =  (struct Node *) malloc(sizeof( struct Node));
	newNode->value = value;
	newNode->nextNode = NULL;

	if(sll->tailNode == NULL)
	{
		sll->tailNode = sll->headNode = newNode; 

		
	}else{

		sll->tailNode->nextNode = newNode;
		sll->tailNode = newNode;
		
	}
	sll->size++;
}

void Prepend(struct Sllist *sll, int value)
{
	struct Node *newNode = NULL; 
	newNode = (struct Node *) malloc(sizeof( struct Node ));
	newNode->value = value;
	newNode->nextNode = NULL;

	if(sll->headNode == NULL)
	{
		sll->headNode = sll->tailNode = newNode;	

	}else{

		newNode->nextNode = sll->headNode;
		sll->headNode = newNode;
		
	}

	sll->size++;

}

void InsertAfter(struct Sllist *sll,struct Node *InsertAfterNode, int value)
{
	struct Node *newNode = (struct Node *) malloc( sizeof( struct Node ) );
	newNode->value = value;
	newNode->nextNode = InsertAfterNode->nextNode;
	InsertAfterNode->nextNode = newNode;
	sll->size++;
	


}

void DeleteAfter(struct Sllist *sll, struct Node *DeleteAfterNode, int value)
{
	struct Node *auxDelNode = NULL;
	auxDelNode = DeleteAfterNode->nextNode;
	DeleteAfterNode->nextNode = auxDelNode->nextNode;

	free(auxDelNode);
	sll->size--;


}

void PrintList(struct Sllist *sll)
{
	struct Node *auxPrintNode;
	auxPrintNode = sll->headNode;
	int i = 0;
	while(auxPrintNode != NULL)
	{

		printf("List[%i]: %i\n", i++, auxPrintNode->value);
		
		auxPrintNode = auxPrintNode->nextNode;

		
		
	}

}