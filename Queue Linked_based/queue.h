#ifndef QUEUE_H
#define QUEUE_H

#define QueueEntry int

typedef struct QueueNode {
    QueueEntry entry;
    struct QueueNode *next;
} QueueNode;

typedef struct Queue {
    QueueNode *front;
    QueueNode *rear;
    int size;
} Queue;

void initialize(Queue *pq);
int isEmpty(Queue *pq);
void Append(Queue *pq, QueueEntry e);
void Serve(Queue *pq, QueueEntry *e);
int QueueSize(Queue *pq);
void clearQueue(Queue *pq);

#endif
