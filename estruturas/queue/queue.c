#include "queue.h"

void initQueue(queue *q, int sizeQueue)
{
	q->arrayQueue = malloc(sizeQueue * sizeof(int));
	q->headQueue = 0;
	q->tailQueue = -1;

}

void enqueue(queue *q, int num)
{
	q->arrayQueue[++q->tailQueue];
}

int dequeue(queue *q)
{
	return q->arrayQueue[++q->headlQueue];
}

int isEmpty(queue *q)
{
	if(q->headQueue > q->tailQueue)
		return 1;
	else
		return 0;

}