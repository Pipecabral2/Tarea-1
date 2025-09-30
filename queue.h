#ifndef QUEUE_H
#define QUEUE_H

#define SIZE 100

typedef struct {
    int items[SIZE];
    int front, rear;
} Queue;

void initQueue(Queue* q);
int isEmptyQueue(Queue* q);
int isFullQueue(Queue* q);
void enqueue(Queue* q, int value);
int dequeue(Queue* q);
int peekQueue(Queue* q);

#endif
