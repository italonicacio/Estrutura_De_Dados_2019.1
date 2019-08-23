#ifndef SPELLCHECKER_SLLIST_H
#define SPELLCHECKER_SLLIST_H

struct Node
{
	char *value;
	struct Node *nextNode;
};


struct Sllist{
	struct Node *headNode;
	unsigned int size;
};



void InitSllist(struct Sllist * sll);

void prepend(struct Sllist * sll,  char *value);

void DeleteSllist(struct Sllist *sll);


#endif //SPELLCHECKER_SLLIST_H