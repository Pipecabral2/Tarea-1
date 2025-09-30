#include "stack.h"
#include <stdio.h>

void initStack(Stack* s) {
    s->top = -1;
}

int isEmptyStack(Stack* s) {
    return s->top == -1;
}

int isFullStack(Stack* s) {
    return s->top == MAX - 1;
}

void push(Stack* s, int value) {
    if (isFullStack(s)) {
        printf("Stack Overflow\n");
        return;
    }
    s->items[++s->top] = value;
}

int pop(Stack* s) {
    if (isEmptyStack(s)) {
        printf("Stack Underflow\n");
        return -1;
    }
    return s->items[s->top--];
}

int peekStack(Stack* s) {
    if (isEmptyStack(s)) return -1;
    return s->items[s->top];
}
