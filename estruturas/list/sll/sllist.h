#ifndef SLL_SLLIST_H
#define SLL_SLLIST_H

struct Sllist
{

	struct Node * headNode;
	struct Node * tailNode;
	int size;
	
	
};

struct Node
{
	int value;
	struct Node * nextNode;

};

void InitSll(struct Sllist *sll);

void DelSll(struct Sllist *sll);

void Append(struct Sllist *sll, int value);

void Prepend(struct Sllist *sll, int value);

void InsertAfter(struct Sllist *sll,struct Node *InsertAfterNode, int value);

void DeleteAfter(struct Sllist *sll, struct Node *DeleteAfterNode, int value);

void PrintList(struct Sllist *sll);


#endif //SLL_SLLIST_H