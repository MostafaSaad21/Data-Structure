#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

void initialize(Queue *pq)
{
    pq->front = NULL;
    pq->rear = NULL;
    pq->size = 0;
}

int isEmpty(Queue *pq)
{
    return pq->front == NULL;
}

void Append(Queue *pq, QueueEntry e)
{
    QueueNode *newNode = (QueueNode *)malloc(sizeof(QueueNode));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->entry = e;
    newNode->next = NULL;
    if (isEmpty(pq)) {
        pq->front = pq->rear = newNode;
    } else {
        pq->rear->next = newNode;
        pq->rear = newNode;
    }
    pq->size++;
    printf("%d Append into queue\n", e);
}

void Serve(Queue *pq, QueueEntry *e)
{
    if (isEmpty(pq)) {
        printf("Queue is empty\n");
        return;
    }
    QueueNode *temp = pq->front;
    *e = pq->front->entry;
    pq->front = pq->front->next;
    if (pq->front == NULL) {
        pq->rear = NULL;
    }
    free(temp);
    pq->size--;
    printf("%d Serve from queue\n", *e);
}

int QueueSize(Queue *pq)
{
    return pq->size;
}

void clearQueue(Queue *pq)
{
    while (pq->front) {

        pq->rear=pq->front->next;
        free(pq->front);
        pq->front=pq->rear;
    }
    pq->size=0;
}
