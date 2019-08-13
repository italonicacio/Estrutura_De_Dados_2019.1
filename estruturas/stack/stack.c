#include <stdio.h>
#include <stdlib.h>
#include "stack.h"



void InitStack(Stack *stack, int sizeStack)
{
	stack->top = -1;
	stack->sizeStack = sizeStack;
	stack->arrayStack = (int*) malloc( sizeStack * sizeof(int) );

}

void DelStack(Stack *stack)
{
	free( stack->arrayStack );
}

void Push(Stack *stack, int nValue)
{
	if(stack->top < stack->sizeStack)
	{
		stack->arrayStack[++stack->top] = nValue;

	}else{
		printf("OverFlow");
	}
}

int Pop(Stack *stack)
{
	if(stack->sizeStack > -1)
	{
		return stack->arrayStack[stack->top--];

	}else{
		printf("UnderFlow");
	}

}

int IsEmpty(Stack *stack)
{
	if(stack->top == -1)
	{
		printf("Error 1\n");
		return 1;

	}else{
		printf("Error 2\n");
		return 0;
	}

}

int Top(Stack *stack)
{
	return stack->arrayStack[stack->top];
}
