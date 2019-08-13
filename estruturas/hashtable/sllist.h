#ifndef HASHTABLE_SLLIST_H
#define HASHTABLE_SLLIST_H

struct Node
{
	const char *value;
	struct Node *nextNode;
};


struct Sllist{
	struct Node *headNode;
	int size;
};



void InitSllist(struct Sllist *const sll);

void prepend(struct Sllist *const sll, const char *value);

void DeleteSllist(struct Sllist *const sll);


#endif //HASHTABLE_SLLIST_H