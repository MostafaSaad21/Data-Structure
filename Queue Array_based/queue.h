#ifndef QUEUE_H
#define QUEUE_H

#define MAX_SIZE 100  // Define the maximum size of the queue
#define QueueEntry int

typedef struct {
    QueueEntry arr[MAX_SIZE];
    int front;
    int rear;
    int size;
} Queue;

void initialize(Queue *pq);
int isFull(Queue *pq);
int isEmpty(Queue *pq);
void Append(Queue *pq, QueueEntry e);
void Serve(Queue *pq, QueueEntry *e);
int QueueSize(Queue *pq);
void clearQueue(Queue *pq);

#endif
