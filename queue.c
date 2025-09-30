#include "queue.h"
#include <stdio.h>

void initQueue(Queue* q) {
    q->front = -1;
    q->rear = -1;
}

int isEmptyQueue(Queue* q) {
    return q->front == -1;
}

int isFullQueue(Queue* q) {
    return (q->rear + 1) % SIZE == q->front;
}

void enqueue(Queue* q, int value) {
    if (isFullQueue(q)) {
        printf("Queue Overflow\n");
        return;
    }
    if (isEmptyQueue(q)) q->front = 0;
    q->rear = (q->rear + 1) % SIZE;
    q->items[q->rear] = value;
}

int dequeue(Queue* q) {
    if (isEmptyQueue(q)) {
        printf("Queue Underflow\n");
        return -1;
    }
    int value = q->items[q->front];
    if (q->front == q->rear) {
        q->front = q->rear = -1; // reset
    } else {
        q->front = (q->front + 1) % SIZE;
    }
    return value;
}

int peekQueue(Queue* q) {
    if (isEmptyQueue(q)) return -1;
    return q->items[q->front];
}
