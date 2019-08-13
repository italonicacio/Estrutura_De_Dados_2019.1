#include <stdio.h>
#include "sllist.h"

int main(void)
{

	struct Sllist sll;
	InitSll(&sll);

	/*
	*	Aqui é um teste para verificar se o Append e Prepend
	*	estão funcionando corretamente.
	*/
	Append(&sll,  10);
    Append(&sll,  11);
    Append(&sll,  12);
    Prepend(&sll,9);

	PrintList(&sll);
	

	
	DelSll(&sll);	

	
	
	DelSll(&sll);
	
	return 0;
}