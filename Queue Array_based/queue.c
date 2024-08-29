#include "queue.h"
#include <stdio.h>

void initialize(Queue *pq)
{
    pq->front = 0;
    pq->rear = -1;
    pq->size = 0;
}

int isFull(Queue *pq)
{
    return pq->size == MAX_SIZE;
}

int isEmpty(Queue *pq)
{
    return pq->size == 0;
}

void Append(Queue *pq, QueueEntry e)
{
    if (isFull(pq)) {
        printf("Queue is full\n");
        return;
    }
    pq->rear = (pq->rear + 1) % MAX_SIZE;
    pq->arr[pq->rear] = e;
    pq->size++;
    printf("%d Append into queue\n", e);
}

void Serve(Queue *pq, QueueEntry *e)
{
    if (isEmpty(pq)) {
        printf("Queue is empty\n");
        return;
    }
    *e = pq->arr[pq->front];
    pq->front = (pq->front + 1) % MAX_SIZE;
    pq->size--;
    printf("%d Serve from queue\n", *e);
}

int QueueSize(Queue *pq)
{
    return pq->size;
}

void clearQueue(Queue *pq)
{
    pq->front = 0;
    pq->rear = -1;
    pq->size = 0;
}
