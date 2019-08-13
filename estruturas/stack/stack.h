#ifndef STACK_H
#define STACK_H

typedef struct Stack
{
	int *arrayStack;
	int top;
	int sizeStack;
	
}Stack;

void InitStack(Stack *stack, int sizeStack);

void DelStack(Stack *stack);

void Push(Stack *stack, int nValue);

int Pop(Stack *stack);

int IsEmpty(Stack *stack);

int Top(Stack *stack);




#endif
