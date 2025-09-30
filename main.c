#include <stdio.h>
#include "stack.h"
#include "queue.h"
#include "hash.h"

int main() {
    printf("==== STACK DEMO ====\n");
    Stack s;
    initStack(&s);
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    printf("Top of stack: %d\n", peekStack(&s));
    printf("Popped: %d\n", pop(&s));
    printf("Popped: %d\n", pop(&s));

    printf("\n==== QUEUE DEMO ====\n");
    Queue q;
    initQueue(&q);
    enqueue(&q, 1);
    enqueue(&q, 2);
    enqueue(&q, 3);
    printf("Front of queue: %d\n", peekQueue(&q));
    printf("Dequeued: %d\n", dequeue(&q));
    printf("Dequeued: %d\n", dequeue(&q));

    printf("\n==== HASH TABLE DEMO ====\n");
    HashTable ht;
    initHash(&ht);
    insert(&ht, "apple", 50);
    insert(&ht, "banana", 20);
    insert(&ht, "orange", 30);
    printHash(&ht);
    printf("Search apple: %d\n", search(&ht, "apple"));
    delete(&ht, "banana");
    printHash(&ht);

    return 0;
}
