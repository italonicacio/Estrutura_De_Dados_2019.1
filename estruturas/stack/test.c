#include <stdio.h>
#include "stack.h"

int main(void)
{
	int i;
	Stack stack;
	InitStack(&stack, 10);
	printf("tamanho da pilha: %i\n", stack.sizeStack);
	

	for(i = 0; i < stack.sizeStack; ++i)
	{
		Push(&stack, i);
	}
	
	while( !( IsEmpty(&stack) ) )
	{
		int aux = Pop(&stack);
		printf("%i\n", aux);
	}


	DelStack(&stack);
	return 0;
}