typedef struct queue 
{	
	int *arrayQueue;

	int headQueue;
	int tailQueue;

	
}queue;

void initQueue(queue *q, int sizeQueue);

void enqueue(queue *q, int num);

int dequeue(queue *q);

int isEmpty(queue *q);