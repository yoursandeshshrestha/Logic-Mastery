#include <stdio.h>
#include <limits.h>

#define MAX_SIZE 100

typedef struct 
{
    int data[MAX_SIZE];
    int size;
} PriorityQueue;

void initQueue(PriorityQueue *pq) 
{
    pq->size = 0;
}


void enqueue(PriorityQueue *pq, int value) 
{
    if (pq->size >= MAX_SIZE) 
    {
        printf("Queue is full!\n");
        return;
    }

    pq->data[pq->size++] = value; 

    
    for (int i = 0; i < pq->size - 1; i++) 
    {
        for (int j = i + 1; j < pq->size; j++) 
        {
            if (pq->data[i] > pq->data[j]) 
            {
                int temp = pq->data[i];
                pq->data[i] = pq->data[j];
                pq->data[j] = temp;
            }
        }
    }
}


int dequeue(PriorityQueue *pq) 
{
    if (pq->size <= 0) 
    {
        printf("Queue is empty!\n");
        return INT_MIN;
    }
    return pq->data[--pq->size]; 
}


void display(PriorityQueue *pq) 
{
    if (pq->size <= 0) 
    {
        printf("Queue is empty!\n");
        return;
    }

    printf("Priority Queue: ");
    for (int i = 0; i < pq->size; i++) 
    {
        printf("%d ", pq->data[i]);
    }
    printf("\n");
}


int main() 
{
    PriorityQueue pq;
    initQueue(&pq);

    enqueue(&pq, 30);
    enqueue(&pq, 10);
    enqueue(&pq, 20);

    display(&pq);

    printf("Dequeued: %d\n", dequeue(&pq));
    display(&pq);

    return 0;
}
